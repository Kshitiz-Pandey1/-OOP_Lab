//CPP program to enter details of n students and display details using the concept of class and objects

#include<iostream>

using namespace std;

class student{
    char name[20];
    int roll;
    float marks;
    char add[30];
 public:
     void getdata(){
        cout<<"Enter name, roll, marks, address of students:"<<endl;
        cin>>name>>roll>>marks>>add;
     }

     void showdata(){
        cout<<"The required details are:"<<endl<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Roll no.="<<roll<<endl;
        cout<<"Marks="<<marks<<endl;
        cout<<"Address="<<add<<endl;
     }
};

int main(){
    student std[40];
    int i, n;
    cout<<"Enter number of students:"<<endl;
    cin>>n;
    for(i=0; i<n; i++){
        cout<<"student:"<<i+1<< endl;
        std[i].getdata();
    }
    cout<<endl;

    for(i=0; i<n; i++){
        std[i].showdata();
    }
    cout<<endl;
}
