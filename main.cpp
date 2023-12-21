//===Imports===

#include<iostream>
#include"functions.h"
#include"graph.h"

using namespace std;

//===Main Code===
int main() {
    Graph graph(6); // 6 vertices in the graph

    // Example data. Tests will be created later.
    graph.addEdge(0, 2);
    graph.addEdge(2, 1);
    graph.addEdge(1, 4);
    graph.addEdge(4, 3);
    graph.addEdge(3, 5);

    //If additional functionality test is needed for your method add it in the dedicated section to not cause merge conflicts.
    //DFS | TEST DATA BELOW
    // - TEST -

    //BFS | TEST DATA BELOW
    // - TEST -

    //DFSWithStack | TEST DATA BELOW
    // - TEST -

    //TopologicalSort | TEST DATA BELOW
    // - TEST -

    //DFSWithBackEdges | TEST DATA BELOW
    // - TEST -



    cout << "DFS algorithm:";
    //DSF CALL HERE
    cout << endl;

    cout << "BFS algorithm";
    //BFS CALL HERE
    cout << endl;

    cout << "DFS with stack algorithm";
    //DFSWithStack CALL HERE
    cout << endl;

    cout << "Topological Sort\n";
    // Topological Sort
    std::vector<int> dfsResult = topologicalSortDFS(graph);
    std::vector<int> kahnsResult = topologicalSortKahnsAlgorithm(graph);
    std::vector<int> tarjanResult = topologicalSortTarjan(graph);
    for (int vertex : dfsResult) {
        cout << " " << vertex;
    }
    cout << endl;
    cout << "Kahn's algorithm:";
    for (int vertex : kahnsResult) {
        cout << " " << vertex;
    }
    cout << endl;

    cout << "Tarjan's algorithm:";
    for (int vertex : tarjanResult) {
        cout << " " << vertex;
    }
    cout << endl;

    cout << "DFS with back edges algorithm";
    //DFSWithBackEdges CALL HERE

    cin.get(); // to prevent the code from closing

    return 0;
}