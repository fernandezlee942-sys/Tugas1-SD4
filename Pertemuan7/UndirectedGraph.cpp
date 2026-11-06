#include <iostream>
#include <vector>
// using namespace std;

class Graph {
private:
    int numberVertex;
    std::vector<std::vector<int>> adjMatrix;
public:
    Graph(int banyakTitik) {
        numberVertex = banyakTitik;
        adjMatrix.resize(numberVertex, std::vector<int>(numberVertex, 0));
    }

    void addEdge(int i, int j) {
        if (i >= 0 && i < numberVertex && j >= 0 && j < numberVertex) {
            adjMatrix[i][j] = 1;
            adjMatrix[j][i] = 1;
        } else {
            std::cout << "Index nonvalid" << std::endl;
        }
    }

    void printAdjMatrix() {
        for (int i = 0; i < numberVertex; i++) {
            for (int j = 0; j < numberVertex; j++) {
                std::cout << adjMatrix[i][j] << ' ';
            }
            std::cout << std::endl; // Fixed: added std:: prefix
        }
    }
};

int main() {
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.printAdjMatrix();
    return 0;
}