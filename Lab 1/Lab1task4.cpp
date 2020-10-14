//CPP program to illustrate the concept of inline function

#include<iostream>

using namespace std;

inline void add(){
    int a, b, c;
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"C value:"<<c<<endl;
}

int main(){
    add();
    cout<<"Call it again"<<endl;
    add();
    return 0;
}

