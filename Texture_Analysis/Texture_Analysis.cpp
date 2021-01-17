#include <iostream>
#include <vector> 


using namespace std;

int occurence = 0;


int main(){

	vector <char> line;
	vector <int> amount;
	char test_char;
	int first_occur = 0 ;
	while(1){
		test_char=fgetc(stdin);
				
		if(test_char != '\n' ){
			line.push_back(test_char);
			
			if(test_char == '.'){
				
				first_occur++;
			}


			if((test_char =='*')&& ((first_occur!=0))) {
				amount.push_back(first_occur);

				first_occur = 0;

			}
			if (test_char=='*')
			{
				amount.push_back(0);
			}
			
			else
			{
				continue;
			}
			

			

			
			
			
			
		}
		else{
			break;
		}
	}

	for(int i = 0 ; i <= amount.size(); i++){
				cout << amount[i];
			cout << "\n" ;
			}

	for(int i = 0 ; i <= line.size(); i++ )
			cout << line[i] ;

	
		

	return 0;

}



/**
 * 
 * Algorithm
 * 
 * get input until you get END
 * each input will be saved in array
 * 
 * check the first star
 * save the next symbole in a variable.
 * calculate each dot until it get star. clc_occur()
 * save the amount in a variable. return from calc_occur()
 * when get a star recalculate the dots and save it
 * 	in another variable
 * 
 * compare the first variable and second variable and 
 * tell if even or not even.
 * 
*/


/**
 * input 
 * 
 * 
*/