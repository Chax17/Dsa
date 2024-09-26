#include<iostream>
using namespace std;
int array[100];
int size;
void bubble()
{
  int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
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
    cout<<endl;
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
    cout<<"The sorting is done using bubble sort technique"<<endl;
    bubble();
    display();
    return 0;
}