// länk : https://open.kattis.com/problems/freefood
#include <iostream>
#include <vector>
using namespace std;
int count = 0; 



bool check(const vector<int> &arr , int number){

	for(int i = 0 ; i < arr.size() ; i++ ){
		if(arr[i] == number ){
			return true;
		}
		}
	return false;
}




void add(int first_int , int second_int, vector <int> &arr){
	

	for(first_int ; first_int <= second_int ; first_int++ ){
		
		if(check(arr, first_int) == false){
			arr.push_back(first_int);
		}
		else {
			continue;
		}
	}
}



int main(){
	
	vector <int> arr;
	int events = 0;
	cin >> events;
	int first_num , second_num;
	for(int ii = 0; ii< events ; ii++){
		cin >> first_num;
		cin >> second_num;
		add(first_num, second_num, arr);
	}
	
	 	
		
	cout <<	arr.size();
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
/


/**
 * input cases
 * 
 * 3
 * 10 14
 * 13 17
 * 25 26
 * -> 10
*/
