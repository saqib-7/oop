#include <iostream>
#include <map>
#include <utility>
#include <cstring>
using namespace std;

int main(){
    typedef map<string, int> maptype;
    maptype state;
    state.insert(pair<string, int>("maharashtra", 112374333));
    state.insert(pair<string, int>("gujrat", 102345788));
    state.insert(pair<string, int>("uttarakhand", 29876551));
    state.insert(pair<string, int>("rajasthan", 398372633));
    state.insert(pair<string, int>("tamilnadu", 23893698));
    state.insert(pair<string, int>("kerala", 90907345));
    state.insert(pair<string, int>("hariyana", 98736344));
    state.insert(pair<string, int>("panjab", 9879555));
    
    maptype:: iterator iter = -- state.end();
    for(iter =  state.begin(); iter!= state.end(); ++iter){
        cout<<iter->first<<": "<<iter->second<<"$\n";
    }
    cout<<"\nThe Number of States Entries are- "<< state.size();
    string name;
    cout<<"\nEnter the Name of State: ";
    cin>>name;
    iter =  state.find(name);
    if(iter!= state.end()){
        cout<<"\n";
        cout<<name<<": "<<iter->second<<"$";
    }
    else{
        cout<<"\nEntry not found! Try Again.";
    }
    state.clear();
    return 0;
}
