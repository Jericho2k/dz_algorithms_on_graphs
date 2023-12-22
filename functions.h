#pragma once

//===Imports===
#include<iostream>
#include"graph.h"
using namespace std;
class Functions {
public:
    void dfs(const vector<vector<int>>& graph, int start);
    void bfs(vector<vector<int>> adjacencyMatrix, int v);
};
