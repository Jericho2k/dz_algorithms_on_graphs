//===Imports===

#include<iostream>
#include <chrono>
#include"functions.h"
#include"graph.h"
#include"graph.cpp"
#include "bfs.cpp"

using namespace std;

//===Main Code===
int main() {
    Graph graph(6); // 6 vertices in the graph

    // Example data. Tests will be created later.
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(0, 5);
    vector<vector<int>> adjacencyMatrix = graph.getAdjacencyMatrix();
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

    cout << "BFS algorithm"<<endl;
    //BFS CALL HERE
    auto start1 = std::chrono::system_clock::now();
    bfs(adjacencyMatrix, 0);
    auto end1 = std::chrono::system_clock::now();
	auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1);
	cout << "TIME: " << duration1.count() << " mcs" << endl;
    cout << endl;

    cout << "DFS with stack algorithm";
    //DFSWithStack CALL HERE
    cout << endl;

    cout << "Topological Sort algorithm";
    //TopologicalSort CALL HERE
    cout << endl;

    cout << "DFS with back edges algorithm";
    //DFSWithBackEdges CALL HERE

    cin.get(); // to prevent the code from closing

    return 0;
}