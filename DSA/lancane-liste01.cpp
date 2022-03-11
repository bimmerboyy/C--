#include<iostream>
using namespace std;
struct node{
    int data; // vrednost
    struct node *link; // adresa sledeceg cvora
};
int main(){
    struct node *head = NULL; // head predstavlja prvu adresu cvora
    head = (struct node *)malloc(sizeof(struct node)); //kreiranje prvok cvora
    head -> data = 10; // prvom cvoru dodeljujemo vrednost 10
    head -> link = NULL; // sledeci je NULL
    cout << head -> data;
    return 0;
}