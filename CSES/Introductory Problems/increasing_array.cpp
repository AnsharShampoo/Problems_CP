#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, cont = 0;
    cin>>n;
    vector<ll> numbers(n);
    for (ll i = 0; i<n; i++){
        cin>>numbers[i];
    }
    for (ll i = 1; i<n; i++){
        while(numbers[i]<numbers[i-1]){
            cont+=1;
            numbers[i]+=1;
        }
    }
    cout<<cont;


    return 0;
}