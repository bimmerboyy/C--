#include<iostream>
#include <ostream>
#include<list>

using namespace std;

class YouTubeChannel{
    private:
    string name;
    int subscribersCount;
    public:
    YouTubeChannel(string n,int s){
        name = n;
        subscribersCount = s;
    }
    string getName(){
        return name;
    }
    int getSubscribersCount(){
        return subscribersCount;
    }
};
class MyCollection{
    public:
    list<YouTubeChannel>myChannels;

    void operator+=(YouTubeChannel& channel){
        this->myChannels.push_back(channel);
    }

};

ostream& operator<<(ostream& COUT,MyCollection& myCollection){
    for(YouTubeChannel ytChannel:myCollection.myChannels)
    COUT<<ytChannel<<endl;
    return COUT;
}


ostream&  operator<<(ostream& COUT,YouTubeChannel& ytChannel){
    COUT<<"Name:"<<ytChannel.getName()<<endl;
    COUT<<"Subsribers:"<<ytChannel.getSubscribersCount()<<endl;
    return COUT;
}   

int main(){
    YouTubeChannel y1("Ziveo Kretenizam",100000);
    YouTubeChannel y2("Baka Prase",3000000);

    MyCollection myCollection;

    myCollection += y1;
    myCollection += y2;

    //cout<<myCollection;

   // cout << y1<<y2;

  // operator<<(cout,myCollection);

   operator<<(cout,y1);
  
    
    return 0;
}