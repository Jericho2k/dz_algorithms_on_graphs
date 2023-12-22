#include "topsort.h"

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