#include<iostream>
#include<string>
using namespace std;

int main()
{
    string adj1,girl;
    string adj2,occup1,place,cloth;
    string hobby,adj3,occup2,boy,man;

    cout<<"Please enter an adjective "<<endl;
    cin>>adj1;
    cout << "Please enter a girl's name: "<<endl;
    cin>>girl;
    cout << "Please enter another adjective "<<endl;
    cin>>adj2;
    cout << "Please enter an occupation "<<endl;
    cin>>occup1;
    cout<< "Please enter name of a place "<<endl;
    cin>>place;
    cout<<"Please enter the name of item of cloths in pural "<<endl;
    cin>>cloth;
    cout<<"Please enter a hobby "<<endl;
    cin>>hobby;
    cout<<"Please enter another adjective "<<endl;
    cin>>adj3;
    cout<<"Please enter another occupation "<<endl;
    cin>>occup2;
    cout<<"Please enter a boy's name "<<endl;
    cin>>boy;
    cout<<"Please enter a man's name "<<endl;
    cin>>man;

    cout<<"There once was a "<<adj1<<" girl named "<<girl<<" who was a "<<adj2<<" "<<occup1<<" in the kingdom of "<<place<<endl;
    cout<<"She loved to wear "<<cloth<<" and "<<hobby<<endl;
    cout<<"She wanted to marry the "<<adj3<<" "<<occup2<<" named "<<boy<<" but her father,king "<<man<<endl;
    cout<<"forbid her from seeing him."<<endl;
    
    return 0;

}