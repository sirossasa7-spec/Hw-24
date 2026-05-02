#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
//    char C = '.';
//    string S = "hello world. hello step. hello it.";
//    string S0 = " good";
//
//    string result = "";
//
//    for (char ch : S) {
//        if (ch == C) {
//            result += S0; 
//        }
//        result += ch;
//    }
//
//    cout << result << endl;

    //char C = '.';
    //string S = "hello world. hello step. hello it.";
    //string S0 = " good";

    //size_t pos = 0;

    //while ((pos = S.find(C, pos)) != string::npos) {
    //    S.insert(pos, S0); 
    //    pos += S0.length() + 1;
    //}

    //cout << S << endl;

    //string S = "hello world. hello step. hello it.";
    //string S0 = "hello";

    //int count = 0;
    //size_t pos = 0;

    //while ((pos = S.find(S0, pos)) != string::npos) {
    //    count++;
    //    pos += S0.length(); 
    //}

    //cout << count << endl;


    string S = "hello world. hello step. hello it.";
    string S0 = "hello";

    size_t pos = S.find(S0);

    if (pos != string::npos) {
        S.erase(pos, S0.length());
    }

    cout << S << endl;

    //string S = "hello world. hello step. hello it.";
    //string S0 = "hello";

    //size_t pos = 0;

    //while ((pos = S.find(S0, pos)) != string::npos) {
    //    S.erase(pos, S0.length());
    //}

    //cout << S << endl;

    //string S = "hello world. hello step. hello it.";
    //string S1 = "hello";
    //string S2 = "hi";

    //size_t pos = 0;

    //while ((pos = S.find(S1, pos)) != string::npos) {
    //    S.replace(pos, S1.length(), S2);
    //    pos += S2.length();
    //}

    //cout << S << endl;



    return 0;
}

