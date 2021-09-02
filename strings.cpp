/*
input Format:
You are given two strings a and b separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format:
In the first line print two space-separated integers, representing the length of a and b respectively.
In the second line print the string produced by concatenating a and b(a+b).
In the third line print two strings separated by a space a' and b'.a' and b' are the same as a and b respectively, except that their first characters are swapped.

Sample Input:
abcd
ef

Sample Output:
4 2
abcdef
ebcd af 
*/


#include <iostream>
#include <string>
using namespace std;

int main() {

    string a,b,c;
    char p,q;
    cin >> a >> b;
    int len1 = a.size();
    int len2 = b.size();
    c = a+b;
    cout << len1 << " " << len2 << endl;
    cout << c << endl;
    p = b[0];
    q = a[0];
    a[0] = p;
    b[0] = q;
    cout << a << " " << b ;
    return 0;
}
