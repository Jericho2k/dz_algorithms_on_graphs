#pragma once

#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
// ===Class===
class Graph {
public:
    Graph(int vertices);
    std::vector<int> topologicalSortKahnsAlgorithm();
    std::vector<int> topologicalSortDFS();
    void addEdge(int v, int w);
    void displayMatrix();
    void initializeMatrix();
    std::vector<int> topologicalSortTarjan();
    void topologicalSortDFSUtil(int v, std::vector<bool>& visited, std::stack<int>& stack);
    int getVertices() const;
    std::vector<std::vector<int>> getAdjacencyMatrix() const {
        return adjacencyMatrix;
    }

private:
    int vertices;
    std::vector<std::vector<int>> adjacencyList;
    void topologicalSortUtil(int v, std::vector<bool>& visited, std::stack<int>& stack);
    std::vector<std::vector<int>> adjacencyMatrix;
    std::vector<int> inDegree;
};  
