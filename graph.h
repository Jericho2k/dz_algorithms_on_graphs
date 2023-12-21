#pragma once

// ===Imports===
#include <iostream>
#include <vector>

// ===Class===
class Graph {
public:
    Graph(int vertices);
    void addEdge(int v, int w); // setting 1's at places where the edge is present
    void displayMatrix(); // easy matrix display
    std::vector<std::vector<int>> getAdjacencyMatrix();

private:
    int vertices;
    std::vector<std::vector<int>> adjacencyMatrix;
    void initializeMatrix(); // matrix initialization
};
