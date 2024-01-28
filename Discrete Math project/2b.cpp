#include <iostream>
using namespace std;

main()
{
    int totalVertices;
    cout << "Enter the number of vertices: ";
    cin >> totalVertices;
    int edges[totalVertices][2];
    int edgeCount = 0;
    cout << "Enter the directed edges from vertex 1 to vertex 2 (Enter values less than 1 to finish): " << endl;
    int vertex1, vertex2;
    while (true)
    {
        cout << "Enter vertex 1 of edge " << edgeCount + 1 << ": ";
        cin >> vertex1;
        cout << "Enter vertex 2 of edge " << edgeCount + 1 << ": ";
        cin >> vertex2;
        if (vertex1 < 1 || vertex2 < 1)
        {
            break;
        }
        if (vertex1 > totalVertices || vertex2 > totalVertices)
        {
            cout << "Invalid vertices. Please enter vertices between 1 and " << totalVertices << "." << endl;
            return 0;
        }
        edges[edgeCount][0] = vertex1;
        edges[edgeCount][1] = vertex2;
        edgeCount++;
    }
    int inDegrees[totalVertices] = {0};
    int outDegrees[totalVertices] = {0};
    for (int i = 0; i < edgeCount; ++i)
    {
        outDegrees[edges[i][0] - 1]++;
        inDegrees[edges[i][1] - 1]++;
    }
    cout << "Vertex degrees: " << endl;
    for (int i = 0; i < totalVertices; ++i)
    {
        cout << "Vertex " << i + 1 << " has in-degree " << inDegrees[i]
             << " and out-degree " << outDegrees[i] << endl;
    }
}
