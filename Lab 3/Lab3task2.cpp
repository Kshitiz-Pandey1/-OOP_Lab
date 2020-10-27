//CPP program to overload unary ++ for postfix and prefix increment operation on complex
//numbers using non-member/friend function

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
        cout<< real << "+i" << img <<endl;
    }

    friend complex operator ++(complex &);
    friend complex operator ++(complex &,int);
};

complex operator ++(complex &c){
    complex temp;
    temp.real = ++c.real;
    temp.img = ++c.img;
    return temp;
}

complex operator ++(complex &c, int){
    complex temp;
    temp.real = c.real++;
    temp.img = c.img++;
    return temp;
}

int main(){
    complex c1(3,4), c2, c3;
    c2 = ++c1;
    c3= c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
