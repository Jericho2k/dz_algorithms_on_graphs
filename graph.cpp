// ===Imports===
#include "graph.h"
using namespace std;

// ===Implementation===
Graph::Graph(int vertices) : vertices(vertices) {
    adjacencyMatrix.resize(vertices, std::vector<int>(vertices, 0));
}

vector<std::vector<int>> Graph:: getAdjacencyMatrix(){
    return adjacencyMatrix;
}

void Graph::addEdge(int v, int w) {
    adjacencyMatrix[v][w] = 1;
    adjacencyMatrix[w][v] = 1;
}

void Graph::displayMatrix() {
    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Graph::initializeMatrix() {
    adjacencyMatrix.assign(vertices, vector<int>(vertices, 0));
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