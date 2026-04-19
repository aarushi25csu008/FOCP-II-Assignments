#include <iostream>
using namespace std;
int main() {
	//int num;
	//cin >> num;    //Reading input from STDIN
	//cout << "Input number is " << num << endl;	// Writing output to STDOUT
 long long L,R;
    int i=0;
    int count=0;
    cin>>L;
    cin>>R;
    for(i=L;i<=R;i++){
        if(i%2!=0){
            count++;
        }
    }
    if (count%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}