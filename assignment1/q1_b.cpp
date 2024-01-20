// ii.	computes and returns the smallest positive integer n for which 1+2+3+...+n equals or exceeds the value of "goal".

#include<iostream>
using namespace std;

int main(){
    int n=1,goal;
    int sum=0;
    cin>>goal;
    while(sum<goal){
        sum=sum+n;
        if(sum==goal){
            break;
        }
        n++;
    }
    cout<<n;
    return 0;
}