#include<bits/stdc++.h>
using namespace std;

void printDFS(int**, int, int, bool*);
void printBFS(int**, int, int);

int main() {

      int numberOfNodes, numberOfEdges;
      cin >> numberOfNodes >> numberOfEdges;

      int **edges = new int*[numberOfNodes];
      for (int i = 0; i < numberOfNodes; i++) {
            edges[i] = new int[numberOfNodes];
            for(int j = 0; j < numberOfNodes; j++) {
                  edges[i][j] = 0;
            }
      }

      for(int i = 0; i < numberOfEdges; i++) {
            int startingNode, endingNode;
            cin >> startingNode >> endingNode;
            edges[startingNode][endingNode] = 1;
            edges[endingNode][startingNode] = 1;
      }

      bool *visitedVertex = new bool[numberOfNodes];
      for(int i = 0; i < numberOfNodes; i++) {
            visitedVertex[i] = false;
      }

      cout << "DFS :-" << " ";
      printDFS(edges, numberOfNodes, 0, visitedVertex);
      cout << endl;

      cout << "BFS :-" << " ";
      printBFS(edges, numberOfNodes, 0);
      cout << endl;

      delete[] visitedVertex;
      for(int i = 0; i < numberOfNodes; i++) delete [] edges[i];
      delete [] edges;

      return 0;
}

void printDFS(int **edges, int n, int startingVertex, bool *visitedVertex) {
      cout << startingVertex << " ";
      visitedVertex[startingVertex] = true;
      for(int i=0;i<n;i++) {
            if(startingVertex == i) continue;
            if(edges[startingVertex][i] == 1) {
                  if(visitedVertex[i]) continue;
                  printDFS(edges, n, i, visitedVertex);
            }
      }

      // This is DFS (Depth First Search).
      // Go in one direction untill it's end came.

}

void printBFS(int **edges, int n, int startingVertex) {
      bool *visitedVertex = new bool[n];
      for(int i=0;i<n;i++) {
            visitedVertex[i] = false;
      }
      queue<int> pendingVertex;
      pendingVertex.push(startingVertex);
      visitedVertex[startingVertex] = true;
      while(!pendingVertex.empty()) {
            int currentVertex = pendingVertex.front();
            pendingVertex.pop();
            cout << currentVertex << " ";
            for(int i = 0; i < n; i++) {
                  if(currentVertex == i) continue;
                  if(edges[currentVertex][i] == 1 && !visitedVertex[i]) {
                        pendingVertex.push(i);
                        visitedVertex[i] = true;
                  }
            }
      }

      // This is BFS (Breadth First Search).
      // Same as level order traversal in Trees.

}
