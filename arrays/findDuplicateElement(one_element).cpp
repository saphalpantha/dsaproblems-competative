//     void printArray(int array[], int size)
//     {
//         int i;
//         for (i = 0; i < size; i++)
//             cout << array[i] << " ";
//         cout << endl;
//     }
// #include <iostream>

// using namespace std;

// class Solution
// {
// public:
//     int x = 10; 
//     void swap(int *a, int *b)
//     {
//         int temp = *a;
//         *a = *b;
//         *b = temp;
//     }


//     // // function to rearrange array (find the partition point)
//     int partition(int array[], int low, int high)
//     {

//         int pivot = array[high];

//         int i = (low - 1);

//         for (int j = low; j < high; j++)
//         {
//             if (array[j] <= pivot)
//             {

//                 i++;

//                 swap(&array[i], &array[j]);
//             }
//         }

//         swap(&array[i + 1], &array[high]);

//         return (i + 1);
//     }

//     void quickSort(int array[], int low, int high)
//     {
//         if (low < high)
//         {

//             int pi = partition(array, low, high);

//             quickSort(array, low, pi - 1);

//             quickSort(array, pi + 1, high);
//         }
//     }

//     int findDuplicate(int arr[], int size)
//     {
//         int ans = 0;
//         for (int i = 0; i < size; i++)
//         {
//             if ((arr[i] ^ arr[i + 1]) == 0)
//             {
//                 return arr[i];
//             }
//         }
//     }
// };

// int main()
// {

//     int arr[5] = {3, 1, 3, 4, 2};
//     quickSort(arr, 0, 4);
//     printArray(arr, 5);
//     cout << "Duplicate Element is " << get_one_dup(arr, 5);
//     return 0;
// }

// // APPROACH 2

// // int main(){
// //     int arr[5] = {2,3,1,4,3};
// //     int ans = 0;
// //     for(int i=0;i<5;i++){
// //         ans = ans^arr[i];
// //     }
// //     for(int i=1;i<5;i++){
// //         ans = ans^i;
// //     }
// //     cout << ans;
// //     return 0;
// // }
