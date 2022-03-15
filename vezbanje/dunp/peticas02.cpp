#include<iostream>
using namespace std;
float prosek(int x[],int n){
    int s = 0;
    for(int i=0;i<=n;i++)
    s+= s[i]
    return(float)s/n;

}
void unos(int** mat,int n){
    cout<<"Unesite elmente matrice\n";
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>mat[i][j];
}
int minKolona(int**  X,int n){
    int i,j;
      int* pomNiz;
    float minProsk,jmin;
    for(j=0;j<n;j++){
      
        pomNiz = new int[n];
        for(i = 0;i<n;i++){
            pomNiz[i]=X[i][j];
        }
        float p = prosek(pomNiz, n);
        if(j == 0){
            jmin= 0,
            minProsk=p;
        }
        else{
            if(p < minProsk){
                minProsk = p;
                jmin= j;
            }
        }
    }
    return jmin;

}
int maxKolona(int**  X,int n){
    int i,j;
      int* pomNiz;
    float maxProsek,jmax;
    for(j=0;j<n;j++){
      
        pomNiz = new int[n];
        for(i = 0;i<n;i++){
            pomNiz[i]=X[i][j];
        }
        float p = prosek(pomNiz, n);
        if(j == 0){
            jmax= 0,
            maxProsek=p;
        }
        else{
            if(p < maxProsek){
                maxProsek = p;
                jmax= j;
            }
        }
    }
    return jmax;

}

void zamenaKolona(int** X,int n,int k1,int k2){
    int pom;
    for(int i=0;i<n;i++){
        pom = X[i][k2];
        X[i][k2] = pom;
    }
}
void ispis(int** mat,int n){
    int i,j;
    cout<<"Elementi marice su\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        cout<<mat[i][j]<<" ";
        cout<<"\n";
        }
    
    }
}
int main(){
    int **X,M,i;
    cout<<"Unesite red kvadratne matrice\n";
    cin>>M;
    X = new int*[M];
    for(i=0;i<M;i++)
        X[i] = new int[M];
    unos(X, M);
    int minKol = minKolona(X, M);
    int maxKol = maxKolona(X,M);
    cout<<"Kolona u kojoj se nalazi minimalni prosek je "<<minKol<<", a kolona u kojoj je  maksimalni prosek je"<<maxKol<<"\n";
   zamenaKolona(X, M, minKol, maxKol);
   ispis(X, M);
   for(i=0;i<M;i++)
   delete []X[i];
   delete []X;
   return 0;

}