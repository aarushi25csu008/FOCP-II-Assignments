#include <iostream>
using namespace std;
int main() {
	int num;
	//cin >> num;    //Reading input from STDIN
	//cout << "Input number is " << num << endl;	// Writing output to STDOUT

    string bulb;
    int n;
    int l=3;
    int k;
    cin>>n;
    cin>>k;
    cin>>bulb;
    for(int l=1;l<=n;l++){
    int count=0;
      int i=0;
    while(i<n){
        if(bulb[i]=='1'){
            i=i+l;
            count++;
        }
        else{
            i=i+1;
        }
    }
    if(count<=k){
        cout<<l;
        break;
    }}
}
