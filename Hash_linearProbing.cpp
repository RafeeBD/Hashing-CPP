#include <bits/stdc++.h>

using namespace std;

const int sz = 1000;
int hashtable[sz];
int values_inserted = 0;
const int empt = INT_MIN;
const int tomb = INT_MIN-1;

int hash_function_1(int x){
    int y = x * x + x % 100;
    return y%sz;
}

int hash_function_2(int x){
    int y = x - x/2 + sqrt(x);
    return y%sz
}

int wrapper(int x, int failure){
    return hash_function_1(x) + failure * hash_function_2(x);
}

void insert(x){
    if(values_inserted == sz) {
        cout << "hash table is full" << endl;
        return;
    }
    values_inserted++;
    for(int i = 0 ; i < sz ; i++){
        int index = wrapper(x, i);
        if(hashtable[index] == empt){
            hashtable[index] = x;
            return;
        }
    }
}

int find(int x){
    for(int i = 0 ; i < sz ; i++){
        int index = wrapper(x, i);
        if(hashtable[index] == empt) return -1;
        if(hashtable[index] == x) return index;
    }
    return -1;
}

void del(int x){
    for(int i = 0 ; i < sz ; i++){
        int index = wrapper(x, i);
        if(hashtable[index] == empt) return;
        if(hashtable[index] == x){
            hashtable[index] = tomb;
        }
    }
}

int main(){
    for(int i = 0 ; i < sz ; i++)
        hashtable[i] = empt;
}







