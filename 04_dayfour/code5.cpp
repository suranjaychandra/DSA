#include<iostream>

using namespace std;

int main(){
    int i,j,n;
    int count =1;
    cin >>n;

    for(i=1;i<=n;i++){
        for(j=0;j<i;j++)
        {
            cout<<count<<" ";
            count= count+1;
        }
        cout<<endl;
    }
}