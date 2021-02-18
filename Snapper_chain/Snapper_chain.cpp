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
    return -2 ;
}
/**
 * it flips the 0 to 1 and vice versa. when the array is ones then flip everythings to zeros.
 * otherwise it flips the ones until first zero.
 * return the ticked array.
*/
vector<int> tick(vector<int> &arr , int index){
    if(index != -2){
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
    if(tunnel(arr) != -2 || arr.size() ==0){
        return "OFF";
    }
    else {
        return "ON";
    }
}



int main(){

    vector <int> arrs ;
    int number_of_devices , number_of_attemps;
    cin >> number_of_devices;
    cin >> number_of_attemps;
    for(int i = 0; i < number_of_devices ; i++){
        arrs.push_back(0);
    }


    vector <int> arrs_temp = arrs;

    cout << "v = { ";
        for (int n : arrs_temp ) {
            std::cout << n << ",";
        }
    cout << "} \n";    



    int count = 0 ; 
    vector <int> to_print ;
    while(count < number_of_attemps){
        to_print = tick(arrs_temp ,tunnel(arrs_temp)); 
        cout << "v = { ";
        for (int n : to_print ) {
            std::cout << n << ",";
        }
        cout << "} \n";
        to_print = to_print;
        count++ ;
    }
    
    cout << checker(to_print);

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