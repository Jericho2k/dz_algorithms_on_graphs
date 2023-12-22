#pragma once

// ===Imports===
#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
// ===Class===
class Graph {
public:
    Graph(int vertices);
    void addEdge(int v, int w); // setting 1's at places where the edge is present
    void displayMatrix(); // easy matrix display
    void topologicalSortDFSUtil(int v, std::vector<bool>& visited, std::stack<int>& stack);
    int getVertices() const;
    std::vector<std::vector<int>> getAdjacencyMatrix();

private:
    int vertices;
    std::vector<std::vector<int>> adjacencyMatrix;
    void initializeMatrix(); // matrix initialization
};
