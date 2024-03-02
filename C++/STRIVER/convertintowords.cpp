#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long int s;
        cin>>s;
   vector<pair<string, long long int>> v = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5},
                                    {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"ten", 10},
                                    {"eleven", 11}, {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14},
                                    {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17}, {"eighteen", 18},
                                    {"nineteen", 19}};
    vector<pair<string, long long int>> v2={{"twenty", 20},{"thirty",30},{"fourty",40},{"fifty",50},{"sixty",60},{"seventy",70},{"eighty",80},{"ninty",90},{"hundred",100},{"thousand",1000},{"lakh",100000},{"crore",10000000}};
    vector<long long int>v1;                                
  int p=0;
    do{
        p=s%10;
        p=p*10+p;
        v1.push_back(p);

    }while(s>0);
    
    for(int i=0;i<v1.size();i++){
        if(v1[i]<20){
            cout<<v[v1[i]].first<<" ";

        }

    }

}
}