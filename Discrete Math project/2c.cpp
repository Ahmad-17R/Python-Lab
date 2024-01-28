#include <iostream>
using namespace std;

bool isBipartite(int edges[][2], int totalEdges, int totalVertices);

main()
{
    int totalVertices, totalEdges;
    cout << "Enter the number of vertices: ";
    cin >> totalVertices;
    cout << "Enter the number of edges: ";
    cin >> totalEdges;
    int edges[totalEdges][2];
    cout << "Enter the edges (vertex pairs):" << endl;
    for (int i = 0; i < totalEdges; ++i)
    {
        cout << "Enter vertex 1 of edge " << i + 1 << ": ";
        cin >> edges[i][0];
        cout << "Enter vertex 2 of edge " << i + 1 << ": ";
        cin >> edges[i][1];
    }
    if (isBipartite(edges, totalEdges, totalVertices))
    {
        cout << "The graph is bipartite." << endl;
    }
    else
    {
        cout << "The graph is not bipartite." << endl;
    }
}

bool isBipartite(int edges[][2], int totalEdges, int totalVertices)
{
    int color[totalVertices];
    for (int i = 0; i < totalVertices; i++)
    {
        color[i] = 1;
    }
    for (int i = 0; i < totalEdges; ++i)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        if (color[u] == 1)
        {
            color[u] = 0;
        }
        if (color[v] == 1)
        {
            color[v] = 2 - color[u];
        }
        else if (color[v] == color[u])
        {
            return false;
        }
    }
    return true;
}
