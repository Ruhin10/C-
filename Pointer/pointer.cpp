#include<iostream>
using namespace std;
int main()
{
    int *number;
    number=new int; //new is for new address allocation
    *number=40; //asterisk is for value
    int *arr= new int[4];
    arr[0]=12;
    arr[1]=12;
    arr[2]=12;
    arr[3]=12;
    cout<<*number<<endl;
    cout<<number<<endl;
    delete arr; //delete is for delete the new function
    cout<<arr[0]<<endl; //because arr is delete so its will display random number
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
}
