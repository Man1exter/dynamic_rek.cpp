#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <set>
#include <iomanip>   //setw..
#include <list>
#include <forward_list>
#include <typeinfo>
#include <string>
#include <ctime>
#include <algorithm>
#include <deque>
#include <functional>
#include <typeinfo>
#include <iterator>
#include <set>
#include <chrono>
#include <thread>
#include <future>
#include "numbers.h"

using namespace std;

vector<int64_t> t;

int64_t fib_dynamic(int64_t n){
    if(n <= 2){
        return 1;
    }
    cout << endl;
    if(t[n] != 1){
        return t[n];
    } else{
        return t[n] = fib_dynamic(n - 1) + fib_dynamic(n - 2);
    }
}

int64_t fib_rek(int64_t n){
    if(n <= 2){
        return 1;
    }
    cout << endl;
    return fib_rek(n-1) + fib_rek(n-2);
}


int main(){
    


    return 0;
}