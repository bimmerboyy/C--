// Klasa Post ima nsalov,opis, rating,uername,cerated
// Metode inacijalizacija, upvote +1,downvote -1;
#include<iostream>
#include<string.h>
using namespace std;

class Post{
    public:
    string naslov,opis,username,created;
    int rating;
    Post(string n,string o,string u,string c){
        naslov = n;
        opis = o;
        rating = 0;
        username = u;
        created = c;
    }
    void upvote();
    void downvote();
    void ispis();
};
void Post::upvote(){
    rating++;
}
void Post::downvote(){
    rating--;
}
void Post::ispis(){
    cout<<"Naslov: " <<endl<<naslov<<endl<<endl<<endl;
    cout<<"Opis "<<endl<<endl<<opis<<endl<<endl;
    cout<<"Username: "<<endl<<username<<endl;
    cout<<"Created: "<<created<<endl;

    cout<<"Ima trenutni rejting: "<<rating<<endl;
}
int main(){
    Post sadrzaj("Create a number of entry boxes specified by user","I am trying to figure "
    "out how in python tkinter to have an entry box that asks for user integer input and then that many new entry "
    "boxes are created a set distance apart. Any help with this would be appreciated. Thank you","Andrew172 ","Today");
    sadrzaj.upvote();
    sadrzaj.upvote();
    sadrzaj.upvote();
    sadrzaj.upvote();
    sadrzaj.downvote();
    sadrzaj.downvote();
    

    sadrzaj.ispis();
    return 0;

}