#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map <string, int> marksMap;
    marksMap["Anmol"] = 35;
    marksMap["Rishi"] = 99;
    marksMap["Rohit"] = 56;
    marksMap.insert(pair<string, int>("Patel", 12));
    marksMap.insert(pair<string, int>("Patelji", 212));
    marksMap.insert(pair<string, int>("Patel2", 112));
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin();iter != marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;   
    }
    cout<<"The size is : "<<marksMap.size()<<endl;    
    cout<<"The max_size is : "<<marksMap.max_size()<<endl;    
    cout<<"The Return value of empty is : "<<marksMap.empty()<<endl;    
    return 0;
}