#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll mem=1, max = 1;
    string dna;
    cin>>dna;
    /*sort(dna.begin(),dna.end());
    c = count(dna.begin(), dna.end(), 'C');
    g = count(dna.begin(), dna.end(), 'G');
    a = count(dna.begin(), dna.end(), 'A');
    t = count(dna.begin(), dna.end(), 'T'); */
    for (int i = 1; i<size(dna); i++){
        if (dna[i]==dna[i-1]){
            mem+=1;
            if(max<=mem){
                max = mem;
            }
        }
        else if (dna[i]!=dna[i-1]){
            mem = 1;
        }
    }
    cout<<max; 

    


    return 0;
}
