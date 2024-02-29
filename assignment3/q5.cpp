/*
Roll Number: 102215255
Name: Diya Goyal
Description:Implement the Tower of Hanoi Problem using recursion and code it in C/C++/JAVA/Python
language.
Acknowledgement:NA
*/
#include<iostream>
using namespace std;
void tower(int n, char from_rod, char to_rod, char aux_rod){
    if(n==0){
        return ;
    }
    tower(n-1, from_rod, to_rod, aux_rod);
    cout<<"move "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;;
   tower(n-1,from_rod, to_rod, aux_rod);
}
int main(){
    int n;
    cin>>n;
    tower(n,'A','C','B');
    return 0;
}