#include <iostream>
using namespace std;
#include <deque>
 
int main()
{
    // Create a deque containing integers
    deque<int> d = {7, 9, 10, 16};
    deque<int> :: iterator iter;
    
    // Iterate and print values of deque
    for(int n : d) {
        cout << n << '\n';
    }
}





    // d.resize(2);
    // d.emplace(d.end() - 2, 17);
    // d.insert(d.begin() + 3, 13);
    // cout<<d.max_size();
    // d.shrink_to_fit();
    // d.push_front(13);
    // d.push_back(25);
    // cout<<d.size();
    // deque<int> d(5,14);
    // cout << d.empty();
    // d.clear();
    // d.erase(d.begin(),d.end());
    // d.get_allocator();
    // for_each(d.rbegin(),d.rend());
    // Add an integer to the beginning and end of the deque