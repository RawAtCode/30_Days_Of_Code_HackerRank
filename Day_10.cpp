/*
https://www.hackerrank.com/challenges/30-binary-numbers/problem?isFullScreen=true
*/


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int convertToBinary(int n){
    int maxCount = 0;
    int currCount = 0;
    
    while(n > 0){
        int rem = n % 2;
        
        if(rem == 1){
            currCount++;
            maxCount = max(maxCount, currCount);
        }
        else{
            currCount = 0;
        }
        
        n /= 2;
    }
    return maxCount;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    int res = convertToBinary(n);
    
    cout << res;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
