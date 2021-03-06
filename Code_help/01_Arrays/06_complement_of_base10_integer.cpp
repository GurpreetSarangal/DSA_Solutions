#include<bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n){
    // edge case
    if(n==0){
        return 1;
    }
    int m=n;//same as n
    int mask=0;
    while(m!=0){
        mask = (mask<<1)|1;
        m=m>>1;
    }
    int ans = (~n)&mask;
    return ans;

}

int main()
{
    int number;
    cin>>number;
    int ans = bitwiseComplement(number);
    cout<<ans;
    return 0;
}