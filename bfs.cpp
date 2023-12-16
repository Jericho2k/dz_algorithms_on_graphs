#include <vector>
#include <stack>
#include <iostream>
#include <fstream>
using namespace std;

void bfs(vector<vector<int>> adjacencyMatrix, int v){
    stack <int> vstak; 
    int sizeGraph=adjacencyMatrix.size();
    bool visited[sizeGraph];
    for (int i=0; i<sizeGraph; i++){
        visited[i]=false;
    }
    vstak.push(v);
    visited[v]=true;
    while (vstak.size()!=0){
        stack <int> stack;
        while (vstak.size()>0){
            int vert=vstak.top();
            vector<int> listVert=adjacencyMatrix[vert];
            for (int i=0; i<listVert.size(); i++){
                if (listVert[i]==1 && !visited[i]){
                    stack.push(i);
                    visited[i]=true;
                }
            }
            vstak.pop();
        }
        vstak=stack;
    }

    
}

int main() {
    vector<vector<int>> adjacencyMatrix;
    adjacencyMatrix.resize(6);
    ifstream read("data.txt");
    for (int i=0; i<6;i++){
        adjacencyMatrix[i].resize(6);
        read>>adjacencyMatrix[i][0]>>adjacencyMatrix[i][1]>>adjacencyMatrix[i][2]>>adjacencyMatrix[i][3]>>adjacencyMatrix[i][4]>>adjacencyMatrix[i][5];
        
    }
    bfs(adjacencyMatrix, 0);
    return 0;
}
