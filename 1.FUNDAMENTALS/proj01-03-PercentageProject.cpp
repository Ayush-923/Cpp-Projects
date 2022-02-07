#include<iostream>
#include<string>
using namespace std;

int main()
{
    string fullName;
    string location;
    int initialScore;
    cout<<"Enter your Full name: "<<endl;
    getline(cin, fullName);

    cout<<"Enter your Location: "<<endl;
    cin>>location;

    cout<<"Enter an integer from 0 to 100: "<<endl;
    cin>>initialScore;
    int incre = initialScore+5;

    cout<<"Hello, "<<fullName<<" We heard you are from "<<location<<" Your original score is "<<initialScore<<
    " ,but with five points added, your score is "<<incre<<endl;

    return 0;
}
