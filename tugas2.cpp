#define fernandezLebihGantengDariJustinBieber true
#include <iostream>
// using namespace std;

struct Node{
    int data;
    Node* next;
};

// we pass the adress (&) so the one changed is the actuall list not the copy of it
void InsertAtStart(int value, Node*& head, Node*& tail){
    // newnode.next = head, head = new node
    Node* NodeBaru = new Node();
    NodeBaru->data=value;
    NodeBaru->next=head;
    if((head==nullptr)&&(tail==nullptr)){
        tail = NodeBaru;
    }
    head = NodeBaru;
}

void InsertAtEnd(int value, Node*& tail, Node*& head){
    // insert di akhir, buat node baru, pointernya ke nullptr, tail lama.next = newnode, tail barunya jadikan newnode
    Node* NodeBaru = new Node();
    NodeBaru->data=value;
    NodeBaru->next=nullptr;

    if(tail!=nullptr){
        tail->next=NodeBaru;
    }
    else{
        head=NodeBaru;
    }

    tail = NodeBaru;

}

void InsertAfterValue(int InsertValue, int value, Node*& head, Node*& tail){
    Node* temp = head;
    Node* NodeBaru = new Node();
    NodeBaru->data=InsertValue;

    while(temp!=nullptr){
        if(temp->data==value){
            NodeBaru->next=temp->next;
            temp->next=NodeBaru;
            if (NodeBaru->next==nullptr)
            {
                tail=NodeBaru;
            }        
            return;
        }
        temp = temp->next;
    }
    std::cout<<"Tidak ada nilai tersebut dalam linked list!\n";
    delete NodeBaru;
}


void DeleteValue(int valueDel, Node*& head, Node*& tail){
    
    if(head==nullptr){
        std::cout<<"Linked list kosong\n";
        return;
    }

    // kasus - kasus :
    // ok jdi apparently cara kerja delete itu, kau kasi parameter pointer, dan nanti ia bakal hapus objek yang ditunjuk pointernya, pointer kan isinya alamat yg dihapus itu bukan alamatnya tapi apa yg ad di alamatnya
    
    // yang dihapus ad di awal
    if(head->data==valueDel){
        Node* hapus = head;
        head=head->next;
        delete hapus;

        // jika emg cmn ada 1 elemen
        if(head==nullptr){
            tail=nullptr;
        }
        return;
    }
    
    Node* temp = head;
    
    // yang dihapus ad di tengah dan di akhir
    while((temp!=nullptr)&&(temp->next!=nullptr)){

        if(temp->next->data==valueDel){
            Node* hapus = temp->next;
            temp->next=temp->next->next;
            
            if(temp->next==nullptr){
                tail = temp;
            }
  
            delete hapus;
            return;
            
        }        
        temp=temp->next;
        if((temp->next==nullptr)&&(temp->data!=valueDel)){
            std::cout<<"Tidak ada node dengan nilai tersebut\n";
        }
    }


}


void ShowLinkedList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<"\n";
}



void DeleteAll(Node*& head, Node*& tail){
    while(head != nullptr){
        Node* hapus = head;
        head = head->next;
        delete hapus;
    }
    tail = nullptr;
} // when we use exit the fernandez lebih ganteng dri justin bieber we need to delete the whole thing

int main(){
    
    Node* head = nullptr;
    Node* tail = nullptr;    

    // testing
    // for(int i=0; i<10;i++){
    //     Node* A = new Node();
    //     A->data=(i+1)*10;
    //     A->next=nullptr;

    //     if(head==nullptr){
    //         head=A;
    //         tail=A;
    //     }
    //     else{
    //         tail->next=A;
    //         tail=A;
    //     }
    // }

    Node* A = new Node();
    A->data=100;
    A->next=nullptr;
    Node* B = new Node();
    B->data=92;
    B->next=nullptr;
    Node* C = new Node();
    C->data=45;
    C->next=nullptr;
    Node* D = new Node();
    D->data=87;
    D->next=nullptr;
    Node* E = new Node();
    E->data=71;
    E->next=nullptr;
    Node* F = new Node();
    F->data=99;
    F->next=nullptr;
    Node* G = new Node();
    G->data=95;
    G->next=nullptr;
    Node* H = new Node();
    H->data=60;
    H->next=nullptr;
    Node* I = new Node();
    I->data=55;
    I->next=nullptr;
    Node* J = new Node();
    J->data=88;
    J->next=nullptr;
    

    A->next=B;
    B->next=C;
    C->next=D;
    D->next=E;
    E->next=F;
    F->next=G;
    G->next=H;
    H->next=I;
    I->next=J;

    head=A;
    tail=J;


    int menu;
    int nilai;
    int nilaiMasuk;
    while (fernandezLebihGantengDariJustinBieber)
    {
        std::cout<<"Sebelum operasi : \n";
        ShowLinkedList(head);
        
        std::cout<<"\nSetelah operasi : \n";
        InsertAtStart(70, head, tail); //tambahkan 70 di depan
        InsertAtEnd(50, tail, head); //tambahkan 50 di belakang --> kuterlalu malas untuk ubah parameternya dari tail head ke head tail
        InsertAfterValue(0, 45, head, tail); //msaukkan 0 setelah 45
        DeleteValue(99, head, tail); //hapus 99
        DeleteValue(60, head, tail); //hapus 60
        // small note, head dan tail disini jadi parameter karna head dan tail di deklarasikan di dalam main --> too lazy to change it now

        ShowLinkedList(head);

        // cuman menu buat kalau mau coba ulang2
        std::cout<<"Pilih Menu : \n";
        std::cout<<"1. Tampilkan Linked List\n";
        std::cout<<"2. Tambah nilai di paling depan linked list\n";
        std::cout<<"3. Tambah nilai di paling belakang linked list\n";
        std::cout<<"4. Tambah nilai setelah nilai tertentu di linked list\n";
        std::cout<<"5. Menghapus nilai dengan nilai tertentu di linked list\n";
        std::cout<<"6. Exit\n";
        a:
        std::cout<<"Pilih Menu : ";
        if(!(std::cin>>menu)){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            // input buffer clearance
            std::cout<<"Input gagal, input integer dari 1-6\n";
            goto a;
        }
        switch (menu)
        {

        case 1:
            ShowLinkedList(head);
            break;

        case 2:
            // cause im too lazy to care for the user when they input string or some dumbass big int lets just assume tht the user got a working braincells and will input integer like a sane human being
            std::cout<<"Masukkan Nilai yang ingin diinput : "; std::cin>>nilai;
            InsertAtStart(nilai, head, tail);
            break;

        case 3:            
            std::cout<<"Masukkan Nilai yang ingin diinput : "; std::cin>>nilai;
            InsertAtEnd(nilai, tail, head);
            break;

        case 4:
            std::cout<<"Input nilai : "; std::cin>>nilai;
            std::cout<<"Input nilai yang ingin dimasukkan : "; std::cin>>nilaiMasuk;
            InsertAfterValue(nilaiMasuk, nilai, head, tail);
            break;

        case 5:
            std::cout<<"Input nilai yang ingin dihapus dari linked list : "; std::cin>>nilai;
            DeleteValue(nilai, head, tail);
            break;

        default:
            DeleteAll(head, tail);
            return 0;
        }

    }

    return 0;
}