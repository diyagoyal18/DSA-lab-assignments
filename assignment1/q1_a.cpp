// i.	computes and returns the sum of all the integers between "first" and "last" inclusive.

#include<iostream>
using namespace std;

int main(){
    int first;
    int last;
    cin>>first;
    cin>>last;
    int sum=0;
    if(first>last){
        for(int i=last;i<=first;i++){
            sum=sum+i;
        }
    }
    else{
        for (int i = first; i <=last; i++)
        {
            sum=sum+i;
        }
        
    }
    cout<<"the sum is"<<sum<<endl;
    return 0;
}