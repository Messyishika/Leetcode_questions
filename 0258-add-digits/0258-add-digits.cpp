class Solution {
public:
    int addDigits(int num) {
        set<int> myset;
         int temp;
        if(num == 0)
            return num;
        while(num!=0)
        {
            long long int sum = 0;
            while(num!=0)
            {
                int nm = num%10;
                sum+= nm;
                num = num/10;
            }
            temp = sum;
            sum = sum/10;
            if(sum == 0)
            {
               return temp; 
            }
            else if(myset.find(temp)!=myset.end())
                return false;
            num = temp;
                
        }return temp;
    }
};