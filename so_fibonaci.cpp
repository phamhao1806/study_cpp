#include<iostream>
#include<chrono>

using namespace std;

long long Fibonaci( int n ) {
    if ( n == 0 || n == 1 ) {
        return n;
    }
    return Fibonaci( n - 1 ) + Fibonaci( n - 2);
}

int main () {
    int n;
    cout << " nhap n: ";
    cin >> n;
    auto t0 = std::chrono::system_clock::now();
    cout << " so fibobaci la: " << n << " : " << Fibonaci(n) << endl;
    auto t1 = std::chrono::system_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count();
    std::cout << "time: " << elapsed_ms << "(ms)"<< std::endl;


} 
