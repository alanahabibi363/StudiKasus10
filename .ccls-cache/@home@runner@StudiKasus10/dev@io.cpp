#include "../base.h"
using namespace std;
  
void lomba::input(){
  // const int array =5;
  int Z [5];
  string K [5];
  int *pInt=Z;
  string *qInt=K;
  
    for (int i=0; i<5; i++)
    {
        cout<<"Masukkan NIM : ";
        cin>>Z[i];
        cout<<"Masukkan NAMA: ";
        cin>>K[i];
        cout<<endl;
    }
    cout<<endl;
  
    cout<<"Daftar Mahasiswa : "<<endl;
    for (int n=1; n<=5; n++)
    {
        cout<<n<<". "<<*(pInt)<<" ";
        pInt++;
        cout<<*(qInt)<<endl;
        qInt++;
    }
//  // node *baru;
//  // baru = new node;
//  // baru->data = ;
//  // baru->berikut = NULL;
//  // cout << "Isi data node baru adalah : " << baru->data << endl;
 
  // int nim1 = 2100018208;
  // int nim2 = 2100018209;
  // int nim3 = 2100018207;
  // int nim4 = 2100018206;
  // int nim5 = 2100018205;
  // string nama1 = "Agus";
  // string nama2 = "Eko";
  // string nama3 = "Junaedi";
  // string nama4 = "Nela";
  // string nama5 = "Dinar";
  
  // int *A = &nim1; 
  // int *B = &nim2; 
  // int *C = &nim3; 
  // int *D = &nim4; 
  // int *E = &nim5; 
  // string *Q = &nama1;
  // string *V = &nama2;
  // string *W = &nama3;
  // string *X = &nama4;
  // string *Y = &nama5;

  // cout<<"Daftar Mahasiswa : "<<endl;
  // cout<<*A<<" ";
  // cout<<*Q<<endl;
  // cout<<*B<<" ";
  // cout<<*V<<endl;
  // cout<<*C<<" ";
  // cout<<*W<<endl;
  // cout<<*D<<" ";
  // cout<<*X<<endl;
  // cout<<*E<<" ";
  // cout<<*Y<<endl;
  // int *nim;
  // int *nim1;
  // nim=new int;

  // *nim = 2100018208;
 
  
}

// void lomba::output(){
  
  
// }

int main(){
  lomba X;
  X.input();
  // X.output();
  return 0;
}