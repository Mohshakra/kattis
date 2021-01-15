// länk : https://open.kattis.com/problems/freefood
#include <iostream>

using namespace std;
int arr[365];
int count = 0; 


int calc_nonzero(int arr[]){
	int non_zero = 0;
	for(int i = 0 ; i < 365; i++){
		if(arr[i] !=0){
			non_zero++;
		}
	}
	return non_zero;
}



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
		
		if(check(arr, first_int) == false){
			arr[count++] = first_int;
		}
		else {
			continue;
		}
	}
}



int main(){
	
	int events = 0;
	cin >> events;
	int first_num , second_num;
	for(int ii = 0; ii< events ; ii++){
		cin >> first_num;
		cin >> second_num;
		add(first_num, second_num);
	}
	
	 	
		
	cout <<	calc_nonzero(arr);
	cout << "\n";
	return 0;
}



/**
 * Algorithm
 * 
 * Take in the quentity of the events.
 * Take in first events days.@
 * Fyll up the days in an array.@
 * take in the second events days.@
 * fyll up the same array and check if the numbers already exists.@
 * continue to do the same on all events.@
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
