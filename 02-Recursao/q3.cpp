#include <iostream>

using namespace std;

int t_digitSum(int n, int sum);
int digitSum(int n);

int main(){

    int n = 0;    
    int sum = 0;    

    cout << "type a natural number to see what happens..." << endl;
    cin >> n;

    cout << t_digitSum(n, sum) << endl;    

    return 0;
}


// tail recursive function that sums the digits of a number
int t_digitSum(int n, int sum){
    
        if( n == 0){
            return sum;
        } else{
            sum += (n % 10);
            return t_digitSum(n / 10, sum);       
        }

}


// recursive function that sums the digits of a number
int digitSum(int n){
    
        if( n == 0){
            return 0;
        } else{
            return (n % 10) + digitSum(n / 10);       
        }

}
