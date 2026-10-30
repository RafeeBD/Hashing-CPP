#include <bits/stdc++.h>

using namespace std;

int hash(string s){
    int ret = 0;
    for(auto x : s)
        ret += x;
    return ret;
}

void bruteforce(string text, string pattern){
    for(int i = 0 ; i < n-m+1 ; i++){
        string window = text.substr(i, pattern.size());
        if(window == pattern)
            cout << "appears at index " << i << endl;
    }
}


void rabincarp(string text, string pattern){
    int hashpattern = hash(pattern);
    int hashwindow = hash(text.substr(0, pattern.size()));
    for(int i = 0 ; i < n-m+1 ; i++){
        if(hashpattern == hashwindow){
            if(text.substr(i, pattern.size()) == pattern)
            cout << "appears at index " << i << endl;
        }
        if(i != n-m)
            hashwindow = hashwindow - s[i] + s[i+pattern.size()];
    }
}


int main(){

    return 0;
}
