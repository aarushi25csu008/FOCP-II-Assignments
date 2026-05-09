#include <iostream>
#include <vector>
using namespace std;
class Bank{
    vector<string>userId;
    vector<int>balance;
    public:
    bool CreateXY(string X,int Y){
    for(int i=0;i<userId.size();i++){
        if(userId[i]==X ){
        balance[i]+=Y;
            return true;
        }
    }
    else{
    userId.push_back(X);
    balance.push_back(Y);}
    }
    bool DebitXY(string X,int Y){
        for(int i=0;i<userId.size();i++){
            if(userId[i]==X){
                 if(balance[i]<Y){
                return false;
            }
                balance[i]-=Y;
                return true;
            }
        }
        return false;
    }
    int Balance(string X){
        for(int i=0;i<userId.size();i++){
            if(userId[i]==X){
                return balance[i];
            }
        }
        return -1;}
};
int main(){
    Bank U[20]
    string X = "x";
    string Y = 100;
    U[0].CreateXY(X, Y);
}