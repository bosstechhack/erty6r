// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int r,c;
//     cin>>r;
//     for(int j=0;j<r;j++){
//        for(int i=0;i<r-j;i++){
//         cout<<i+1<<" ";   
//         }
//         cout<<endl;
//     }
    
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int r,c;
//     cin>>r;
//     for(int j=0;j<r;j++){
//        for(int i=0;i<r-j;i++){
//         cout<<"*"<<" ";   
//         }
//         cout<<endl;
//     }
    
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r;
    for(int j=0;j<r;j++){
       for(int i=0;i<r-j-1;i++){
        cout<<" "<<" ";   
        }
        for(int i=0;i<(2*j+1);i++){
        cout<<"*"<<" ";   
        }
        cout<<endl;
    }

    for(int j=0;j<r-1;j++){
       for(int i=0;i<=j;i++){
        cout<<" "<<" ";   
        }
        for(int i=0;i<;i++){
        cout<<"*"<<" ";   
        }
        cout<<endl;
    }
    
}
    

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int r,c;
//     cin>>r;
//     for(int j=0;j<r;j++){
//        for(int i=0;i<j;i++){
//         cout<<" "<<" ";   
//         }
//         for(int i=0;i<(2*r-1)-j*2;i++){
//         cout<<"*"<<" ";   
//         }
//         cout<<endl;
//     }
    
// }
