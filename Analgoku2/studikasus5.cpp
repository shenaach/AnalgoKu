/*
Nama            : Sharashena Chairani
NPM             : 140810180022
Kelas 			: B
Nama Program    : Studi Kasus 5. Selection Sort
*/

#include <iostream>
#include <conio.h>

using namespace std;

int x[10],y[10];
int n;

void tukar(int a, int b)
{
 int t;
 t = x[b];
 x[b] = x[a];
 x[a] = t;
}
void selection_sort()
{
 int pos,i,j;
 for(i=1;i<=n-1;i++)
 {
  pos = i;
  for(j = i+1;j<=n;j++)
  {
   if(x[j] < x[pos]) pos = j;
  }
  if(pos != i) tukar(pos,i);
 }
}

main()
{
 cout <<"\~~~~~~~~~~Selection sort~~~~~~~~~~~"<<endl;

 cout<<"\nMasukkan Jumlah x : ";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  cout<<"\nMasukkan x ke "<<i<<" : ";
  cin>>x[i];
  y[i]=x[i];
 }

 selection_sort();
 cout<<"\nx Setelah Selection Sort : ";
 for(int i=1; i<=n; i++)
 {
  cout<<" "<<x[i];
 }
 cout<<"\n\nSorting dengan selection sort selesai";
 cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
 getch();
}
