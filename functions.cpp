//===Imports===

#include<iostream>
#include"functions.h"

using namespace std;
void Functions::dfs(const vector<vector<int>>& graph, int start) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    stack<int> s;

    // Помещаем стартовую вершину в стек
    s.push(start);
    visited[start] = true;

    while (!s.empty()) {
        int currentVertex = s.top();
        s.pop();
//        cout << currentVertex << " ";

        // Перебираем смежные вершины и добавляем их в стек, если они ещё не посещены
        for (int neighbor = numVertices - 1; neighbor >= 0; --neighbor) {
            if (graph[currentVertex][neighbor] == 1 && !visited[neighbor]) {
                s.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    cout << endl;
}
//==BFS==
void Functions::bfs(vector<vector<int>> adjacencyMatrix, int v){
    queue <int> vqueue; 
    int sizeGraph=adjacencyMatrix.size();
    bool visited[sizeGraph];
    for (int i=0; i<sizeGraph; i++){
        visited[i]=false;
    }
    vqueue.push(v);
    visited[v]=true;
    while (vqueue.size()!=0){
            int vert=vqueue.front();
            vector<int> listVert=adjacencyMatrix[vert];
            for (int i=0; i<listVert.size(); i++){
                if (listVert[i]==1 && !visited[i]){
                    vqueue.push(i);
                    visited[i]=true;
                }
            }
//            cout<<vqueue.front()<<" ";
            vqueue.pop();
        }
}
