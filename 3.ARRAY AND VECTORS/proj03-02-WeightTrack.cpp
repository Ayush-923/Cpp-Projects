#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    const int NUM_PEOPLE=5;
    vector<string> name;
    vector<int> weight;
    string tempname;
    int tempweight;

    for(int i =0; i<NUM_PEOPLE; i++)
    {
        cout<<"Please enter a persons full name" <<endl;
        getline(cin, tempname);

        cout<<"Please enter "<<tempname << "'s weight:" << endl;
        cin>>tempweight;
        cin.get(); //consume new line character.
        name.push_back(tempname);
        weight.push_back(tempweight);
    }

    cout<<endl<<endl;

    for(int i=0; i<NUM_PEOPLE;i++)
    {
        cout<<name[i]<<" weights "<<weight[i] << " kg " << endl;
    }
    

    return 0;
}