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
#include <sstream>
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
    
setlocale(LC_ALL,"");
srand(time(0));

int64_t n = 0;          // x >= 0

while(cin.fail() || n <= 0){
    cout << "Wprowadz n" << endl;
    cin >> n;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

t.resize(n+1,-5);

auto start = std::chrono::high_resolution_clock::now();
cout << fib_dynamic(n) << endl;
auto finish = chrono::high_resolution_clock::now();
cout << "sekundy: " << std::chrono::duration_cast<std::chrono::milliseconds>(finish - start).count() << endl;

cout << endl;

start = std::chrono::high_resolution_clock::now();
cout << fib_rek(n) << endl;
finish = chrono::high_resolution_clock::now();
cout << "sekundy: " << std::chrono::duration_cast<std::chrono::milliseconds>(finish - start).count() << endl;

cout << endl;

printSTL(t , " " , true);

    return 0;
}