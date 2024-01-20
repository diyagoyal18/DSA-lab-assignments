//iv.	Determines whether an integer is prime.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter an integer:";
    cin>>n;
    bool prime;
    if(n==0 || n==1){
        prime= false;
    }
    for(int i=2; i<=n/2;i++){
        if(n%i==0){
            prime= false;
            break;
        }
        
    }
    if(prime){
        cout<<n<<" is not a prime number"<<endl;
    }
    else{
        cout<<n<<" is a prime number"<<endl;

    }
    return 0;
}