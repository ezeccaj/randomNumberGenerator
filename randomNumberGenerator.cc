#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int searchArray(const int data[], int count, int target);
void printArray(int randomArray[], int count);

int main(int argc, char const *argv[]){

    int randomArray[20];
    int targetNum = 0;
    
    srand(time(NULL));
    for(size_t i = 0; i < 20; i++){
        randomArray[i] = rand();
    }
    
    printArray(randomArray, 20);
    cout << "Enter a target number: " << endl;
    cin >> targetNum;
    cout << "The location for " << targetNum << " is " << searchArray(randomArray, 20, targetNum) << "." << endl;
    return 0;
}

int searchArray(const int data[], int count, int target){
    for (size_t i = 0; i < count; i++){
        if(target == data[i]){
            return i;
        }
    }
    return -1;
}

void printArray(int randomArray[], int count){
    for(size_t i = 0; i < count; i++){
        cout << randomArray[i] << endl;
    }
}

