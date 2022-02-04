#include <bits/stdc++.h>
using namespace std;
// Link - https://leetcode.com/problems/is-graph-bipartite/
bool isBipartite(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<int> color(n);
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (color[i])
            continue;
        color[i] = 1;
        for (q.push(i); !q.empty(); q.pop())
        {
            int curr = q.front();
            for (int nbr : graph[curr])
            {
                if (!color[nbr])
                {
                    color[nbr] = -color[curr];
                    q.push(nbr);
                }
                else if (color[nbr] == color[curr])
                    return false;
            }
        }
    }
    return true;
}
int main()
{

    return 0;
}