#include <iostream>
using namespace std;

main()
{
    int totalVertices;
    cout << "Enter the number of vertices: ";
    cin >> totalVertices;
    int adjacencyMatrix[totalVertices][totalVertices];
    cout << "Enter the adjacency matrix: " << endl;
    for (int i = 0; i < totalVertices; ++i)
    {
        for (int j = 0; j < totalVertices; ++j)
        {
            cout << "Matrix[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> adjacencyMatrix[i][j];
        }
    }
    cout << "Edges and Counts:" << endl;
    for (int i = 0; i < totalVertices; ++i)
    {
        for (int j = 0; j < totalVertices; ++j)
        {
            if (adjacencyMatrix[i][j] > 0)
            {
                cout << "Edge: " << i + 1 << " to " << j + 1 << "\tCount: " << adjacencyMatrix[i][j] << endl;
            }
        }
    }
}
