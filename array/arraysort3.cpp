#include<iostream>
using namespace std;
int array[100];
int size;
void insertsort()
{
    for(int i=1;i<size;i++)
    {
        int insert =i;
        int current = array[i];
        for(int j=i-1;j>-1;j--)
       {
        if(array[j]>current)
        {
            array[j+1]=array[j];
            insert = j;
        }
        else
        break;
       } 
       array[insert]=current;
    }
}
void display()
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++)
    cin>>array[i];
    insertsort();
    cout<<"The sorted array is"<<endl;
    display();
    return 0;
}