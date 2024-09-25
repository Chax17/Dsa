#include<iostream>
using namespace std;
int array[100];
int size;
void display()
{
    cout<<"Array elements are"<<endl;
    for(int i=0;i<size;i++)
    cout<<array[i]<<" ";
    cout<<endl;
}
int search()
{
    int e;
    cout<<"Enter the element to be found"<<endl;
    cin>>e;
    for(int i=0;i<size;i++)
    {
        if(array[i]==e)
        {
        cout<<"Element found at "<<i<<"index "<<endl;
        return 1;
        }
    }
 return 0;
}
void insert()
{
    int elem,pos;
    cout<<"Enter the element to be inserted"<<endl;
    cin>>elem;
    cout<<"Enter the position where the element to be inserted"<<endl;
    cin>>pos;
    if(pos<=size)
    {
    for(int i=(size-1);i>=pos;i--)
    array[i+1]=array[i];
    array[pos]=elem;
    size=size+1;
    display();
    }
    else{
        cout<<"Invalid Position OR Invalid input"<<endl;
    }
}
void delet()
{
    int pos;
    cout<<"Enter the position where the element must be deleted from"<<endl;
    cin>>pos;
    if(pos<size)
    {
        for(int i=pos;i<size;i++)
        array[i]=array[i+1];
        size-=1;
    }
    else
    {
        cout<<"Invalid Position"<<endl;
    }
}
int main()
{
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int ch,n;
    
    while(1)
    {
    cout<<"Enter your choice"<<endl;
    cout<<"Enter 1. To Display"<<endl;
    cout<<"Enter 2. To search"<<endl;
    cout<<"Enter 3. To Insert"<<endl;
    cout<<"Enter 4. To Delete"<<endl;
    cout<<"Enter 5. Exit"<<endl;
    cin>>ch;
    if(ch==5)
    break;
    else
    switch(ch)
    {
        case 1:
        display();
        break;
        case 2:
        n=search();
        if(n==0)
        cout<<"Element not found"<<endl;
        break;
        case 3:
        insert();
        break;
        case 4:
        delet();
        break;
        default:
        cout<<"Invalid input!!!"<<endl;
        break;
    }
    }
    return 0;
}