class Solution {
public:
    int minMovesToSeat(vector<int>& seat, vector<int>& student)
    {
        sort(seat.begin(),seat.end());
        sort(student.begin(),student.end());
        int count = 0;
        for(int i = 0, j = i; i<student.size(); i++ , j++)
        {
            // for(int j = 0; j<seat.size(); j++)
            // {
                count += abs(student[i] - seat[j]); 
            // }
        }
        return count;
        
    }

    
    // seat = [1,4,5,9]    [2,2,6,6]
    //stud =  [1,2,3,6]    [1,2,3,6]
    // 2+2+3                // 1+0+3+0
}; 