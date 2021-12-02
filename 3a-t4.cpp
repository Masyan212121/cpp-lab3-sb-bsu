//Korotchenko M. Task 4.2
#include<iostream> 
using namespace std; 
int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k; //initialize k
do { if (k == 0){
    break;
    } // if k will be equal to 0 then skip to cout, else - the user will be asked to enter integers i in the amount of k 
cout << "Enter integer nr. " << i << ": "; //initialize integer numbers i 
cin >> number;
sum_k += number; //Addition to the variable sum_k the variable number with an assignment
i++; 
} while (i <= k); //repetition of previous actions while the condition is true
cout << " The total sum of " << k << " integers is: "  << sum_k; //output of the result
return 0;
}
