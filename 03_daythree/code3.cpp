#include<iostream>

using namespace std;

int main()
{
    char input;
    
     cin>>input;

    if(isalpha(input)){
        if(islower(input))
        {
            cout<<"this is lower";
        }
        else{
            cout<<"this is upper";
        }

    }
    else{
        cout<<"this is numeric";
    }
}