#include "graph.h"
#include "topsort.h"  

Graph::Graph(int vertices) : vertices(vertices) {
    adjacencyMatrix.resize(vertices, std::vector<int>(vertices, 0));
}
void Graph::addEdge(int v, int w) {
    if (v >= 0 && v < vertices && w >= 0 && w < vertices) {
        adjacencyMatrix[v][w] = 1; 
    }
}

void Graph::topologicalSortDFSUtil(int v, std::vector<bool>& visited, std::stack<int>& stack) {
    visited[v] = true;

    for (int i = 0; i < vertices; ++i) {
        if (adjacencyMatrix[v][i] && !visited[i]) {
            topologicalSortDFSUtil(i, visited, stack);
        }
    }

    stack.push(v);
}

int Graph::getVertices() const {
    return vertices;
}
