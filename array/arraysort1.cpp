#include<iostream>
using namespace std;
int array[100];
int size;
void selection()
{
    int min,temp;
    for(int i=0;i<size;i++)
    {
        min=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[min])
            {
               min=j;
            }
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
}
void display()
{
    for(int i=0;i<size;i++)
   {
    cout<<array[i];
   } 
}
int main()
{
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"The sorting is done using Selection sort"<<endl;
    selection();
    display();
    return 0;
}