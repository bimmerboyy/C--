#include<iostream>
using namespace std;
void zameni(int *pa,int *pb){
    *pa =  *pa ^ *pb;
    *pb =  *pa ^ *pb;
    *pa =  *pa ^ *pb;
}
void zameni2(int &a,int &b){
    a =  a ^ b;
    b =  a ^ b;
    a =  a ^ b;
}
int main()
{
  int x=1,y=2;
  cout<<"x="<<x<<"  y="<<y<<endl;
  zameni(&x,&y);
  cout<<"x="<<x<<"  y="<<y<<endl;
return 0;
}