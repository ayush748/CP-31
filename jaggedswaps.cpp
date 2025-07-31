#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        vector<int>arr;
        for(int i=0;i<size;i++){
            int data;
            cin>>data;
            arr.push_back(data);
        }

        if(arr[0]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}