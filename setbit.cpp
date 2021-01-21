class Solution
{
public:
//function to calculate setBits
    int setBits(int n)
    {
        int c=0;
        while(n!=0){
            n = n & (n-1);
            c++;
        }
        return c;
    }
};