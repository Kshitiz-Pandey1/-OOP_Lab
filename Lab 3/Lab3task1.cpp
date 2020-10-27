//CPP program to overload unary ++ for postfix and prefix increment operation on complex
//number using member function

#include<iostream>

using namespace std;

class complex{
    float real,img;
public:
    complex(){
        real=0;
        img =0;
    }

    complex(float r, float i){
        real=r;
        img =i;
    }

    complex operator ++(){
        complex temp;
        temp.real = ++real;
        temp.img = ++img;
        return temp;
    }

    complex operator ++(int){
        complex temp;
        temp.real = real++;
        temp.img = img++;
        return temp;
    }

    void showdata(){
        cout<< real <<"+i"<< img <<endl;
    }
};

int main(){
    complex c1(3,4), c2, c3;
    c2 = ++c1;
    c3 = c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
