#include <iostream>
#include <vector> 

using namespace std;

int occurence = 0;
/** 
 * Checker()
 * input an array of quantity of stars and dots. 
 * Expect the last one there is atleast one dot 
 * i.e. *.** amount.size is 3
 * i.e. *** amount.size is 3
 * 
 * return : EVEN | NOT EVEN depends on the input.

*/

string checker(vector <int> &amount){
		if(amount.size() == 1){
			return "EVEN";
		}
		else
		{
			for(int i = 2 ; i < amount.size() ; i++){
				if(amount[1]== amount[i])
					continue ;
				else{
					return "NOT EVEN" ;
				}
			}
			return "EVEN";
		}			
}

int main(){
	vector <int> amount;
	vector <string> result;
	char test_char;
	int first_occur = 0 ;

	/**
	 * Reads the chars until it get a new_line.
	 * Saves the answer (EVEN | NOT EVEN) in results.
	 * and reset the amount.
	 * 
	 *   
	*/

	while(1){
		test_char=fgetc(stdin);

		if((test_char != 'E') && (test_char != '\n')){
			if(test_char == '.'){
				first_occur++;
				continue ;
			}
			else if((test_char =='*') && ((first_occur!=0))) {
				amount.push_back(first_occur);
				first_occur = 0;
			}
			else if (test_char=='*')
			{
				amount.push_back(0) ;
				first_occur = 0 ;
			}
		}
		else if(test_char == '\n'){
				result.push_back(checker(amount));
				amount.clear();
				continue ; 
			}
		else{
			break;
		}
	}



	// prints the results.
	for(int i = 0 ; i < result.size(); i++){
				cout << i + 1  <<  " "  << result[i];
			 	cout << "\n" ;
			}

	return 0;
}



/**
 * 
 * Algorithm
 * 
 * 
 * Check each row until it gets "\n" but not "END"
 * pass the answer to checker to return either EVEN nor NOT EVEN.
 * 
 * continue input until you get END
 * 
 * checker()
 * compare the first variable and second variable and 
 * tell if even or not even.
 * 
*/


/**
 * input 
 * *.**** 
 * ***
 * *.*.*.* 
 * *..*.*
 * 
 * NOT EVEN
 * EVEN
 * EVEN
 * NOT EVEN
*/