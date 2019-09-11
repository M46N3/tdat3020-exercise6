#include <iostream>
#include <string>

using namespace std;

string format(const char* input, size_t length) {
    string in = input;
    string res;

    for (int i = 0; i < in.length(); ++i) {
        if (in[i] == '&') res += "&amp;";
        else if (in[i] == '<') res += "&lt;";
        else if (in[i] == '>') res += "&gt;";
        else res += in[i];
    }

    return res;
}
