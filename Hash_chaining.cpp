#include <bits/stdc++.h>

using namespace std;

const int sz = 1000;
vector <int> hashtable[sz];

int hash(int x){
    int y = x * x + x % 100;
    return y%sz;
}

void insert(int x){
    int index = hash(x);
    hashtable[index].push_back(x);
}

bool find(int x){
    int index = hash(x);
    for(auto value : hashtable[index]){
        if(value == x) return true;
    }
    return false;
}

void del(int x){
    int index = hash(x);
    for(int i = 0 ; i < hashtable[index].size() ; i++){
        if(hashtable[index][i] == x){
            swap(hashtable[index][i], hashtable[index].back());
            hashtable[index].pop_back();
            return;
        }
    }
}
