#include<iostream>

using namespace std;

// function for BubbleSort

void BubbleSort(int thisArray[], int thisArraysize)
{
    //starting the comparison from 0 each time; up to n - 1
    for(int step = 0; step < thisArraysize; step++)
    {
        for(int i = 0; i < (thisArraysize - step) - 1 ; i++)
        {
            //swap only if the right element in the wrong position
            if (thisArray[i] > thisArray[i+1])
            {

                int temp = thisArray[i];
                thisArray[i] = thisArray[i+1];
                thisArray[i+1] = temp;

            }
        }
    }
}


void printArray(int thisArray[], int thisArraySize)
{
    for(int i=0; i<thisArraySize; i++)
    {
        cout<<thisArray[i] <<" "<<endl;
    }
}

// main function

int main()
{
    int myArray[] = {99,-3 ,77,-8,24,-12,37,-50,0};

    int ArraySize = sizeof(myArray) / sizeof(myArray[0]);

    BubbleSort(myArray, ArraySize);

    cout<<"Printing in the Ascending order"<<endl;

    printArray(myArray, ArraySize);

   return 0;
}
