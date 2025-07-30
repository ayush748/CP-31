#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool c=false;// three empty cell which are located continous manner

        int t=0;// totol cell
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i+1 <n && s[i+1] == '.' && i+2<n && s[i+2]=='.'){
                c=true;
                break;
            }
            if(s[i] == '.'){
                t++;
            }
        }
        if(c){
            cout<<2<<endl;
        }
        else{
            cout<<t<<endl;
        }
    }
    return 0;
}
