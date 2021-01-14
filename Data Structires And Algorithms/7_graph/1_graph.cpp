#include<bits/stdc++.h>
using namespace std;

void printDFS(int**, int, int, bool*);

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

      printDFS(edges, numberOfNodes, 0, visitedVertex);

      return 0;
}

void printDFS(int **edges, int n, int startingVertex, bool *visitedVertex) {
      cout << startingVertex << endl;
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
