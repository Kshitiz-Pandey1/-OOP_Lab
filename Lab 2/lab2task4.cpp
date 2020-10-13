// CPP program to illustrate the use of constructors and destructors

#include<iostream>

using namespace std;

class complex {
    float real, img;
public:
    complex(){
        real = 0;
        img = 0;
    }

    complex(float n1, float n2){
        real= n1;
        img = n2;
    }

    complex(const complex &c){
        real= c.real;
        img = c.img;
    }

    void display(){
        cout<<"real:"<<real<<endl;
        cout<<"img:"<<img<<endl;
    }
    ~complex(){
        cout<<"The data are destroyed"<<endl;
    }
};

int main(){
    complex c1, c2(1.2,2.1), c3;
    c1.display();
    c2.display();
    c3=c2;
    c3.display();
    return 0;
}
