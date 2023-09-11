//
//  main.cpp
//  PA2_Sets_Bitwise_Operation
//
//  Created by Celine Wang on 9/8/23.
//

#include <iostream>
#include <cmath>
#include <list>

using namespace std;


int main(int argc, const char * argv[]) {
    cout << "Computer Representation of Sets\n";
//    cout << "Universal set U = {a, b, c, d, e, f, g, h}\n";
    
    // Prompt user to enter two subsets B and B.
    int A, B;
    cout << "Enter the bit string (8 bits) representation of A: ";
    cin >> A;
    cout << "Enter the bit string (8 bits) representation of B: ";
    cin >> B;
    
    // Split 8 bits string integer A into 8 digits
    int a_A, b_A, c_A, d_A, e_A, f_A, g_A, h_A, dec_A;
    
    a_A = A / 10000000 % 10;
    b_A = A / 1000000 % 10;
    c_A = A / 100000 % 10;
    d_A = A / 10000 % 10;
    e_A = A / 1000 % 10;
    f_A = A / 100 % 10;
    g_A = A / 10 % 10;
    h_A = A  % 10;
    
//    list<int> set_A = {a_A, b_A, c_A, d_A, e_A, f_A, g_A, h_A};
    int set_A[] = {a_A, b_A, c_A, d_A, e_A, f_A, g_A, h_A};
    
    dec_A = pow(2, 7) * a_A + pow(2, 6) * b_A + pow(2, 5) * c_A + pow(2, 4) * d_A
            + pow(2, 3) * e_A + pow(2, 2) * f_A + pow(2, 1) * g_A + pow(2, 0) * h_A;
    
    cout << "\n\nSet of A:\n";
//    for (list<int> :: iterator i = set_A.begin(); i != set_A.end(); ++i )
//        cout << *i << endl;
    for (int i = 0; i < 8; ++i ) {
        cout << set_A[i] <<' ';
    };
    cout << "\nbit string A:" << a_A << b_A << c_A << d_A << e_A << f_A << g_A << h_A << endl;
    cout << "unsigned integer A = " << dec_A << endl;
    
    // Split 8 bits string integer B into 8 digits
    int a_B, b_B, c_B, d_B, e_B, f_B, g_B, h_B, dec_B;
    
    a_B = B / 10000000 % 10;
    b_B = B / 1000000 % 10;
    c_B = B / 100000 % 10;
    d_B = B / 10000 % 10;
    e_B = B / 1000 % 10;
    f_B = B / 100 % 10;
    g_B = B / 10 % 10;
    h_B = B  % 10;
    
//    list<int> set_B = {a_B, b_B, c_B, d_B, e_B, f_B, g_B, h_B};
    int set_B[] = {a_B, b_B, c_B, d_B, e_B, f_B, g_B, h_B};
    
    dec_B = pow(2, 7) * a_B + pow(2, 6) * b_B + pow(2, 5) * c_B + pow(2, 4) * d_B
            + pow(2, 3) * e_B + pow(2, 2) * f_B + pow(2, 1) * g_B + pow(2, 0) * h_B;
    
    cout << "\n\nSet of B:\n";
//    for (list<int> :: iterator i = set_B.begin(); i != set_B.end(); ++i )
//        cout << *i << endl;
    for (int i = 0; i < 8; ++i ) {
        cout << set_B[i] <<' ';
    };
    cout << "\nbit string B:" << a_B << b_B << c_B << d_B << e_B << f_B << g_B << h_B << endl;
    cout << "unsigned integer B = " << dec_B << endl;
    
    // Bitwise Operations
    int set_or[] = {0,0,0,0,0,0,0,0};
    int set_and[] = {0,0,0,0,0,0,0,0};
    int set_notA[] = {0,0,0,0,0,0,0,0};
    for (int i = 0; i < 8; ++i ) {
        if (set_A[i] == 1 && set_B[i] == 1){
            set_or[i] = 1;
            set_and[i] = 1;
            set_notA[i] = 0;
        } else if (set_A[i] == 1 && set_B[i] == 0) {
            set_or[i] = 1;
            set_and[i] = 0;
            set_notA[i] = 0;
        } else if (set_A[i] == 0 && set_B[i] == 1){
            set_or[i] = 1;
            set_and[i] = 0;
            set_notA[i] = 1;
        } else if (set_A[i] == 0 && set_B[i] == 0){
            set_or[i] = 0;
            set_and[i] = 0;
            set_notA[i] = 1;
        }
    };
    // A union B
    cout << "\nA union B = ";
    for (int i = 0; i < 8; ++i ) {
        cout << set_or[i] << ' ';
    }
    int C; // A|B
    C = pow(2, 7) * set_or[0] + pow(2, 6) * set_or[1] + pow(2, 5) * set_or[2] + pow(2, 4) * set_or[3]
    + pow(2, 3) * set_or[4] + pow(2, 2) * set_or[5] + pow(2, 1) * set_or[6] + pow(2, 0) * set_or[7];
    cout << "\nA | B = " << C << endl ;
    
    // A intersect B
    cout << "\nA intersect B = ";
    for (int i = 0; i < 8; ++i ) {
        cout << set_and[i] << ' ';
    }
    
    int D; // A&B
    D = pow(2, 7) * set_and[0] + pow(2, 6) * set_and[1] + pow(2, 5) * set_and[2] + pow(2, 4) * set_and[3]
    + pow(2, 3) * set_and[4] + pow(2, 2) * set_and[5] + pow(2, 1) * set_and[6] + pow(2, 0) * set_and[7];
    cout << "\nA & B = " << D << endl ;
    
    // Complement of A
    cout << "\n complement of A  = ";
    for (int i = 0; i < 8; ++i ) {
        cout << set_notA[i] << ' ';
    }
    int E; // ~A
    E = pow(2, 7) * set_notA[0] + pow(2, 6) * set_notA[1] + pow(2, 5) * set_notA[2] + pow(2, 4) * set_notA[3]
    + pow(2, 3) * set_notA[4] + pow(2, 2) * set_notA[5] + pow(2, 1) * set_notA[6] + pow(2, 0) * set_notA[7];
    cout << "\n ~ A  = " << E << endl ;
    
    return 0;
}
