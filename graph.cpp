// ===Imports===
#include "graph.h"
using namespace std;

// ===Implementation===
Graph::Graph(int vertices) {
    this->vertices = vertices;
    initializeMatrix();
}

//
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
