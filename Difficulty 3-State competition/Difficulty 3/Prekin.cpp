/*
https://mendo.mk/Task.do?id=141
*/
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
    
int N, E;
vector<pair<int, int> > G[101];
    
vector<pair<int, int> > used;         
pair<int, int> blocked = {-1, -1};   
    
int blocked_edge(int from, int to)
{
    if (from == blocked.first && to == blocked.second)
    {
        //ova rebro ne smeeme da go koristime (vidi algoritam podolu)
        return true;
    }
    
    if (from == blocked.second && to == blocked.first)
    {
        //ova e obratnoto rebro (bidejki grafot e nenasocen)
        return true;
    }
    
    //ne e blokirano
    return false;
}
   
int prim(int start)
{
    int sum = 0;
    
    vector<int> distance;
    distance.resize(N + 1);
    for (int i=1; i<=N; i++)
    {
        distance[i] = 1000000000; //nekoj golem broj
    }
    
    priority_queue<pair<int, int> > pq;
    distance[start] = 0;
    pq.push({0, start});
    
    int visited[N + 1];
    memset(visited, 0, sizeof(visited));
    
    int parent[N + 1];
    memset(parent, -1, sizeof(parent));
    
    while (!pq.empty())
    {
        pair<int, int> state = pq.top();
        pq.pop();
    
        int competitor = state.second;
    
        if (visited[competitor] == 0)
        {
            visited[competitor] = 1;
            sum += distance[competitor];
    
    
            if (parent[competitor] != -1)    //za prviot grad nemame parent[]
            {
                //zapameti deka sme go iskoristile ova rebro
                used.push_back({parent[competitor], competitor});  //parent[competitor] do competitor
            }
    
            for (auto edge : G[competitor])
            {
                int next = edge.first, price_between_competitors = edge.second;
    
                if (!blocked_edge(competitor, next) && distance[next] > price_between_competitors)
                {
                    parent[next] = competitor;
                    distance[next] = price_between_competitors;
                    pq.push({ -distance[next], next });
                }
            }
        }
    }
    
    return sum;
}
    
int main()
{
    cin >> N >> E;
    
    for (int i=1; i<=E; i++)
    {
        int Ai, Bi, Ci;
        cin >> Ai >> Bi >> Ci;
    
        G[Ai].push_back({Bi, Ci}); //rebro od Ai do Bi
        G[Bi].push_back({Ai, Ci}); //bidejki grafot e nenasocen
    }

    int sum1 = prim(1); //mozheme da iskoristime bilo koj broj 1<=N za pocheten
    vector<pair<int, int> > used_in_mst = used;
    
    int sum2 = 1000000000;

    for (auto edge : used_in_mst)
    {
        used.clear();  //vekje go iskopiravme "used" vo "used_in_mst"
    
    
        blocked = edge;
        int current_sum = prim(1);
    
        if (used.size() == N - 1 && current_sum < sum2)
        {
            sum2 = current_sum;
        }
    }
    
    cout << sum1 << " " << sum2 << endl;
    return 0;
}