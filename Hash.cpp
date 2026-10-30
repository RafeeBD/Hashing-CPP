#include <bits/stdc++.h>

using namespace std;

const int sz = 1000;
int hashtable[sz];
const int empt = -1;

int hash(int x){
    int y = x * x + x % 100;
    return y%sz;
}

void insert(int x){
    int index = hash(x);
    if(hashtable[index] != empt) {
        cout << "collision occurred at index " << index << " for value " << x << endl;
        return;
    }
    hashtable[index] = x;
}

bool find(int x){
    int index = hash(x);
    if(hashtable[index] == x) return true;
    return false;
}

void del(int x){
    int index = hash(x);
    hashtable[index] = empt;
}

int main(){

}
