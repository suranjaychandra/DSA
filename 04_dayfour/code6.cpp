// #include<iostream>

// using namespace std;

// int main(){
//     int i,j,n;
//     cin >>n;
//     ;
//     for(i=1;i<=n;i++){
//         int count = i;
//         for(j=0;j<i;j++)
//         {
//             cout<<count<<" ";
//             count = count +1;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>

using namespace std;

int main()
{
    int i,j,n;
        cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<2*i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}