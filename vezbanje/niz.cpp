#include<iostream.h>
/** Napisati program koji ucitava celorojni niz A od n elementata (n<=20).
    Na osnovu niza A se formira niz B .Elementi niza B su indeksi elementa niza A ,
    tako da kada bi smo elemente niza A smestili u niz C redom po indeksima iz niza B,
    niz C bi bio sortiran u opadajucem redosledu.
 **/
 #define MAX  20
int main() {
	int a[MAX],b[MAX];
	int i,j,pom,n;
	cout<<"Unesite velicinu niza"<<endl;
	cin>>n;
	cout<<"Unesite elemente niza"<<endl;
	for(i=0;i<n;i++)
	{cin>>a[i];
	 b[i]=i; 
	
	}
	
	for(i=0;i<n-1;i++)
	 for(j=i+1;j<n;j++)
	   if(a[b[i]]<a[b[j]])
	   {  pom=b[i];
	      b[i]=b[j];
	      b[j]=pom;
	   }
	   cout<<"Elementi niza B su"<<endl;
		for(i=0;i<n;i++)
	{cout<<b[i]<<endl; 
	
	}   
return 0; 
}
