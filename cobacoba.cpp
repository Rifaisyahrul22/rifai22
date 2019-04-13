#include <iostream>
using namespace :: std;
struct idn{
string nama, nim;
};
idn mhs;
int nt[3],ns[3],t[3],a[3],hasil[3],x,i;
void identitas(){
cout<<"\nmasukan NAMA :";cin>>mhs.nama;
cout<<"\nmasukan NIM :";cin>>mhs.nim;
cout<<"\nMASUKAN NILAI :"<<endl;
cout<<"\n\n**=================**";
cout<<"\n masukan jumlah data yang akan di masukan :";cin>>x;
}
void input(){
for(int i=0;i<=x;i++){
cout<<"\n NILAI UTS :";cin>>nt[i];
cout<<"\n NILAI UAS :";cin>>ns[i];
cout<<"\n NILAI TUGAS :";cin>>t[i];
cout<<"\n NILAI ABSEN :";cin>>a[i];
hasil[i]=nt[i]*20/100+ns[i]*20/100+t[i]*35/100+a[i]*15/100;
}}
main()
{
void identitas();
void input();
cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\nNama Mahasiswa = " <<mhs.nama;
cout<<"\nNIM            = " <<mhs.nim;
cout<<"\nNILAI :"<<hasil[i]<<endl;
cout<<"\nNILAI AKHIR :"<<endl;
if(hasil[i]>=81){cout<<"A";}
else if(hasil[i]>=61){cout<<"B";}
else if(hasil[i]>=41){cout<<"C";}
else if(hasil[i]>=21){cout<<"D";}
else{cout<<"E";}
}

