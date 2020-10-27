// CPP program to find the sum of two complex numbers using the concept of the overloading
//binary + operator using member function

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

    complex operator +(complex c){
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    void showdata(){
        cout<<"The sum is"<<endl;
        cout<<real<<"+i"<<img<<endl;
    }
};

int main(){
    complex c1(5.5,6.6), c2(2.3, 2.3), c3;
    c3 = c1+c2;
    c3.showdata();
    return 0;
}
