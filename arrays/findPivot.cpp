#include <iostream>

#include <vector>
using namespace std;


int findPivot(vector<int>&nums){
    int s = 0;
    int e = nums.size()-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<e){
        if(nums[e]>nums[mid]){
            e = mid;
        }
        else{
         
           s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    ans = nums[s];
    return ans;
}

    int  binarySearch(vector<int>arr, int s, int e, int data){
        int mid;
        if(s>=e){
            return -1;
        }
        else{
            mid = (s+e)/2;
            if(arr[mid] == data){
                return mid;
            }
            else if(arr[mid] > data){
                return binarySearch(arr, s, mid-1, data);
            }
            else{
                return binarySearch(arr, mid+1, e,data);
            }
        }
        
    }
int searchRotated(vector<int> &nums, int l ,  int h, int key){
	if (l > h)
		return -1;

	int mid = (l + h) / 2;
	if (nums[mid] == key)
		return mid;

	if (nums[l] <= nums[mid]) {

		if (key >= nums[l] && key <= nums[mid])
			return searchRotated(nums, l, mid - 1, key);

		return searchRotated(nums, mid + 1, h, key);
	}
	if (key >= nums[mid] && key <= nums[h])
		return searchRotated(nums, mid + 1, h, key);

	return searchRotated(nums, l, mid - 1, key);
}


int main(){
    vector<int> nums{4,5,6,7,0,1,2};
    // vector<int> tst{1,2,3,4,5};
    // int inx = binarySearch(tst, 0 , tst.size()-1, 4);
    // cout << "inx -> " << inx << endl;
    //  cout << pivot;
    int s;
    cout << "Enter number to search: ";
    cin >> s;
    int searched_index = searchRotated(nums,0, nums.size()-1, s);
    cout << searched_index << endl;
    if(searched_index == -1){
        cout << "Not found" << endl;
    }
    else{
        cout << "Element " << s << " is in index " << searched_index << endl;
    }
    
    
    
}













int search(int arr[], int l, int h, int key)
{
	if (l > h)
		return -1;

	int mid = (l + h) / 2;
	if (arr[mid] == key)
		return mid;

	if (arr[l] <= arr[mid]) {

		if (key >= arr[l] && key <= arr[mid])
			return search(arr, l, mid - 1, key);

		return search(arr, mid + 1, h, key);
	}
	if (key >= arr[mid] && key <= arr[h])
		return search(arr, mid + 1, h, key);

	return search(arr, l, mid - 1, key);
}

// Driver program
