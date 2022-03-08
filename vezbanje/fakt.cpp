/*Program za testiranje funkcije za racunanje faktorijala program racuna sumu s=1!+..+n!.*/ 
#include <iostream>
int fakt(int);
int faktr(int);//rekuzivna funkcija
main(){
int n;
int i,s=1;
cout<<"\nUnesi n:";
cin>>n;
cout<<"Suma s=1!";
  for(i=2;i<=n;i++){
    s+=fakt(i);	
    cout<<" +"<<i<<"!";}
cout<<"="<<s;
		
}
int fakt(int n){
	int i,fakt=1;
	for(i=1;i<=n;i++)
	fakt*=i;
	return fakt;
	 
}
int faktr(int n){
	if (n==1)
		return 1;
	else
	    return n*faktr(n-1);
}

