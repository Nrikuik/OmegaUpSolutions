#include <iostream>
using namespace std;

int main() {
    int n, pos, neg, sum, act;
    cin >> n;
    pos = neg = sum = 0;
    for (int i = 0; i < n; i++){
        cin >> act;
        sum = sum + act;
        if (act < 0){
            neg ++;
        }
        if (act >= 0){
            pos ++;
        }
    }
    cout << sum << " " << pos << " " << neg;
    return 0;
}