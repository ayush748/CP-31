#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            arr.push_back(data);
            
        }
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }

        if(m.size() >= 3){
            cout<<"No"<<endl;
        }else{
            int f1=m.begin()->second;
            int f2=m.rbegin()->second;

            if(f1==f2){
                cout<<"Yes"<<endl;
            }
            else if( n%2 == 1 && abs(f1 -f2) == 1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }

    }
    return 0;
}