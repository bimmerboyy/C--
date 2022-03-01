#include<iostream>
using namespace std;
class User{
     string status="Gold";
    public:
    string first_name;
    string last_name;
    string get_status(){
         return status;

    }
};
int main(){
    User me;
    me.first_name="Tarik";
    me.last_name="Kucevic";
    cout << "Status:" << me.get_status()<<endl;
    return 0;
}