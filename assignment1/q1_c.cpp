//iii.	computes and returns the greatest common divisor (g.c.d.) of the arguments passed to it.

#include<iostream>
using namespace std;

int main(){
    int n1,n2,hcf;
    cout<<"enter 2 numbers: ";
    cin>>n1>>n2;
    if(n2>n1){
        int temp = n2;
        n2=n1;
        n1=temp;
    }
    for(int i=1;i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    cout<<"hcf is: "<<hcf;
    return 0;
}