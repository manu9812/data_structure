#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[6][6];
    int row, col;
    int sum;
    int best_sum;
    int first_flag=1;
    for(row=0; row<6; row++){
        for(col=0; col<6; col++){
            cin >> arr[row][col];
        }
    }
    for(row=0; row<=3; row++){
        for(col=0; col<=3; col++){
            sum = arr[row][col] + arr[row][col+1] + arr[row][col+2] + arr[row+1][col+1] + arr[row+2][col] + arr[row+2][col+1] + arr[row+2][col+2];
            if(first_flag==1){
                first_flag=0;
                best_sum=sum;
            }
            else if(sum>best_sum)
                best_sum=sum;
        }
    }
    cout << best_sum;
    return 0;
}
