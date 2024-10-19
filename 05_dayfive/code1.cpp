#include<stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    int temp = 0;
    cin>>n;
    for(int i = 0 ; i< n ; i++)
    {
        temp = (i-1)+i;

        cout<<temp;
    }
}
