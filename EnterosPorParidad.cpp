#include <iostream>
using namespace std;
int main() {
    int n, p;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    cin >> p;
    for (int i = 0; i < n; i++){
        if (x[i]%2 == p){
            cout << x[i];
        }
    }
    return 0;
}
