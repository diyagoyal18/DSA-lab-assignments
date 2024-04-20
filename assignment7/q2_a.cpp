#include<iostream>
#include<vector>
using namespace std;

int factorial(int n){
    // //base case
    // if(n==0)
    // {return 1;}
     
    // return n*factorial(n-1);

      vector<long long> fact(n + 1);
      fact[0]=1;
      for(int i=1;i<=n;i++){
        fact[i]= i*fact[i-1];
      }
      cout<<fact[n];

}


int main(){
    int n;
    cin>>n;
    // int answer= factorial(n);
    // cout<<answer<<endl;
        return 0;
}
