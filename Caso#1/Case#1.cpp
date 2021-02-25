/*
Case#1
Topic: #cbasico
Date: 19/02/2021, 12:00 am 
Individual
Student: Sebastián Díaz Obando
*/

#include <iostream>

using namespace std;

// Note: Const to avoid the " Magic numbers"

void Exercise1(int pArray[], int pArraySize){
	int arrayIndex = 0; int biggestValue = -999; int indexOfValue;
	if (pArraySize > 0){
		while(arrayIndex <= pArraySize-1){
			if (pArray[arrayIndex] > biggestValue){
				biggestValue = pArray[arrayIndex];
				indexOfValue = arrayIndex;
			}
			arrayIndex++;
		}
		cout<< "The biggest value is "<< biggestValue <<" and his position is "<< indexOfValue <<endl;
	} 
	else{
		cout<<"The Array is empty"<<endl;
	}
}

void Exercise2(bool pArray[], int pArraySize){
	int firstIndex = 0; int lastIndex= pArraySize-1; bool result = true;
	if (pArraySize > 0){
		while(firstIndex <= lastIndex){
			if (pArray[firstIndex]!= pArray[lastIndex]){
				cout<<"The array its not a palindrome"<<endl;
				result= false;
				break;
			}else{
				firstIndex++;
				lastIndex--;
			}
		}
		if (result){
			cout<<"The array its a palindrome"<<endl;
		}
	} 
	else{
		cout<<"The Array is empty"<<endl;
	}
}

void Exercise3(int pArray[], int pArraySize){
    int pairs = 0; int arrayIndex = 0; 
    cout<<"The values that have a pair are: ";
    if(pArraySize>0){
        while(arrayIndex<pArraySize){
            while(pairs<pArraySize){
                if((pArray[arrayIndex]==pArray[pairs])&&(arrayIndex<pairs)){
                    cout<<pArray[arrayIndex]<<"-";
                }
				pairs++;
            }
            pairs=0;
            arrayIndex++;
        }
        cout<<endl;
    }
    else{
        cout<<"The Array is empty"<<endl;
    }
}

void Exercise4(int pArray[], int pArraySize){
	int pairs = 0; int arrayIndex = 0; bool flag = false;
    cout<<"The values that do not have a pair are: ";
    if(pArraySize>0){
        while(arrayIndex<pArraySize){
            while(pairs<pArraySize){
                if((pArray[arrayIndex]==pArray[pairs])&&(arrayIndex!=pairs)){
                    flag = false;
                    break;
                }else{
                	flag = true;
                	
				}
				pairs++;
            }
            if(flag){
            	cout<<pArray[arrayIndex]<<"-";
			}
			flag = true;
            pairs=0;
            arrayIndex++;
        }
        cout<<endl;
    }
    else{
        cout<<"The Array is empty"<<endl;
    }
}

void Exercise5(int pNumber){
	int numberOfOnes = 0;
	if (pNumber>=0){
		while(pNumber!=0){
			if(pNumber%2!=0){
				numberOfOnes++;
			}
			pNumber = pNumber/2;
		}
		cout<<"The selected value has "<<numberOfOnes<<" ones"<<endl;
	}else{
		cout<<"The selected value most be positive "<<endl;
	}
}

int main(){
	
	cout<<"Exercise#1"<<endl;
	int arrayExercise1[7] = {21,4,6,7,15,-3,312};
	Exercise1(arrayExercise1,7);
	cout<<endl;
	
	cout<<"Exercise#2"<<endl;
	bool arrayExercise2[7] = {true,true,false,false,false,true,true};
	Exercise2(arrayExercise2,7);
	cout<<endl;
	
	cout<<"Exercise#3"<<endl;
	int arrayExercise3[7] = {2,4,32,53,53,2,32};
	Exercise3(arrayExercise3,7);
	cout<<endl;
	
	cout<<"Exercise#4"<<endl;
	int arrayExercise4[7] = {2,4,32,53,62,2,32};
	Exercise4(arrayExercise4,7);
	cout<<endl;
	
	cout<<"Exercise#5"<<endl;
	Exercise5(7);
	cout<<endl;
	
   return 0;
}
