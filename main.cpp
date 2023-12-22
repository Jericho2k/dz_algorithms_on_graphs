//===Imports===

#include<iostream>
#include <chrono>
#include"functions.h"
#include"functions.cpp"
#include"graph.h"
#include"graph.cpp"
#include "topsort.cpp"
#include "topsort.h"

using namespace std;

//===Main Code===
int main() {
    Functions functions;
    Graph graph(18); // 6 vertices in the graph

    // Example data. Tests will be created later.
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(0, 4);
    graph.addEdge(0, 7);
    graph.addEdge(1, 5);
    graph.addEdge(3, 17);
    graph.addEdge(4, 7);
    graph.addEdge(5, 8);
    graph.addEdge(5, 9);
    graph.addEdge(7, 14);
    graph.addEdge(8, 11);
    graph.addEdge(9, 12);
    graph.addEdge(10, 13);
    graph.addEdge(11, 12);
    graph.addEdge(11, 14);
    graph.addEdge(11, 15);
    vector<vector<int>> adjacencyMatrix = graph.getAdjacencyMatrix();
    

    cout << "BFS algorithm"<<endl;
    //BFS CALL HERE
    auto start1 = std::chrono::system_clock::now();
    functions.bfs(adjacencyMatrix, 0);
    cout << endl;
    auto end1 = std::chrono::system_clock::now();
	auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1);
	cout << "TIME: " << duration1.count() << " mcs" << endl;
    cout << endl;

    cout << "DFS with stack algorithm"<<endl;
    //DFSWithStack CALL HERE
    auto start2 = std::chrono::system_clock::now();
    functions.dfs(adjacencyMatrix, 0);
    auto end2 = std::chrono::system_clock::now();
	auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2);
	cout << "TIME: " << duration2.count() << " mcs" << endl;
    cout << endl;

     cout << "Topological Sort"<<endl;
    // Topological Sort
    auto start3 = std::chrono::system_clock::now();
    std::vector<int> dfsResult = topologicalSortDFS(graph);
    auto end3 = std::chrono::system_clock::now();
    auto duration3 = std::chrono::duration_cast<std::chrono::microseconds>(end3 - start3);
	cout << "TIME Dfs algoritm: " << duration3.count() << " mcs" << endl;
    for (int vertex : dfsResult) {
        cout << " " << vertex;
    }
    cout << endl;

    auto start4 = std::chrono::system_clock::now();
    std::vector<int> tarjanResult = topologicalSortTarjan(graph);
    auto end4 = std::chrono::system_clock::now();
    auto duration4 = std::chrono::duration_cast<std::chrono::microseconds>(end4 - start4);
	cout << "TIME Tarjan algoritm: " << duration4.count() << " mcs" << endl;
    for (int vertex : tarjanResult) {
        cout << " " << vertex;
    }
	

    cin.get(); // to prevent the code from closing

    return 0;
}