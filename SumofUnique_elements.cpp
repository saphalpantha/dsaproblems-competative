class Solution {
public:

    int getRightmostBit(int n){
        int count = 0;
        while((n&1)!=1){
            n=n>>1;
            count++;
        }
        return count;
    }
    bool sumOfUnique(vector<int>& arr) {
        int xor_res=0;
        int mask=0;
        for(int i=0;i<arr.size();i++){
            xor_res^=arr[i];
        }
        int pos = getRightmostBit(xor_res);
        mask = 1<<pos;
        int first_Num=0;
        int second_Num=0;
        for(int i=0;i<arr.size();i++){
            if((mask&arr[i]) != 0){
                first_Num^=arr[i];
            }
            
        }

        second_Num = first_Num^xor_res;
        
        cout << first_Num << ", " << second_Num;
        return 1;

    }
};