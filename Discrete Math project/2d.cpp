#include <iostream>
using namespace std;

main()
{
    int totalVertices;
    cout << "Enter the number of vertices: ";
    cin >> totalVertices;
    int totalEdges;
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
    int adjacencyMatrix[totalVertices][totalVertices];
    for (int i = 0; i < totalVertices; i++)
    {
        for (int j = 0; j < totalVertices; j++)
        {
            adjacencyMatrix[i][j] = 0;
        }
    }
    for (int i = 0; i < totalEdges; ++i)
    {
        adjacencyMatrix[edges[i][0] - 1][edges[i][1] - 1] = 1;
        adjacencyMatrix[edges[i][1] - 1][edges[i][0] - 1] = 1;
    }
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < totalVertices; ++i)
    {
        for (int j = 0; j < totalVertices; ++j)
        {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
}