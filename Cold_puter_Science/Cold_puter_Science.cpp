// link : https://open.kattis.com/problems/cold
#include <iostream>
using namespace std;


int main(){


    int totalnumbers ;
    int loops = 0 ; 
    int counatityofnegative  = 0 ;
    cin >> totalnumbers;
    // cout << totalnumbers << "\n";
    while(loops < totalnumbers){
        // cout << (loops <= totalnumbers) << "\n" ;
        int number ;
        cin >> number ;
        // cout << number;
        if(number < 0 ){
            counatityofnegative++ ;
        }
        loops++;
    }

    cout  <<counatityofnegative;



    return 0;
}




/**
 * Algorithm
 * 
 * save the first value to get how many numbers.
 * initiate a lopp to get the input 
 * compare each input
 * initiate a counter to count the amout of negative numbers.
 * print the number of values
*/



/**
 * Test cases
 * 
 * 3
 * input : 1 -2 4 
 * output : 1
 * 
 * 
*/