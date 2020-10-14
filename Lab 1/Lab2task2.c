// C program to enter details of students and display it using concept of structure

#include<stdio.h>
#include<conio.h>

struct student{
    char name[20];
    int roll;
    float marks;
    char add[30];
}s[50];

int main(){
    int i, n;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter name:\n");
        scanf("%s",s[i].name);
        printf("Enter roll number:\n");
        scanf("%d",&s[i].roll);
        printf("Enter marks:\n");
        scanf("%f",&s[i].marks);
        printf("Enter address:\n");
        scanf("%s",s[i].add);
    }
    for(i=0; i<n; i++){
        printf("\n Name:%s\n",s[i].name);
        printf("Roll number:%d\n",s[i].roll);
        printf("Marks:%f\n",s[i].marks);
        printf("Address:%s\n",s[i].add);
    }
    return 0;
}
