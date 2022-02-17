#include<iostream>
using namespace std;

int sumArray(int arr[], int size);

int main()
{
    int arr[]{2,5,2,10,20,15,100,25};
    int sum = sumArray(arr, 8);

    cout<<"Sum of the elements in myArray is "<<sum<<endl;

    return 0;
}

int sumArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
    
}