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
 * It take an array, 
*/
void tick(vector<int> &arr , int index){
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
}

string checker(int value){
    if(value == 1){
        return "ON";
    }
    else {
        return "OFF";
    }
}



int main(){

    vector <int> arrs = {0,1,0} ;
    //tick(arrs, 0) ;
    cout << "Tunnel value : " ;
    cout << tunnel(arrs) << "\n"  ;
    
    tick(arrs ,tunnel(arrs));

    cout << "v = { ";
    for (int n : arrs) {
        std::cout << n << ",";
    }
    cout << "} \n";
    return 0;
}

/**
 * Algorithm
 * when tick, flip the first elemet.
 * Check the second elemet and flip it if 
*/

/**
 * Input
 * 4
 * 1 0 > Case #1: OFF
 * 
*/