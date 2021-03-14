#include <iostream>

using namespace std;
//Dynamic Programming
int fib(int n){
    //array with +1 spot because of n=0
    int f[n+2];
    //two starting numbers of Fibonacci
    f[0] = 0;
    f[1] = 1;
    //basic check for user input
    if(n==0){
        cout<<" 0";
    }
    else if(n==1){
        cout<<" 0"<<" 1";
    }
    else{
    //calculate and print each number
    for (int i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
        cout<<f[i]<<" ";
    }

    return f[n];
    }
}

int main(){
    int n;
    cout<<"Give me n for fibonacci :";
    cin>>n;
    //the machine works from 0 to n-1
    fib(n-1);

	return 0;
}
