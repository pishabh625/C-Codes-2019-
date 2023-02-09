#include<iostream>
using namespace std;
 int rd,hi,ac,le,br;

// int sum(float a, int b){
//     cout<<"Using function with 2 arguments"<<endl;
//     return a+b;
// }

// int sum(int a, int b, int c){
//     cout<<"Using function with 3 arguments"<<endl;
//     return a+b+c;
// }


// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}
void getData(){
   
    char b;
    cout<<"Volume Do You Want To calculate press (b for cylinder )(c for cube )(r for ractangle) : ";
    cin>>b;
    if(b=='b'){
        cout<<"Enter The radius:";
        cin>>rd;
        cout<<"Enter The hight:";
        cin>>hi;
        cout<<"The volume of cylinder of radius "<<rd<<" and height "<<hi<<" is : "<<volume(rd, hi)<<endl;
    }
    else if(b=='c'){
        cout<<"Enter The side of Cube :";
        cin>>ac;
        cout<<"The volume of cube of side "<<ac<<" is : "<<volume(ac)<<endl;
        
    }
    else if(b=='r'){
        cout<<"Enter The length:";
        cin>>le;
        cout<<"Enter The bridth:";
        cin>>br;
        cout<<"Enter The hight:";
        cin>>hi;
        cout<<"The volume of cuboid of " <<le<<", "<<br<<" and "<<hi<<" is : "<<volume(le, br, hi)<<endl;
    }
}

int main(){
    getData();
    // cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    // cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    return 0;
}
