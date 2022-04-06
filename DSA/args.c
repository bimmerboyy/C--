#include <iostream>
using namespace std;
int main(int argc, const char* argv[]){
    int s = 0;
    for(int i = 1; i<argc; i++) {
        int j = atoi(argv[i] );
        s+=j;
    }
        cout <<endl<<s<<endl;
  return 0;
}