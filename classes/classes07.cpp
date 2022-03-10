//Metode vezbanje

#include<iostream>
using namespace std;
class World{
    public:
    void hello();
};
void World::hello(){
    cout<<"Hello World";
};
int main(){
    World h;
    h.hello();
    return 0;
}