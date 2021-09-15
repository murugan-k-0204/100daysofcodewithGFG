class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zeros = 0,ones=0,twos=0;
        for(int i=0; i<n; i++){
            if(a[i]==0) zeros++;
            else if(a[i]==1) ones++;
            else twos++;
        }
        for(int i=0; i<n; i++){
            if(i<zeros) a[i]=0;
            else if(i<ones+zeros) a[i]=1;
            else a[i] = 2;
        }
    }
    
};
