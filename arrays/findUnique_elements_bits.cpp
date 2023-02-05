#include<bits/stdc++.h>
using namespace std;

int findRightMostBit(int x) {
	int i = 0;
	while (x > 0) {
		if(x&1){
			return i;
		}
		x>>1;
		i++;
	}
	return i;
}

void findUnique(int arr[], int size) {
	int res = 0;
	for (int i = 0; i < size; ++i) {
		res = res ^ arr[i];
	}
	
	int bitPos = findRightMostBit(res);
	int mask = (1 << bitPos);
	int firstNo=0;
	for (int i = 0; i < size; ++i)
	{
		if ((mask & arr[i]) != 0) {
            cout <<"---------" <<firstNo << endl;
			firstNo = firstNo ^ arr[i];
		}
	}	
    cout << "mask---------- " << mask << endl; 
	int secondNo = firstNo^ res;
	cout<<"Two Unique Numbers : "<<firstNo<<" , "<<secondNo;
}


int main() {
	int n;

	cout<<"Enter size of array : ";
	cin>>n;

	int arr[n];

	cout<<"Enter elements of array : \n";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	findUnique(arr, n);

	return 0;
}
