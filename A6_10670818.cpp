#include<iostream>
using namespace std;
int main()
{  int searchFor;
    cout<<"From the set of whole numbers lesser than 11, ";
    cout<<"enter the number to search\n";
	cin>>searchFor;
int list[11]={0,1,2,3,4,5,6,7,8,9,10,};
int firstIndex = 0;
int lastIndex = 11 - 1;
int middleIndex;
bool found = false;
while (firstIndex <= lastIndex && !found)
{
searchFor = (firstIndex + lastIndex) / 2;
if (list[middleIndex] == searchFor)
found = true;
else if (list[middleIndex] > searchFor)
lastIndex = middleIndex - 1;
else
firstIndex = middleIndex + 1;
}
if (found)
cout<<searchFor<<" found at position "<<middleIndex+1;
return 0;
}
