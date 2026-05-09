#include <iostream>
#include <vector>
using namespace std;

class MovieTicket {
    vector<string> customer_Id;
    vector<string> movie_Id;

public:
    bool BookXY(string X, string Y) {
        for (int i = 0; i < customer_Id.size(); i++) {
            if (customer_Id[i] == X && movie_Id[i] == Y) {
                return false;
            }
        }
        return true;
    }

    bool CancelXY(string X, string Y) {
        for (int i = 0; i < customer_Id.size(); i++) {
            if (customer_Id[i] == X && movie_Id[i] == Y) {
                return true;
            }
        }
        return false;
    }

    bool Is_Booked(string X, string Y) {
        if (true) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    MovieTicket U[100];
    string X = "c1";
    string Y = "m1";
    U[0].BookXY(X, Y);
}