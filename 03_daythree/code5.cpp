#include<iostream>
using namespace std;

int main()
{
    int n;
     
     cin>>n;
    int flag=0;
     if(n>1)
     {
        for(int i= 2; i<n;i++)
        {
            if(n%i==0){
                flag = 1;
            }
        }
        if(flag ==1)
        {
            cout<<"this is not prime";
        }
        else{
            cout<<"this is prime";
        }
     }
}