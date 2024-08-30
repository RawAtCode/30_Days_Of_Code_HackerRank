/*

*/


#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);

    try {
        int num = stoi(S);
        cout << num;
        
    } catch (...) {     //this catch block is general, not good for applications
        cout << "Bad String";
    }
    
    // This catch block is specific, helps in debugging
    
    // catch (const exception& e) {
    //     cout << "Bad String";
    // }

    return 0;
}
