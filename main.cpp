#include <iostream>
using namespace std;

static void pattern(int n, int i){
    if (n == 0) return;
    pattern(n/2, i); // upper part

    for (int c = 0; c < i; c++) cout << " "; // middle part
    for (int c = 0; c < n; c++) cout << "* ";
    cout << endl;

    pattern(n/2, n + i); // lower part
}

int main(){
    pattern(8, 0);
}
