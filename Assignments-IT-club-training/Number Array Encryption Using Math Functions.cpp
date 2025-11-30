#include <bits/stdc++.h>
using namespace std;

long long Square(long long n) {
    return n * n;
}

long long Multiply(long long a, long long b) {
    return a * b;
}

long long Subtract(long long a, long long b) {
    return a - b;
}

long long Add(long long a, long long b) {
    return a + b;
}
double Power(double a, double b) {
    return pow(a, b);
}
// Ai= (3+(6 * (Ai)^2 - 5 ))^4
void encryptArray(long long a[], int n) {
    for (int i = 0; i < n; i++) {
        long long x = Square(a[i]);     // x = (Ai)^2
        long long y = Multiply(x,6);   // y = 6 * x
        long long z = Subtract(y, 5); // z = y - 5
        long long w = Add(z, 3);     // w = 3+z
        long long c = Power(w, 4);  // c = w^4
        a[i] = c; // Ai= c = (3+(6 * (Ai)^2 - 5 ))^4 --> وهو المطلوب #
    }
    
    }

int main() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Encryption
    encryptArray(a, n);

    cout << "After Encryption : ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout <<endl;

    return 0;
}
