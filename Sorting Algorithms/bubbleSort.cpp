/* Implementation of BubbleSort Algorithm

The program takes a string of numbers seperated by a space from the user and prints these numbers in ascending order.

Time Complexity:
Best-case: O(n)
Average-case: O(n^2)
Worst-case: O(n^2)

Space Complexity: O(1) -> Inplace Sorting Algorithm 

Array implementation done using Vector */



#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void bubbleSort(vector<int> &arr,int arrSize){

    //Flag that checks if any swap occured in that pass
    bool flag;
            
    for(int k=1;k<=arrSize-1;k++){
        flag = false;
        for (int i=0;i<=arrSize-1-k;i++){
            if (arr[i]>arr[i+1]){
              
                swap(arr[i],arr[i+1]);
                flag = true;
            }
        }
        if (!flag){
            break;
        }
    }
};


int main(){
    
    //Getting Input From user
    string arrayString;

    cout<<"\nPlease enter the number seperated by a space: \n -> ";

    getline (std::cin,arrayString);

    cout<< "\n\nEntered Numbers : " << arrayString;

    //Initializing Array and adding elements to it
    vector<int> inputArray;
    stringstream arrayStream(arrayString);
    string number;
   
    while (std::getline(arrayStream, number, ' ')) {
        inputArray.push_back(stoi(number));
    }

    //Calculating VectorSize
    int arrSize = inputArray.size();

    //Applying BubbleSort
    bubbleSort(inputArray,arrSize);

    //Printing Sorted Array
    cout<<"\nSorted Numbers  : ";
    for(int i:inputArray){ cout<<i<< " ";}

    return 0;


}