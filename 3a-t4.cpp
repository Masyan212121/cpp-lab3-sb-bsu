//Korotchenko M. Task 4.3
#include<iostream> 
#include<limits>
using namespace std; 
int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k; //// request for user to input 
do { if (k == 0){
    break;
    } // if k will be equal to 0 then skip to cout "The total sum...", else - the user will be asked to enter integers i in the amount of k 
cout << "Enter integer nr. " << i << ": "; //initialize integer numbers i 
cin >> number; //waiting for the user input according to the limits
if(cin.fail()) // Check for failed extraction in a previous input operation
{
cin.clear();//resets any error flags which may have been set for the cin stream
cin.ignore(numeric_limits<streamsize>::max(),'\n'); //sets the maximum number of characters to ignore
cout<<"You have entered wrong input"<<endl;
cin>>number; //again prompts the user input according to the limits
}
sum_k += number; //Addition to the variable sum_k the variable number with an assignment
i++; 
}
 while (i <= k); //repetition of previous actions while the condition is true
cout << " The total sum of " << k << " integers is: "  << sum_k; //output of the result
return 0;
}

