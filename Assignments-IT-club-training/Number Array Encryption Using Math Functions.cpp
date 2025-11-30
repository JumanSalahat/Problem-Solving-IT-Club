/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

long long Square(long long n) {
    return n * n;
}

long long Subtract(long long a, long long b) {
    return a - b;
}

long long Add(long long a, long long b) {
    return a + b;
}

// Ai= 3+((Ai)^2 - 5 )
void encryptArray(long long a[], int n) {
    for (int i = 0; i < n; i++) {
        long long x = Square(a[i]);    // (Ai)^2
        long long y = Subtract(x, 5); // (Ai)^2 - 5
        long long z = Add(y, 3);     // 3+((Ai)^2 - 5 )
        a[i] = z; // Ai= 3+((Ai)^2 - 5 ) -> وهو المطلوب #
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
