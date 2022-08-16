#include<iostream>
using namespace std;
int main()
{
    int i,j ,row,column;
    int **arr;
    cin>>row>>column;
    arr=new int*[row];
    for(i=0;i<row;i++)
    {
        arr[i]=new int[column];

    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            arr[i][j]=i*j;
        }
    }
    cout<<"[";
    for(i=0;i<row;i++)
    {
        cout<<"[";
        for(j=0;j<column;j++)
        {
            cout<<arr[i][j];
            if(j!=column-1){
            cout<<",";
        }
        }
        cout<<"]";
        if(i!=row-1){
            cout<<",";
        }

    }
    cout<<"]";
    
    return 0;

}