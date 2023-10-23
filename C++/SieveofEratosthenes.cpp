// To print all the PRIME no. in a given range
#include<iostream>
using namespace std;

void PrimeSieve(int n) {
    
    int prime[n]={0};
// 0 = unmarked ; 1 = marked
    for(int i=2; i<=n; i++) {
        if(prime[i]==0)  {
            for(int j=i*i; j<=n; j+=i){
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if(prime[i] == 0)
            cout << i <<" ";
    }
    cout <<endl;
    
}

int main()
{
    int n; 
    cin >> n;

    PrimeSieve(n);

    return 0;
}