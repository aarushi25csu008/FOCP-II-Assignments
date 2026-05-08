#include<bits/stdc++.h>
using namespace std;

string solve (int n, vector<int> arr) {
   // Write your code here
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i_arr = 0; i_arr < n; i_arr++)
        {
        	cin >> arr[i_arr];
        }

        string out_;
        out_ = solve(n, arr);
        cout << out_;
        cout << "\n";
    }
      //int T,N;
      int j,k,i;
    cin>>T;
    int alexchoc;
    int bobchoc;
    for(i=0;i<T;i++){
        cin>>N;
        for(j=0;j<N;j++){
            cin>>A[j];
        }
            std::sort(A,A+N,greater<int>());
     int A[N];
    int alex[N];
    int bob[N];
    for(j=0;j<N;j++){
        if(i%2!=0){
            alex[]=A[j];
        }
        else{
            bob[]=A[j];
        }
    }
    for(j=0;j<N;j++){
        for(int k=0;k<N;k++){
        if(A[j]==A[k]){
            continue;
        } 
        else{
        alexchoc+=alex[j];
        }}}
    for(j=0;j<N;j++){
        for(k=0;k<N;k++){
            if(A[j]==A[k]){
            continue;
            }
            else{
        bobchoc+=bob[j];
        }}}
    if(bobchoc>alexchoc){
        cout<<"bob";
    }
    else{
        cout<<"alex";
    }}
}