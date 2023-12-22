#pragma once

#include <vector>
#include <stack>

class Graph;

std::vector<int> topologicalSortDFS(Graph& graph);
std::vector<int> topologicalSortTarjan(Graph& graph);

