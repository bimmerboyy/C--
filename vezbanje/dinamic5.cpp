#include <iostream>

using namespace std;

#define BR_ELEM 10
int main()
{
int **a, **b,m,n, i,j;
cout<<"\nUnesite broj vrsta i kolona\n";
cin>>m>>n;

a = new int*[m];
for(i=0;i<m;i++){
a[i] = new int[n];
for (j = 0; j<n; j++){
cout<<"m["<<i<<"]["<<j<<"] = ";
cin>>a[i][j];
}
}
b = new int*[n];
for(i=0;i<n;i++){
b[i] = new int[m];
for (j = 0; j<m; j++){
b[i][j]=a[j][i];}
}
for(i=0;i<n;i++){
for (j = 0; j<m; j++)
cout<<"mt["<<i<<"]["<<j<<"] ="<<b[i][j]<<" \n";
}
for(i=0;i<m;i++) delete [] a[i]; 
for (j = 0; j<n; j++) delete []b[j];
delete []a;
delete []b;
}
