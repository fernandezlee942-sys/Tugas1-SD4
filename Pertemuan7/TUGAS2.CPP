#include <iostream>
#include <vector>
#include <climits>
// using namespace std;

class Graph {
private:
    int V;
    std::vector<std::vector<int>> adjMatrix;
    
    // #1
    void printPath(int current, const std::vector<int>& parent) {
        if (current == -1) {
            return;
        }
        printPath(parent[current], parent);
        std::cout<<(char)(current + 'A') << " ";
        // have just learnt apparently ppl put (char)() instead of char() is bcos they're crazy
    }
    // this one is kinda confusing so i put some notes here just in case future me forgot wtf is this abomination
    // it will run by printing from the most parent to the current
    // it will run the print path from the most parent (root or whtever you call it), than its child before it finally goes for the current std::cout<<char current, tht will runs last due to the recursion

public:
    // std::vector<int>(a,b) -> size is a, the initial value is b
    Graph(int jumlahVertex) {
        V = jumlahVertex;
        adjMatrix.resize(V, std::vector<int>(V, 0));
    }

    void addEdge(int u, int v, int weight) {
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight;
    }


    // #2
    void shortestPath(int source, int destination) {
        std::vector<int> distance(V, INT_MAX);
        std::vector<bool> visited(V, false);
        std::vector<int> parent(V, -1);

        distance[source] = 0;
        for (int i = 0; i < V; i++) {
            int u = -1;
            for (int j = 0; j < V; j++) {       
                if (!visited[j] && (u == -1 || distance[j] < distance[u])) {
                    u = j;
                }
            }

            if (u == -1 || distance[u] == INT_MAX) break;
            visited[u] = true;
            
            for (int v = 0; v < V; v++) {
                if (adjMatrix[u][v] != 0 && !visited[v]) {
                    int newDistance = distance[u] + adjMatrix[u][v];
                    if (newDistance < distance[v]) {
                        distance[v] = newDistance; 
                        parent[v] = u;
                    }
                }
            }
        }

        std::cout<<"Dari: "<<(char)(source + 'A')<<" ke "<<(char)(destination + 'A')<<std::endl;
        if(distance[destination]==INT_MAX){
            std::cout<<"Status: Tidak terjangkau"<<std::endl;
        }
        // !
        else{
            std::cout<<"Total Jarak: "<<distance[destination]<<std::endl;
            std::cout<<"Jalur (Rute): ";
            printPath(destination, parent);
            std::cout<<std::endl;
        }
    }



    void dijkstra(int source) {
        std::vector<int> distance(V, INT_MAX);
        std::vector<bool> visited(V, false);

        distance[source] = 0;

        for (int i = 0; i < V; i++) {
            // di run 5 kali i g kepake cmn murni biar bs jalan 5 kali (buat visit semua yg ada)
            int u = -1;
            for (int j = 0; j < V; j++) {       
                if (!visited[j] && (u == -1 || distance[j] < distance[u])) {
                    u = j;
                }
            }

            if (u == -1 || distance[u] == INT_MAX) break;
            visited[u] = true;
            
            for (int v = 0; v < V; v++) {
                if (adjMatrix[u][v] != 0 && !visited[v]) {
                    int newDistance = distance[u] + adjMatrix[u][v];
                    if (newDistance < distance[v]) {
                        distance[v] = newDistance; 
                    }
                }
            }
        }

        std::cout << "Jarak terpendek dari vertex " << (char)(source + 'A') << ":" << std::endl;
        
        for (int i = 0; i < V; i++) {
            // #3
            if (distance[i] == INT_MAX) {
                std::cout << (char)(i + 'A') << " : Tidak terjangkau" << std::endl;
            } else {
                std::cout << (char)(i + 'A') << " : " << distance[i] << std::endl;
            }
        }
    }

};

// vertex 0 = a, 1 = b dsb
int main() {
    Graph graph(6);

    graph.addEdge(0, 1, 4);
    graph.addEdge(1, 2, 1);
    graph.addEdge(2, 3, 8);
    graph.addEdge(3, 4, 2);
    graph.addEdge(4, 5, 3);
    graph.addEdge(0, 2, 2);
    graph.addEdge(1, 3, 5);
    graph.addEdge(2, 4, 6);
    graph.addEdge(3, 5, 4);
    graph.addEdge(1, 4, 3);

    graph.dijkstra(0);

    char Start, Dest;
    std::cout << "\nMasukkan lokasi awal (A-F): ";
    std::cin >> Start;
    std::cout << "Masukkan lokasi tujuan (A-F): ";
    std::cin >> Dest;

    // karna inputnya dikonversi pakai kode ascii harap user sedikit berakal sehat dan ikuti format yang ada, user dianggap punya kemampuan belajar lebih dari anak tk untuk menyadari bahwa input bersifat case sensitive
    // validasi huruf A-F tidak dibuat karna tidak diminta dan karna user dianggap berakal sehat

    int StartI = Start - 'A';
    int DestI = Dest - 'A';

    graph.shortestPath(StartI, DestI);

    return 0;
}