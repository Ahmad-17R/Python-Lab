#include <iostream>
using namespace std;

main()
{
    int totalVertices, totalEdges;
    cout << "Enter the maximum number of vertices: ";
    cin >> totalVertices;
    cout << "Enter the number of edges: ";
    cin >> totalEdges;
    int edges[totalEdges][2];
    int vertices[totalVertices] = {0};
    cout << "Enter the edge pairs: " << endl;
    for (int i = 0; i < totalEdges; ++i)
    {
        cout << "Enter vertex 1 of edge " << i + 1 << ": ";
        cin >> edges[i][0];
        cout << "Enter vertex 2 of edge " << i + 1 << ": ";
        cin >> edges[i][1];
    }
    for (int i = 0; i < totalEdges; ++i)
    {
        vertices[edges[i][0] - 1]++;
        vertices[edges[i][1] - 1]++;
    }
    cout << "Degrees of vertices:" << endl;
    for (int i = 0; i < totalVertices; ++i)
    {
        if (vertices[i] > 0)
        {
            cout << "Vertex " << i + 1 << " has degree " << vertices[i] << endl;
        }
    }
}
