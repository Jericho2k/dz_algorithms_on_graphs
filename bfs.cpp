#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
using namespace std;

void bfs(vector<vector<int>> adjacencyMatrix){
    int sizeGraph=adjacencyMatrix.size();
    bool visited[sizeGraph];
    for (int i=0; i<sizeGraph; i++){
        visited[i]=false;
    }
    cout<<visited[0];
    
}

int main() {
    vector<vector<int>> adjacencyMatrix;
    adjacencyMatrix.resize(5);

    for (int i=0; i<5;i++){
        adjacencyMatrix[i].resize(5);
        for (int j=0; j<5; j++){
            adjacencyMatrix[i][j]=0;
        }
    }
    bfs(adjacencyMatrix);
    return 0;
}
