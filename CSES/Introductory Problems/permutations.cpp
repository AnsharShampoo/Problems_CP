#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, contpar = 0, contnon; 
    cin>>n;
    contnon = n/2;
    vector<ll> nums(n);
    /*for (ll i = 0; i<n; i++){
        nums[i] = i+1;
    }*/
    if (n < 4 && n>1){
        cout<<"NO SOLUTION";
    }
    else{
            for (ll i = 1; i<=n; i++){
                if (i%2==0){
                    nums[contpar] = i;
                    contpar+=1;
                }
                else{
                    nums[contnon] = i;
                    contnon+=1;
                }
            }
            for (ll i = 0; i<n; i++){
                cout<<nums[i]<<" ";
            }
        }
    

    return 0;
}