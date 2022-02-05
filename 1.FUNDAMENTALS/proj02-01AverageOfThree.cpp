#include<iostream>
using namespace std;

int main()
{
    double one,two,three;
    
    cout<<"Enter a real number: "<<endl;
    cin>>one;
    cout<<"enter another real number: "<<endl;
    cin>>two;
    cout<<"enter the final real number: "<<endl;
    cin>>three;

    double average = (one + two + three) / 3;
    cout<<"Average is :"<< average << endl;

    return 0;
}