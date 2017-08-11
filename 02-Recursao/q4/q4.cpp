#include <iostream>

using namespace std;

int tailFib(int n, int pen, int sum);

int main(){

    int n;
    cin >> n;

    cout << tailFib(n, 1, 1) << endl;

    return 0;

}

//tail_recursive Fibonacci function
int tailFib(int n, int pen, int sum){
    if (n <= 1){
        return sum;
    }
    else{
        
        return tailFib( n - 1, sum, sum + pen );
    }

}
