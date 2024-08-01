#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,i,total=0;

    cout<< "\t\t---Student avgsheet---\n\n";

    cout<< "Enter how many  subjects avaiable:";
    cin>>a;

    int num[a];

    cout<< "\nEnter the marks of the subjects\n\n";
    for(i=0; i<a; i++)
    {
        cout<< "Enter subject "<< i+1 << " = ";
        cin>>num[i];
    }
    cout<< endl;

    for(i=0; i<a; i++)
    {
        cout<< "subject "<< i+1 << " = "<<num[i]<<endl;
        total=total+num[i];
    }

    cout<< "Total numbers avove " << a << " Subjects: "<<total<<endl;

     int avg=total / a;
     cout<< "Average : "<< avg;

    cout<< "\n\t\t----Grading---\n\n";

    if(avg>100 || avg<0)
        printf("Invalid number");
    else if(avg>=80 && avg<=100)
        printf("A+ \n");
    else if(avg>=70 && avg<=79)
        printf("A \n");
    else if(avg>=60 && avg<=69)
        printf("A- \n");
    else if(avg>=50 && avg<=59)
        printf("B \n");
    else if(avg>=40 && avg<=49)
        printf("C \n");
    else if(avg>=33 && avg<=39)
        printf("D \n");
    else if(avg>=0  && avg<=32)
        printf("F \n");

    getch();
}
