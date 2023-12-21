#include "topsort.h"
#include "graph.h"

std::vector<int> topologicalSortDFS(Graph& graph) {
    std::vector<int> result;
    std::stack<int> stack;
    std::vector<bool> visited(graph.getVertices(), false);

    for (int i = 0; i < graph.getVertices(); ++i) {
        if (!visited[i]) {
            graph.topologicalSortDFSUtil(i, visited, stack);
        }
    }

    while (!stack.empty()) {
        result.push_back(stack.top());
        stack.pop();
    }

    return result;
}

std::vector<int> topologicalSortKahnsAlgorithm(Graph& graph) {
    std::vector<int> result;
    std::vector<int> inDegree(graph.getVertices(), 0);

    for (int i = 0; i < graph.getVertices(); ++i) {
        for (int j = 0; j < graph.getVertices(); ++j) {
            inDegree[j] += graph.getAdjacencyMatrix()[i][j];
        }
    }

    std::queue<int> q;
    for (int i = 0; i < graph.getVertices(); ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        result.push_back(current);
        for (int neighbor = 0; neighbor < graph.getVertices(); ++neighbor) {
            if (graph.getAdjacencyMatrix()[current][neighbor] == 1) {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }
    }

    if (result.size() != static_cast<size_t>(graph.getVertices())) {
        std::cout << "Graph contains a cycle! Topological sorting not possible.\n";
        return std::vector<int>(); 
    }

    return result;
}

std::vector<int> topologicalSortTarjan(Graph& graph) {
    std::stack<int> stack;
    std::vector<bool> visited(graph.getVertices(), false);

    for (int i = 0; i < graph.getVertices(); ++i) {
        if (!visited[i]) {
            graph.topologicalSortDFSUtil(i, visited, stack);
        }
    }

    std::vector<int> result;
    while (!stack.empty()) {
        result.push_back(stack.top());
        stack.pop();
    }

    return result;
}