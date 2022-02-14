/* Implementation of SelectionSort Algorithm

The program takes a string of numbers seperated by a space from the user and prints these numbers in ascending order.

Time Complexity:
Best-case: O(n^2)
Average-case: O(n^2)
Worst-case: O(n^2)

Space Complexity: O(1) -> Inplace Sorting Algorithm 

Array implementation done using Vector */



#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void selectionSort(vector<int> &arr,int arrSize){

   int iMin;

   for(int i=0;i<=arrSize-2;i++){

       iMin = i;
      
       for(int j=i+1;j<=arrSize-1;j++){
           if (arr[j]<arr[iMin]){ 
               iMin = j;
         }
       }
    swap(arr[iMin],arr[i]);
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

    //Applying SelectionSort
    selectionSort(inputArray,arrSize);

    //Printing Sorted Array
    cout<<"\nSorted Numbers using Selection Sort : ";
    for(int i:inputArray){ cout<<i<< " ";}

    return 0;


}