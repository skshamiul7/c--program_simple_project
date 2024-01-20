#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    while(1)
    {
        int select,angel;
        float a,b,c,fact=1;
        double x,sine,term,cose,tane,cosece,sece,cote;
        unsigned i=1;
        cout<< "Welcome to scientific calculator \n";
        cout<< "Enter the Menu Bar choice : \n";
        cout<< "1. press 1 for (+) : \n";
        cout<< "2. press 2 for (-) : \n";
        cout<< "3. press 3 for (*) : \n";
        cout<< "4. press 4 for (/) : \n";
        cout<< "5. press 5 for (x^y) : \n";
        cout<<"6. press 6 for (x^3) : \n";
        cout<<"7. press 7 for (Sqrt) : \n";
        cout<<"8. press 8 for (Log) : \n";
        cout<<"9. press 9 for (exp) : \n";
        cout<<"10. press 10 for (sin) : \n";
        cout<<"11. press 11 for (cos) : \n";
        cout<<"12. press 12 for (tan) : \n";
        cout<<"13. press 13 for (Factorial) : \n";
        cout<<"Enter your choice : ";
        cin>>select;

        switch(select)
        {
        case 1:
            cout<<"Enter 2 number: ";
            cin>>a>>b;
            c=a+b;
            cout<< "addition ="<<c<<endl;
            //printf("(%.1f %.1f) =%.2f\n",a,b,c);
            break;

        case 2:
            cout<<"Enter 2 number: ";
            cin>>a>>b;
            c=a-b;
            cout<< "subtraction ="<<c<<endl;
            //printf("subtraction (%.0f %.0f) = %.2f \n",a,b,c);
            break;

        case 3:
            cout<<"Enter 2 number: ";
            cin>>a>>b;
            c=a*b;
            cout<< "multiplication ="<<c<<endl;
            //printf("multiplication (%.0f %.0f) = %.2f \n",a,b,c);
            break;
        case 4:
            cout<<"Enter 2 number: ";
            cin>>a>>b;
            c=a/b;
            cout<< "division ="<<c<<endl;
            //printf("division (%.0f %.0f) = %.2f \n",a,b,c);
            break;
        case 5:
            cout<< "Enter a value and the power : ";
            cin>>a>>b;
            c=pow(a,b);
            cout<< "Result ="<<c<<endl;
            //printf("Result %.0f ^%.0f  = %.2f \n",a,b,c);
            break;
        case 6:
            cout<<"Enter a value : ";
            cin>>a;
            c=a*a*a;
            cout<< "Result= "<<c<<endl;
            //printf("Result (%.0f) : %.2f \n",a,c);
            break;
        case 7:
            cout<<"Enter a square value : ";
            cin>>a;
            c=sqrt(a);
            cout<< "Result ="<<c<<endl;
            //printf("Result (%.1f) : %.2f \n",a,c);
            break;

        case 8:
            cout<<"Enter a Log value : ";
            cin>>a;
            c=log10(a);
            cout<< "Log 10 ="<<c<<endl;
            //printf("Log 10 (%.1f) = %.3lf  \n",a,c);
            break;
        case 9:
            cout<<"Enter a exp value : ";
            cin>>a;
            c=exp(a);
            cout<< "exp ="<<c<<endl;
            //printf("exp (%.1f) = %.3lf  \n",a,c);
            break;
        case 10:
            cout<<"Enter an angel in Degree :";
            cin>>angel;
            x=angel*M_PI/180.0;

            term=x;
            sine=term;
            while(fabs(term)>0.00001)
            {
                i=i+2;
                term=term*x*x/(i*(i-1));
                sine=sine+term;
            }
            cout<< "By Library sin(angel) = "<<sin(x)<<endl;
            //printf("By Library sin(%d)=%.3lf\n",angel,sin(x));
            break;

        case 11:
            cout<<"Enter an angel in Degree :";
            cin>>angel;
            //scanf("%d",&angel);
            x=angel*M_PI/180.0;

            term=x;
            cose=term;
            while(fabs(term)>0.00001)
            {
                i=i+1;
                term=term*x/(i*(i-1));
                cose=cose+term;
            }
            cout<< "By Library cos ="<<cos(x)<<endl;
            //printf("By Library cos(%d) =%.3lf\n",angel,cos(x));
            break;

        case 12:
            cout<<"Enter an angel in Degree :";
            cin>>angel;
            //scanf("%d",&angel);
            x=angel*M_PI/180.0;

            term=x;
            tane=term;
            while(fabs(term)>0.00001)
            {
                i=i+1;
                term=term*x/(i*(i-1));
                tane=tane+term;
            }
            tane=sin(x)/cos(x);
            if(tane==16331778728383844.000000)
            {
                cout<< "By Library tan = 1.#INF00 \n";
                //printf("By Library tan = 1.#INF00 \n");
            }
            else
            {
                cout<< "By Library tan ="<<tan(x)<<endl;
                //printf("By Library tan(%d) =%.3lf\n",angel,tan(x));
            }
            break;

        case 13:
            cout<<"Enter an int number : ";
            cin>>b;

            for(a=1;a<=b;a++)
            {
                fact=fact*a;
            }
            cout<< "Factorial of this number is ="<<fact<<endl;
            //printf("Factorial of this (%.0f!) number is :%.2f \n",b,fact);
            break;


        default:
            cout<<"This digit not belong to Menu bar \n";
            //printf("This digit not belong to Menu bar \n");

        }
        getch ();
    }
}
