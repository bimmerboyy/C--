#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<chrono>
#include <unistd.h>

using namespace std;
// using namespace std::this_thread; 
// using namespace std::chrono;


int main(){

    clrscr();
    int i;
    textcolor(RED);
    textbackground(WHITE);
    for(i = 0; i <= 120;i++){
      
        if(sleep(1)){
            cprintf("  I LOVE YOU \3 ");
        }
        
       
        
        
        // sleep_for(seconds(10));
       
    }
    
    getch();
    return 0;
}