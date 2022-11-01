class Solution {
public:
    int minMovesToSeat(vector<int>& seat, vector<int>& student)
    {
        sort(seat.begin(),seat.end());
        sort(student.begin(),student.end());
        int count = 0;
        for(int i = 0, j = i; i<student.size(); i++ , j++)
        {
                count += abs(student[i] - seat[j]); 
          
        }
        return count;
        
    }
}; 