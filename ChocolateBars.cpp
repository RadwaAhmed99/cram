#include <iostream>
#include <string>
using namespace std;

int main()
 {

 string Gender;
   float H,W,BMR,Age,chocolateBars;
   cout<<"Enter your Height in inches : "<<endl;
   cin>>H;
   cout<<"Enter your Weight in pounds : "<<endl;
   cin>>W;
   cout<<"Enter your Age in years: "<<endl;
   cin>>Age;
   cout<<" Write M if you are a male and F if you are a female: "<<endl;
   cin>>Gender;
   if(Gender=="M"){
        BMR=66+(6.3*W)+(12.9*H)-(6.8*Age);
   }
   else (Gender=="F");{
        BMR=655+(4.3*W)+(4.7*H)-(4.7*Age);
   }
   chocolateBars=BMR/230;
   cout<<"Number of Chocolate bars should be consumed : "<<chocolateBars<<<<endl;
    return 0;
}
