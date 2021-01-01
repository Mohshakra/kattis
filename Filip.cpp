#include <iostream>
#include <stdio.h> 
#include <string.h> 
using namespace std ;


int mod = 10 ;
int compare(int first_num , int second_num){
    int first_num_m;
    int second_num_m;
    first_num_m = first_num % mod ;
    second_num_m = second_num % mod ;
    if(first_num_m < second_num_m){

        return second_num ;
    }
    else if (first_num_m > second_num_m)
    {
        return first_num; 
    }
    
    else{
        mod = mod * 10;
        return compare(first_num, second_num);
    }
}

/**
 * take an int number
 * flip the number in oppisit order. 
*/


void reverse(int number){
    string number_s = to_string(number);

    for(int i = number_s.length() -1 ; 0 <= i  ; i-- ){
        cout << number_s.at(i);
    }

}

int main(){
    

    // takes the input. 
    int first_num, second_num;
    
    cin >> first_num >> second_num ;

    reverse(compare(first_num, second_num)) ;
    
}


/**
 * Algorithm
 * read in the the numbers.&
 * save the values in two parameters.&
 * divde by the module to get the first scale.&
 * compare the numbers.&
 * the larger will be printed out in reversed order.&&
 * 
*/


/**
 * test cases
 * 1 2 > 2
 * 55 46 > 64
 * 163 153 > 361
*/