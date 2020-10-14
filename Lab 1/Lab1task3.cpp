// CPP program to find area of circle and rectangle using function overloading

#include<iostream>

using namespace std;

#define PI 3.14

float area(float r){
    return (PI*r*r);
}

float area(float l, float b){
    return(l*b);
}

int main(){
    float r, l, b;
    cout<<"Enter radius of circle:"<<endl;
    cin>>r;
    cout<<"Area of the circle:"<<area(r)<<endl;
    cout<<"Enter length and breadth of rectangle:"<<endl;
    cin>>l>>b;
    cout<<"Area of the rectangle:"<<area(l,b)<<endl;
    return 0;
}
