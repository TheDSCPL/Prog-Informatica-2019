#include <iostream>
#include <vector>

using namespace std;

vector<string> strTok(string haystack, string needle) {
    vector<string> ret;
    size_t startPos = 0, endPos = 0;
    while (endPos<haystack.length()) {
        endPos=haystack.find(needle,startPos);
        if(endPos==haystack.npos) {
            ret.push_back(haystack.substr(startPos));
            break;
        } else {
            ret.push_back(haystack.substr(startPos,endPos-startPos));
        }
        startPos=endPos+needle.length();
    }
    return ret;
}

int main() {
    for(const string &s : strTok("Ola, abc 123, luis, prog, ",", "))
        cout<<"'"<<s<<"'"<<endl;
    return 0;
}
