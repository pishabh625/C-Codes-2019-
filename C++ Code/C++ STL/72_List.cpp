#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin();it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1; //list of 0 lenght
    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(14);
    display(list1);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(4);
    // display(list1);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;

    list<int> list2(3); //Empty list of 7 integer
    list<int> :: iterator ite;
    ite = list2.begin();
    *ite = 45;
    ite++;
    *ite = 49;
    ite++;
    *ite = 47;
    ite++;
    display(list2);
    list1.merge(list2);
    list1.sort();
    display(list1);

    

    
return 0;
}