#include <bits/stdc++.h>
using namespace std;

// Find the subsequences whose sum is equals to k 

void SubsequenceMap ( int ind , vector <int> &ds , int s ,int sum , int arr[], int n){

    if( ind ==n ){
        if(s==sum){
            for( auto it :ds) {
                cout<< it<<" ";
            }
            cout<<endl;
        }
            return ;
        
    }

    // Pick / to Take
    ds.push_back(arr[ind]);
    s+= arr[ind];
    SubsequenceMap(ind+1 , ds, s , sum , arr, n);
    s-= arr[ind];
    ds.pop_back();

    // Not-Pick 
    SubsequenceMap(ind+1 , ds, s , sum , arr, n);

    
}
int main(){

    
    int arr[]= { 1 , 2 , 1};
    int n =3;
    int sum;
    cin >> sum;
    vector <int> ds ;
    SubsequenceMap(0, ds ,0 , sum ,arr , n);
}