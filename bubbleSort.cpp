#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"Enter a number";
    int input;
    cin>>input;
    int arr[input];
    for (int  i = 0; i < input; i++)
    {
        cin>>arr[input];
    }
    for (int i = 0; i < input; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}
