// länk : https://open.kattis.com/problems/freefood
#include <iostream>

using namespace std;
int arr[365];
int count = 0; 

bool check(int arr[], int number){

	for(int i = 0 ; i < 365 ; i++ ){
		if(arr[i] == number ){
			return true;
		}
		}
	return false;
	}




void add(int first_int , int second_int){
	

	for(first_int ; first_int <= second_int ; first_int++ ){
		
		if(check(arr, first_int)==false){
			arr[count++] = first_int;
		}
		else {
			continue;
		}
	}
}



int main(){
	

	add(4,7);
	add(1,5);
	add(7,9); 	
	add(2,6);	
	return 0;
}



/**
 * Algorithm
 * 
 * Take in the quentity of the events.
 * Take in first events days.@
 * Fyll up the days in an array.@
 * take in the second events days.
 * fyll up the same array and check if the numbers already exists.
 * continue to do the same on all events.
 * return the length of the array.
 * 
*/


/**
 * input cases
 * 
 * 3
 * 10 14
 * 13 17
 * 25 26
 * -> 10
*/
