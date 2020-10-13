// CPP program to find sum of two complex number using the concept of oop

#include<iostream>

using namespace std;

class complex{
    float real,img;
public:
    void input(){
        cout<<"Enter a complex number:"<<endl;
        cin>>real>>img;
    }

    void output(){
        cout<<"The result is :"<<real<<"+i"<<img;
    }

    void add(complex n1, complex n2){
        real= n1.real+ n2.real;
        img= n1.img + n2.img;
    }
};

int main(){
    complex n1, n2, n3;
    n1.input();
    n2.input();
    n3.add(n1,n2);
    n3.output();
    return 0;
}
