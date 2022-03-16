// Klasa Post ima nsalov,opis, rating,uername,cerated
// Metode inacijalizacija, upvote +1,downvote -1;
#include <iostream>
#include<string.h>
using namespace std;
 class Post{
     public:
        char naslov[15],opis[200],username[15],created[10];
        int rating;
        public:
        void inacijalizacija(char *n,char *o,char *u,char *c);
        void upvote();
        void downvote();
        void ispis();
        
};
void Post::inacijalizacija(char *n, char *o,char *u,char *c){
    strcpy(naslov, n);
    strcpy(opis, o);
    strcpy(username, u);
    strcpy(created, c);
    rating = 0;
}
void Post::upvote(){
    rating++;
}
void Post::downvote(){
    rating--;
}
void Post::ispis(){
    cout<<"Nalov posta "<<naslov<<"\n";
     cout<<"Opsi posta"<<opis<<"\n";
      cout<<"keriran"<<created<<" od strane korisnika "<<username<<"\n";

       cout<<"Ima ternutni rejting: "<<rating<<"\n";

}

int main(){
    Post p1;
    p1.inacijalizacija("Public vs Private in C++ ", "Why you use private attributes in c++? Can somebody explain me that please","dunpexp","09.03.2022");
    p1.upvote();
    p1.upvote();
    p1.upvote();
    p1.upvote();
    p1.upvote();

    p1.downvote();
    p1.downvote();
    p1.downvote();
    p1.downvote();
    p1.downvote();

    p1.ispis();
    return 0;
   
}