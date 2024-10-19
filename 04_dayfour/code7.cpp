#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=i*1+1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}