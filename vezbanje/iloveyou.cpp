#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<chrono>
//#include <unistd.h>
#include <ctime>

using namespace std;
// using namespace std::this_thread; 
// using namespace std::chrono;


int main(){
    sleep(1);
    clrscr();
    int i;
    textcolor(RED);
    textbackground(WHITE);
    for(i = 0; i <= 120;i++){
        
    printf("\n");
     sleep(1.0);
    //  if(i % 2 == 0){
    //       cprintf("  I LOVE YOU   ");
    //  }
    
    //  if(i % 2 == 1){
    //        cprintf("  \t\tI LOVE YOU  ");
     }
       if(i % 3 == 0){
           cprintf("  \t\tI LOVE YOU  ");
     }
  
    
      
    }
    
    getch();
    return 0;
}