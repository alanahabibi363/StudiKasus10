#include <iostream>
using namespace std;

class lomba {
  friend istream& operator>>(istream& in, lomba&);
  friend ostream& operator<<(ostream& out, lomba&);

public :
  void input();
  void proses();
  void output();
 
private :
  const int array =5;
  int nim[5];
  string name[5];

};


// void lomba::input(){
//   int nim [5];
//   string name [5];
// 	for (int x=0; x<5; x++){
//         cout<<"Masukkan NIM : ";cin>>nim[x];
//         cout<<"Masukkan Nama: ";cin>>name[x];
//     }
// }


// void lomba::proses(){
//   int nim [5];
//   string name [5];
//      int *pInt=nim;
//      string *qInt=name;
//     cout<<"==================================\n";
// }

// void lomba::output(){
//     int *pInt;
//      string *qInt;
// 	cout<<"Daftar Mahasiswa : "<<endl;
//     for (int n=1; n<=5; n++)
//     {
//         cout<<n<<". "<<*(pInt)<<" ";
//         pInt++;
//         cout<<*(qInt)<<endl;
//         qInt++;
//     }
// }
