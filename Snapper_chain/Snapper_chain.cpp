#include <iostream>
#include <vector>
#include <chrono> 
using namespace std::chrono; 

using namespace std ;
// it takes an array and going through the tunnel of 1:th 
// it return the index of the first following zero after the tunnel of ones.
int tunnel(vector<int> &arr){

    for(int i = 0 ;  i < arr.size(); i++){
        if(arr[i] == 0 ) {
            return i ;
        }
    }
    return -1 ;
}
/**
 * it flips the 0 to 1 and vice versa. when the array is ones then flip everythings to zeros.
 * otherwise it flips the ones until first zero.
 * return the flipped array.
*/
vector<int> tick(vector<int> &arr , int index){
    if(index != -1){
        for(int i = 0 ; i <= index ; i++){
            arr[i] = !arr[i] ; 
            }
    }
    else{
        for(int i = 0; i< arr.size() ; i++){
            arr[i] = !arr[i];
        }
    }
    return arr ;

}
/**
 * Checker check if last element is 1 or the whole array then returns 1. 
 * or zero if the last element is 0 then returns 0.
*/
string checker(vector<int> &arr ){
    if(tunnel(arr) != -1 || arr.size() ==0){
        return "OFF";
    }
    else {
        return "ON";
    }
}



int main(){

    vector <int> initial_state_zeros ;  // The intial array with zeros. 
    vector <int> temp_array ; // temp storge for the states.
    vector <string> results ; // It holds the results ON/OFF for all inputs arrays. 

    int number_of_devices , quantity_of_snaps , number_of_questions ;
    int number_of_tests_counter = 0;
    cin >> number_of_questions;
   
    while(number_of_tests_counter < number_of_questions){
        cin >> number_of_devices;
        cin >> quantity_of_snaps;
       
        for(int i = 0; i < number_of_devices ; i++){
            initial_state_zeros.push_back(0);
        }

        vector <int> new_state = initial_state_zeros; //hold the states for continues computing
        int count = 0 ; 
        while(count < quantity_of_snaps){
            temp_array = tick(new_state ,tunnel(new_state)); 
            temp_array = temp_array;
            count++ ;
        }

        results.push_back(checker(temp_array));
        // clear all arrays to take the next "question".
        initial_state_zeros.clear();
        new_state.clear();
        temp_array.clear();

        number_of_tests_counter++ ;
    }

    int cases = 0;
    for (string n : results ) {
            cout << "Case #"<< ++cases << ": " << n << "\n" ;
        }


    return 0;
}

/**
 * Algorithm
 * 
 * takes quntity of the questions.
 * initilize an array with zeros
 * go through the array as long as every state is "1" from index 0 to nth.
 * flip the first "0" after last "1".
 * if every state is "1" then it returns "ON", and flips the whole array to zeros
 * else it returns OFF if the last state is "0".
 * 
*/

/**
 * Input
 * 4
 * 1 0 > Case #1: OFF
 * 
*/

/** Usful code.
    cout << "v = { ";
        for (int n : new_state ) {
            std::cout << n << ",";
        }
    cout << "} \n";    
    **/