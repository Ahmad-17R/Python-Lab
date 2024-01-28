#include <iostream>
using namespace std;

main()
{
    int totalVertices, totalEdges;
    cout << "Enter the number of vertices: ";
    cin >> totalVertices;
    cout << "Enter the number of edges: ";
    cin >> totalEdges;
    int edges[totalEdges][2];
    int Frequency[totalEdges];
    cout << "Enter the vertices and frequency of each edge:" << endl;
    for (int i = 0; i < totalEdges; ++i)
    {
        cout << "Enter vertex 1 of edge " << i + 1 << ": ";
        cin >> edges[i][0];
        cout << "Enter vertex 2 of edge " << i + 1 << ": ";
        cin >> edges[i][1];
        cout << "Frequency of edge " << i + 1 << ": ";
        cin >> Frequency[i];
    }
    int incidenceMatrix[totalVertices][totalEdges];
    for (int i = 0; i < totalVertices; i++)
    {
        for (int j = 0; j < totalEdges; j++)
        {
            incidenceMatrix[i][j] = 0;
        }
    }
    for (int i = 0; i < totalEdges; ++i)
    {
        incidenceMatrix[edges[i][0] - 1][i] = Frequency[i];
        incidenceMatrix[edges[i][1] - 1][i] = Frequency[i];
    }
    cout << "Incidence Matrix:" << endl;
    for (int i = 0; i < totalVertices; ++i)
    {
        for (int j = 0; j < totalEdges; ++j)
        {
            cout << incidenceMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
