/** DECLARATION of originality (Task#0#):

I hereby declare that this submitted work is the result of my own efforts
& has not been copied or plagiarized or adopted by any unfair means.

I give my full consent to if I am truly found guilty of any such misconduct,
I will have no objection against being graded Zero marks in this submission
And/Or, other proper disciplinary actions taken as per UIU rules.

Name: Mahmudur Rahman Tushar
ID: 011202080
Date: 26.02.2022
Course Name: CSE 2216/CSI 218 (D) : Data Structure Laboratory/Data Structure and Algorithms I Laboratory
Section: D
Trimester: Spring 2022.

*/
//Insertion sort

#include<iostream>
using namespace std;

void InsertionSort(int A[],int length)
{
    int hole,value;
    for (int i=1; i<length; i++)
    {
        value=A[i];
        hole=i;
        while(hole>0 && A[hole-1]>value){
            A[hole]=A[hole-1];
            hole--;
        }
        A[hole]=value;
    }

}
void printArray(int A[], int length){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int length;
    int A[]={7,2,4,1,5,3};
    length=sizeof(A)/sizeof(A[0]);
    InsertionSort(A,length);
    cout<<"Insertion Sort in Ascending Order:\n"<<endl;
    printArray(A,length);
    return 0;


}
