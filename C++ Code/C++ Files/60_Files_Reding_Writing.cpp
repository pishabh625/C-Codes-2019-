#include<iostream>
#include<fstream>  

using namespace std;

int main(){
    string st = "Harry bhai jindabad patel ji";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out<<st;

    return 0;
}

