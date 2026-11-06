// bfs undirected unweighted

#include<iostream>
#include<vector>
#include<queue>
// using namespace std;

class Graph {
    private:
        int numberVertex;
        std::vector<std::vector<int>> adjMatrix;

    public:
        Graph (int banyakTitik) {
            numberVertex = banyakTitik;
            adjMatrix.resize(numberVertex, std::vector<int>(numberVertex, 0));
        }

    void addEdge(char iChar, char jChar) {
        int i = iChar - 'A';
        int j = jChar - 'A';

        if (i >= 0 && i < numberVertex && j >= 0 && j < numberVertex) {
            adjMatrix[i][j] = 1;
            adjMatrix[j][i] = 1;
        }
        else {
            std::cout<<"Index nonvalid"<<std::endl;
        }
    }

    void printAdjMatrix() {
        for (int i = 0; i<numberVertex; i++) {
            for (int j = 0; j<numberVertex; j++) {
                std::cout<<adjMatrix[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }


    void bfs(char startChar){
        int startVertex = startChar - 'A';

        if (startVertex < 0 || startVertex >= numberVertex) {
            std::cout<<"Start Vertex tidak valid!"<<std::endl;
            return;
        }

        std::vector<bool> visited(numberVertex,false);
        std::queue<int> titikVisit;

        visited[startVertex]=true;
        titikVisit.push(startVertex);

        while(!titikVisit.empty()){
            int currentVertex = titikVisit.front();
            titikVisit.pop();
            
            std::cout<<(char)(currentVertex + 'A')<<std::endl;

            for(int i=0; i<numberVertex;i++){
                if(adjMatrix[currentVertex][i]==1 && !visited[i]){
                    visited[i]=true;
                    titikVisit.push(i);
                }
            }
        }
    }
};

int main() {
    Graph graphh(6);

    int c = -1;
    std::cout<<"Jumlah edge yang ingin diinput: ";std::cin>>c;
    for(int i=0;i<c;i++){
        char a = ' ';
        char b = ' ';
        std::cout<<"Input Edge ke - "<<i<<" (format a b -> A B): ";std::cin>>a;std::cin>>b;    
        // this shit is case sensitive and no check is done due to developer trust towards the user intelligence
        if((a >= 'A' && a <= 'F') && (b >= 'A' && b <= 'F'))
        {
            graphh.addEdge(a,b);
        }
        else{
            std::cout<<"Input out of bound"<<std::endl;
            i-=1;
        }
    }

    graphh.printAdjMatrix();
    std::cout<< std::endl;
    
    char d = ' ';
    std::cout<<"Input Start Vertex (from A to F): ";std::cin>>d;
    graphh.bfs(d);
    return 0;
}