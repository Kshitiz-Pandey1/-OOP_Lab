//CPP program to enter details of students and display details using concept of class and objects

#include<iostream>

using namespace std;

class student{
    char name[20];
    int roll;
    float marks;
    char add[30];

public:
    void getdata(){
        cout<<"enter name, roll, marks, and address:"<<endl;
        cin>>name>>roll>>marks>>add;
    }

    void showdata(){
        cout<<"The required details are:"<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"ROll no.="<<roll<<endl;
        cout<<"Marks="<<marks<<endl;
        cout<<"Address="<<add<<endl;
    }
};

int main(){
    student s;
    s.getdata();
    s.showdata();
    return 0;
}
