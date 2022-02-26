/** DECLARATION of originality (Task#0#):

I hereby declare that this submitted work is the result of my own efforts
& has not been copied or plagiarized or adopted by any unfair means.

I give my full consent to if I am truly found guilty of any such misconduct,
I will have no objection against being graded Zero marks in this submission
And/Or, other proper disciplinary actions taken as per UIU rules.

Name: Mahmudur Rahman Tushar
ID: 011202080
Date: 22.02.2022
Course Name: CSE 2216/CSI 218 (D) : Data Structure Laboratory/Data Structure and Algorithms I Laboratory
Section: D
Trimester: Spring 2022.

*/

#include <iostream>
using namespace std;

// function to swap the the position of two elements
void exchangePosition(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printArray(int Array[], int ArrayLength)
{
    /** TODO (Task#2#): Complete this function to print the sorted array. */
    for(int i=0; i<ArrayLength; i++)
    {
        cout<<Array[i] <<" "<<endl;
    }
}

void selectionSort(int Array[], int ArrayLength)
{
    for (int currentIndex = 0; currentIndex < ArrayLength - 1; currentIndex++)
    {

        // "currentIndex" holds the current index position.

        int min_ele_index = currentIndex;
        /** TODO (Task#3#): Create a nested for loop that runs from the right next index postions up to the one element less than array size.
        and increments by 1*/

        // nested for loop starts here
        for(int i =currentIndex + 1; i < ArrayLength ; i++)
        {
            if (Array[i] < Array[min_ele_index])
            min_ele_index =i;

        /** TODO (Task#4#): Select the minimum element in each loop
        and store it in the min_ele_index variable. */


        }
        // nested for loop ends here

        /** TODO (Task#5#): Complete the call for the exchangePosition function to put minimum element at the correct position. */

        /* NOTE: Hint: exchangePosition function takes two arguments and those are passed as address.

        The first parameter is passed as an example.

        Pass the second argument to complete the exchangePosition function call.  */
        exchangePosition(&Array[min_ele_index],&Array[currentIndex] );
    }
}


int main()
{
    int inputArray[] = {20, 22, -12, 30, 20};

    /** TODO (Task#1#): Create a variable called ArrayLength to determine the size of the Array. */
    int ArrayLength = sizeof(inputArray) / sizeof(inputArray[0]);

    selectionSort(inputArray, ArrayLength);

    cout << "Sorted array in Ascending Order:\n";
    printArray(inputArray, ArrayLength);
}
