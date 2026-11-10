#include <iostream>
#include <vector>
#include <list>
using namespace std;


const int TABLE_SIZE = 10;


class HashTable{
    private:
        vector<list<int>> table;
        
        int hashFunction(int key){
            return key%TABLE_SIZE;
        }

    public:
        HashTable(){
            table.resize(TABLE_SIZE);

        }
        void insert(int key){
            int index = hashFunction(key);
            table[index].push_back(key);
        }
        void display(){
            for(int i =0;i<TABLE_SIZE;i++){
                cout<<i<<" ";
                for(int data: table[i]){
                    cout<<data<<"->";
                }
                cout<<"NULL"<<endl;
            }
        }
};
           
int main(){
    
    HashTable ht;
    ht.insert(23);
    ht.insert(43);
    ht.insert(13);
    ht.insert(35);

    ht.display();
    return 0;


    
    //  hash ubah key jdi angka
    // hash proses ubah keu jdi angkanya
    // hash tabel nama sturktur datanya
    
    // h (key) = key % table size
    
    // ctrl shift e

    // resolusi kolisi
    // 1 chaining
    // 2 linear probing
    // 3 double hashing


    // chaining -> tiap index bs pny linked list utk trk bbrp data
    // 23 43 13 mod 10, nnti di tbl indeks 3 trk 23 -> 43-> 13

    // linear probing -> jika slot terisi cek slot setelahnya secara berurut, klo ad 23 43 13, nnti index 3 23, index 4 43, index 5 13
    
    // double hashing -> pake 2 fungsi hash utk tentukan posisi dan jarak perpindahan

    // hash 1 (key) = key % pnjg table (lets say 10)
    
    // hash 2 (key) = 7-(key%7)
    // 7 itu bil prima yg lbh kecil dri pnjg tabel -> ni hrs prima lbh kecil dri pnjg tabel dan ---- misheard, g hrs lbh bsr dri 1/2 ukuran tabel


    // index = (index+step)%10
    

    // lets say  23, 43, 63,
    // hash 1 (23) = 23%10 = 3 (indeks ke 3)
    // as i say again 10 is pnjg tabel

    // hash1 (43) = 43%10 = 3
    // hash2 7-(43%7) --> kt pake hash 2 karna hash 1 dh diduduki
    // hash 2 = 7-1 = 6 -> 6 bukan index tpi perpindahan
    // jdi index buat ini itu 3+6, jdi 43 trk di indeks ke 9
    // klo semisal perpindahan lbh dri 10 modkan 10 (aka balik dri awal)

    // lets say index ke 9 tdi ad item (ad sesautu sblm 43), kt tarok 43 di rumus indeks lagi
    // indeks baru = (6+9)%10=5


    // hash 1 (63) = 63%10 = 3;
    // h2 =7-(63%7)=7
    // index baru = 1

    // utk double hashing intinya hash 1 buat start awal
    // hash 2 buat cri step jump


    // untuk linear probing klo ada 11 elemen cmn ukuran tabel 10, elemen ke 11 g dipake

    

}