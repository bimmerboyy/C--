#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define SIZE 20


struct DataItem{
    int data;
    int key;
};
struct DataItem * hashArray[SIZE];
struct DataItem * empyItem;
struct DataItem *item;
struct DataItem *temp;

int hashCode(int key){
    return key % SIZE;
}

void insert(int key,int data){
    item = (struct DataItem*)malloc(sizeof(struct DataItem));
    item->data = data;
    item->key = key;

    int hashIndex = hashCode(key);

    while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1){

        ++hashIndex;

        hashIndex %= SIZE;
    }

    hashArray[hashIndex] = item;

}

struct DataItem* brisanje(struct DataItem *item){
    int key = item->key;

   int hashIndex = hashCode(key);
    while(hashArray[hashIndex] != NULL){
        if(hashArray[hashIndex]->key == key){
            struct DataItem *temp = item;
        }

        hashArray[hashIndex] = empyItem;
        return temp;

        ++hashIndex;

    hashIndex %= SIZE;
    }
    return NULL;
    
}

struct DataItem *emptyItem = (struct DataItem*)malloc(sizeof(struct DataItem));

void display(){
   
   for(int i = 0; i < SIZE; i++){
    if(hashArray[i] != NULL){
        printf("%d -> %d\n",hashArray[i]->key,hashArray[i]->data);
    }
    else{
        printf("--");
    }
}
printf("\n");
}

int main(){
    insert(1,1);
    insert(2,2);
    insert(3,3);
    display();

    return 0;
}