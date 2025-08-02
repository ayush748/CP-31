#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int maxval=0;
        int total=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total+=arr[i];
            maxval=max(maxval,arr[i]);
        }
        if(n==2 || maxval <= total-maxval){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

        // int start=0;
        // int end=0;

        // vector<int>brr(n);
        // vector<int>crr(n);
        // for(int i=0;i<n;i++){
        //     start=start+arr[i];
        //     brr[i]=start;
        // }
        // for(int i=0;i<n;i++){
        //     end=end+arr[n-i-1];
        //     crr[i]=end;
        // }

        // bool flag=true;
        // for(int i=0;i<n;i++){
        //     if(brr[i]!=crr[n-i-1]){
        //         flag=false;
        //         break;
        //     }
        // }
        // if(flag){
        //     cout<<"Yes"<<endl;
        // }else{
        //     cout<<"No"<<endl;
        // }


    }
    return 0;
}