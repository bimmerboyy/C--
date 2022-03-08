/*Napisati program kojim se testira f-ja prost  koja 
  proverava da li je broj prost.
  Program stampa brojeve blizance(susedni neparni brojevi koji su prosti)*/
  #include<iostream>
  
  using namespace std;
  int prostBroj(int broj){
    int i,prost = 0;
    for(i = 2;i <= broj/2;i++){
      prost = 1;
      break;
    }
    return prost;
  }
  int main(){
   
    int br,i,n;
    cout<<"Unesite n:";
    cin>>n;
    for(i = 3;i < n;i+=2){
      if(prostBroj(i) == 1 && prostBroj(i + 2) == 1){
        cout<<i<<"\n"<<(i+2);
      }
    }
  return 0;
}
  