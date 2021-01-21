#include <iostream>
#include <vector> 

using namespace std;

int main(){


    int stones, knights, knights_g ;
    cin >> stones >> knights >> knights_g ;
    stones = stones - 1 ;
    int groups;
    int days ;
    int rest_stones ;

    groups = knights/knights_g ;
    days = stones/groups ;
    rest_stones = stones%groups ;

    // cout << "\n" << "this is rest stones" << rest_stones << "\n" ;

    if(rest_stones > 0) { 
        cout << days + 1;
    }
    else{
        cout  << days  ;
    }
    return 0 ;
}



/**
 * Algorithm
 * 
 * Take the input.
 * calculate the groups, days. reduce the number of days by 1 .
 * when rest of stones is not 0, add an extra day.
 * print the reslut.
 * 
*/


/**
 * input
 * 
 * 5 2 1 > 2
 * 10 5 2 > 5
*/