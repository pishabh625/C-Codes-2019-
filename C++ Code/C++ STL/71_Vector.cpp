#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<"displaying vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" "<<endl;
    }
}

int main()
{
    vector<int> vec1; // zero size integer vector
    // display(vec1);

    int size = 5, element;
    // cout << "Enter The Size Of an Vector : ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add in a vector : ";
    //     cin >> element;
    //     vec1.push_back(element);            
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter+2, 500);
    // display(vec1);
    // display(vec2);
    vector<char> vec2(4); // 4 Element charactor vector
    // display(vec2);
    vector<char> vec3(vec2); // 4 Element charactor vector from vec2
    // display(vec3);
    vector<int> vec4(6, 3); // 6 element vector of 3s
    display(vec4);
    // cout<<endl<<vec4.size();
    // vec4.resize(4);
    // cout<<endl<<vec4.size();
    // cout<<endl<<vec4.capacity();
    // vec4.reserve(18);
    // cout<<endl<<vec4.capacity();
    // vec4.shrink_to_fit();
    // cout<<endl<<vec4.capacity();
    // cout<<endl<<vec4.size();
    // cout<<vec4.empty();
    
    
    return 0;
}