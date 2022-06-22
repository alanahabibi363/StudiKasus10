#include "../base.h"
#include <string.h>
using namespace std;
  
void lomba::proses(){
  int nim [array];
  string name [array];
  
     int *pInt=nim;
     string *qInt=name;
  
    for (int x=1; x<=array; x++){
        cout<<"Masukkan NIM : ";cin>>nim[x];
        cout<<"Masukkan Nama: ";cin>>name[x];
    }
    cout<<"==================================\n";
    cout<<"Daftar Mahasiswa : "<<endl;
    for (int n=1; n<array; n++)
    {
        cout<<n<<". "<<*(pInt)<<" ";
        pInt++;
        cout<<*(qInt)<<endl;
        qInt++;
  
  }
}  
int main (){
  lomba X;
  X.proses();

  return 0;
}
  