#include <iostream>
#include <vector>

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
 * return the ticked array.
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

string checker(vector<int> &arr ){
    if(tunnel(arr) != -1 || arr.size() ==0){
        return "OFF";
    }
    else {
        return "ON";
    }
}



int main(){

    vector <int> arrs ;
    vector <int> to_print ;
    vector <string> results ;

    int number_of_devices , number_of_attemps , number_of_tests ;
    int number_of_tests_counter = 0;
    cin >> number_of_tests;
   
    
    while(number_of_tests_counter < number_of_tests){
        cin >> number_of_devices;
        cin >> number_of_attemps;
       
        
        for(int i = 0; i < number_of_devices ; i++){
            arrs.push_back(0);
        }
        vector <int> arrs_temp = arrs;
        int count = 0 ; 
        while(count < number_of_attemps){
            to_print = tick(arrs_temp ,tunnel(arrs_temp)); 
            to_print = to_print;
            count++ ;
        }
        results.push_back(checker(to_print));
        

        arrs.clear();
        arrs_temp.clear();
        to_print.clear();

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
*/

/**
 * Input
 * 4
 * 1 0 > Case #1: OFF
 * 
*/

/** Usful code.
    cout << "v = { ";
        for (int n : arrs_temp ) {
            std::cout << n << ",";
        }
    cout << "} \n";    
    **/