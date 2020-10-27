//CPP program to find the sum of two complex numbers using the concept of the overloading
//binary + operator using non-member/friend function

#include<iostream>

using namespace std;

class complex{
    float real, img;
public:
    complex(){
        real = 0;
        img = 0;
    }

    complex(float r, float i){
        real = r;
        img = i;
    }

    void showdata(){
        cout<<"The sum:"<<endl;
        cout<<real<<"+i"<<img<<endl;
    }

    friend complex operator +(complex, complex);
};

complex operator +(complex c1, complex c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main(){
    complex c1(5.5,6.6), c2(2.3,2.3), c3;
    c3 = c1 + c2;
    c3.showdata();
    return 0;
}
