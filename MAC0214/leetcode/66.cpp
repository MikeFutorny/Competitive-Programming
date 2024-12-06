class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i, n, j;
        for(i=digits.size()-1;i>=0;i--){
            n = digits[i];
            if(n!=9){
                digits[i]++;
                break;
            }
            else{
                if(i==0){
                    digits[i]=0;
                    digits.push_back(digits[digits.size()-1]);
                    for(j=digits.size()-1;j>0;j--){
                        digits[j] = digits[j-1]; 
                    }
                    digits[0] = 1;
                }
                else{
                    digits[i] = 0;
                }
            }
        }
        return digits;
    }
};
