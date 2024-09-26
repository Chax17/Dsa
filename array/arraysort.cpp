#include<iostream>
using namespace std;
int array[100];
int size;
void bubble()
{
  int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
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
    display();
    cout<<"The sorting is done using bubble sort technique"<<endl;
    bubble();
    display();
    return 0;
}