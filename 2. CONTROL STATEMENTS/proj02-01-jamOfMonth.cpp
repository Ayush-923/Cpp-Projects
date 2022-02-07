#include<iostream>
#include<string>
using namespace std;

int main()
{
    char whichPackage;
    int jams=0;
    int monthfee=0;
    int jamIncluded=0;
    int jamprice=0;
    int totalCost;
    
    cout<<"What package do you own: "<<endl;
    cin>>whichPackage;
    cout<<"How many jams, jelly, or preserve you purchased this month?" << endl;
    cin>>jams;
    //default Values for the packages
    if(whichPackage == 'A' || whichPackage =='a')
    {
        monthfee = 8;
        jamIncluded = 2;
        jamprice = 5;

    }
    else if (whichPackage == 'B' || whichPackage == 'b')
    {
        monthfee = 12;
        jamIncluded = 4;
        jamprice = 4;

    }
    else if (whichPackage == 'C' || whichPackage == 'c')
    {
        monthfee = 15;
        jamIncluded = 6;
        jamprice = 3;

    }
    else
    {
        cout<<"You selected a non-existent package"<<endl;
    }

    //calculate total cost
    if(jams <= jamIncluded)
    {
        //just charge the monthly fee
        totalCost = monthfee;
    }
    else
    {
         //charge monthly fee + (difference) * jamprice
         totalCost = monthfee + (jams - jamIncluded) * jamprice;
         
    }

    cout<<"You owe:$"<<totalCost;

    return 0;
}