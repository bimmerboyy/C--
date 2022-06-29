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
struct DataItem * dummyItem;
struct DataItem * item;

int hashCode(int key) {
    return key % 9;
}

void insert(int key,int data){

}

// To be continued
