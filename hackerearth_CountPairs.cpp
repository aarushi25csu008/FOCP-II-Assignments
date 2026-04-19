#include <iostream>
#include <numeric>
using namespace std;
int main() {
	//int num;
	//cin >> num;    //Reading input from STDIN
	//cout << "Input number is " << num << endl;	// Writing output to STDOUT
	 int n,x,y;
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
		cin>>n;
        int count=0;
       for(x=1;x<=n;x++){
       for(y=1;y<=n;y++){
        if(x*y==n){
        if(std::gcd(x,y)==1){
			count++;
		}
        }
       }
       }
	   cout<<count<<endl;
    }
    
}