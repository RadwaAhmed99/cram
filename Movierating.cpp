#include <iostream>
#include <string>
using namespace std;
class Movie
{private:
   string Moviename;
   string MPAA;
    int Terrible;
    int Bad;
    int OK;
    int Good;
    int Great;

public:
    Movie(string Mn,string Mp)
    {
        Moviename=Mn;
        MPAA=Mp;
        Terrible=0;
        Bad=0;
        OK=0;
        Good=0;
        Great=0;
    }
    void setMoviename(string Mn)
    {
        Moviename=Mn;
    }
    string getMoviename()
    {
        return Moviename;
    }
    void setMPAA(string Mp)
    {
        MPAA=Mp;
    }
    string getMPAA()
    {
       return MPAA;
    }

void addRating()
    {
        int rating;
        cout<<"please enter a number from 1 to 5 knowing that"<<endl<<"1 stands for Terrible"<<endl<<"2 stands for Bad"<<endl<<"3 stands for Ok"<<endl<<"4 stands for Good"<<endl<<"5 stands for Great"<<endl;
        cin>>rating;
        if (rating < 1 || rating > 5)
        {
            cout<<"Please Enter a Rate from 1 to 5"<<endl;
        }
        else
        {
             if (rating==1)
    {
        Terrible++;
        cout<<"Terrible "<<Terrible<<endl;
    }
    else if (rating==2)
    {
        Bad++;
        cout<<"Bad "<<Bad<<endl;
    }
    else if (rating==3)
    {
        OK++;
        cout<<"OK "<<OK<<endl;
    }
    else if (rating==4)
    {
        Good++;
        cout<<"Good "<<Good<<endl;
    }
    else if (rating==5)
    {
        Great++;
        cout<<"Great "<<Great<<endl;
    }
        }
    }
void getAverage ()
{
  float Average;
  Average=(1*Terrible+2*Bad+3*OK+4*Good+5*Great)/(Terrible+Bad+OK+Good+Great);
  cout<<"The Average of movie ratings is:"<<Average<<endl;
}

};

int main()
{
    Movie IN1("Inception","pg-13");
    IN1.setMoviename("Inception");
    IN1.setMPAA("pg-13");
    cout<<IN1.getMoviename()<<endl;
    cout<<IN1.getMPAA()<<endl;
    for (int i=0;i<5;i++){
    IN1.addRating();}
    IN1.getAverage();

    Movie JW2("John Wick2", "R");
    JW2.setMoviename("John Wick2");
    JW2.setMPAA("pg-13");
    cout<<JW2.getMoviename()<<endl;
    cout<<JW2.getMPAA()<<endl;
    for (int i=0;i<5;i++){
    JW2.addRating();}
    JW2.getAverage();



}
