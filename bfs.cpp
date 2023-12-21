#include <vector>
#include <queue>
#include <iostream>
#include <fstream>
using namespace std;

void bfs(vector<vector<int>> adjacencyMatrix, int v){
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
            //cout<<vqueue.front()<<endl;
            vqueue.pop();
        }
}

