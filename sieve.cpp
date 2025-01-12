#include<iostream>
using namespace std;

void primesieve(int n){
    int prime[100]={0};
    for(int i=2; i<=n; i++){
        if(prime[i]==0){            //if unmarked
            for(int j=i*i; j<=n; j+=i){
                prime[j]=1;        // marking the multipes
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    primesieve(n);
    return 0;
}