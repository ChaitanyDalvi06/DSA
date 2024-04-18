#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the elements : ";
    cin>>num;

    int array[num];
    for(int i=0 ; i<num ; i++)
    {
        cout<<"Enter "<< i+1<<"the elements : ";
        cin>>array[i];
    }
    for(int i=0 ; i<num ; i++)
    {
        cout<<array[i]<<endl;
    }
return 0;
}