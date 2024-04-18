#include <iostream>
using namespace std;
int main()
{
    int size,index;
    cout<<"Enter the size of array : ";
    cin>>size;
    int array[size];

for (int i=0 ; i<size ; i++)
{
    cout<<"enter "<< i+1 <<" elements : ";
    cin>>array[i];
}

cout<<"Enter the index which you want to delete : ";
cin>>index;

for(int j=index ; j<size ; j++ ) 
{
    array[j]=array[j+1];
}

for(int k=0 ; k<size ; k++) 
{
    cout<<array[k]<<endl;
}

return 0;
}