#include <iostream>
using namespace std;

int main() {
    int n, act, sum , min;
    cin >> n;
    cin >> min;
    sum = min;
    for (int i = 0; i < n-1; i++){
        cin >> act;
        sum = sum + act;
        if (act < min){
            min = act;
        }
    }
    cout << sum - min;
    return 0;
}
