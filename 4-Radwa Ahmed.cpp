// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 3
// Program: inputs time from the console
// Purpose: convert time into four digits military time based on 24-hour clock
// Author:  Radwa Ahmed Mahmoud
// Date:    10 August 2018

#include <iostream>
#include <string>
using namespace std;

float hour,minute;
string y;
// function takes hours and minutes and a string either it's am or pm
//the function is responsible for taking time from the console and convert it into four digits
//military time based on 24-hour clock the function has lots of conditions because there are many special cases
void Time (int h,int m,string z)
{ if (z=="am")
{   if (h==12&&m==0){
      h=00;
     cout<<0<<h<<m<<0<<endl;}
     else if (h==12&&m<10)//as if user enters no. of minutes less than 10
        {h=00;
            cout<<0<<h<<0<<m<<"hours"<<endl;
        }
        else if (h==12&&m>=10){//as if user enters no. of minutes more than  or equal 10
            h=00;
            cout<<0<<h<<m<<"hours"<<endl;
        }


     else if (h<10&&m<10){// as if user enters no. of hours less than 10 o'clock  and minutes less than 10
        cout<<0<<h<<0<<m<<"hours"<<endl;
     }
      else if (h<10&&m>10){// as if user enters no. of hours less than 10 o'clock  and minutes more than 10
        cout<<0<<h<<m<<"hours"<<endl;
     }
     else if(h>=10&&m<10){// as if user enters no. of hours more than or equal 10 o'clock  and minutes less than 10
        cout<<h<<0<<m<<"hours"<<endl;
     }
     else if(h>=10&&m>10){// as if user enters no. of hours less than 10 o'clock  and minutes more than 10
        cout<<h<<m<<"hours"<<endl;
     }
     }
else if (z=="pm")
{    if (h==12&&m==0){
    h=12;
    cout<<h<<m<<0<<"hours"<<endl;}
    else if (h==12&&m<10){
    h=12;
    cout<<h<<0<<m<<"hours"<<endl;}
     else if (h==12&&m>10){
    h=12;
    cout<<h<<m<<"hours"<<endl;}
    else{
        h=h+12;
        if (m==0){
            cout<<h<<m<<0<<"hours"<<endl;
        }
        if(m>10){// as if user enters no. of  minutes more than 10 and the program should output 4 digits
            cout<<h<<m<<"hours"<<endl;

        }
        if(m<10){// as if user enters no. of minutes less than 10 and the program should output 4 digits
            cout<<h<<0<<m<<"hours"<<endl;
        }
    }


}
}


int main()
{
  cout << " Please, Enter time in HH:MM AM/PM format \n Enter hour   : ";
    cin>>hour;
    cout<<" Enter minutes: ";
    cin>>minute;
    cout<<" AM/PM        : ";
    cin>>y;
    Time(hour,minute,y);//calling the function

    return 0;
}
