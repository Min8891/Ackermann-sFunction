//  Program8 Ackermann’s function
//  Created by Minjing Liang on 10/17/20.
#include <iostream>
using namespace std;
int A(int m, int n){  // recursive function definition
    if(m == 0)
       return (n + 1);
    else if (m > 0 && n == 0)
        return A (m - 1, 1);
    else
        return A (m - 1, A(m, n - 1));
}
int main() {
    cout << "=============================================" <<endl;
    cout << "Ackermann’s function using recursive function" <<endl;
    cout << "=============================================" << endl;
    // function call
    cout << "A(0, 0) = " << A(0, 0) << endl;
    cout << "A(0, 1) = " << A(0, 1) << endl;
    cout << "A(1, 1) = " << A(1, 1) << endl;
    cout << "A(1, 2) = " << A(1, 2) << endl;
    cout << "A(1, 3) = " << A(1, 3) << endl;
    cout << "A(2, 2) = " << A(2, 2) << endl;
    cout << "A(2, 3) = " << A(2, 3) << endl;
    return 0;
}
