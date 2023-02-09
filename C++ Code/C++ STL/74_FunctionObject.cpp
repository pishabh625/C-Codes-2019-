#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //Function wraped in a class so that it available like an object Is called "Function Object(Functor)""
    int arr[] = {2, 9, 1, 3, 99, 77};
    sort(arr, arr+6, greater<int>()); //This will print an array in decending order
    sort(arr, arr+6);// This will print an array in assending order
    for (int i = 0; i < 6 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}