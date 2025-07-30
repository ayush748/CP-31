#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;//number of the test case
    while(t--){

        int data;
        cin>>data;
        bool flag=true;
        if(data % 3 == 0){
            flag=false;
        }else{
            flag=true;
        }

        if(flag){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}