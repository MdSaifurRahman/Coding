struct meeting {
    int starts;
    int ends;
    int pos;
};
class Solution

{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    bool static comparator(struct meeting m1, struct meeting m2){
        if(m1.ends<m2.ends) return true;
        else if(m1.ends> m2.ends) return false;
        else if(m1.pos<m2.pos) return true;
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        struct meeting meet[n];
        for(int i=0;i<n;i++){
            meet[i].starts = start[i], meet[i].ends = end[i], meet[i].pos = i+1;
        }
        sort(meet , meet+n, comparator);
        int limit = meet[0].ends;
        int c = 1;
        for(int i=0;i<n;i++){
            if(meet[i].starts>limit){
                limit = meet[i].ends;
                c++;
            }
        }
        return c;
        
    }
};