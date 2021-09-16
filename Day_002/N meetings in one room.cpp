class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    void sortt(int a[], int b[], int n){
        pair<int,int> meeting[n];
        for(int i=0; i<n; i++){
            meeting[i].first = a[i];
            meeting[i].second = b[i];
        }
        sort(meeting,meeting+n);
        for(int i=0;i<n;i++){
            a[i] = meeting[i].first;
            b[i] = meeting[i].second;
        }
    }
    int maxMeetings(int start[], int end[], int n)
    {
        sortt(end,start,n);
        int last = end[0],meeting = 1;
        for (int i = 1; i < n; i++)
        {
            if(last < start[i]) {
                meeting++;
                last = end[i];
            }
        }
        return meeting;
        
   
