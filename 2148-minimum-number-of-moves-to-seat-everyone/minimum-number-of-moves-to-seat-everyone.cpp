class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int count =0;
        int value =0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for(int i=0;i<seats.size();i++){
            value = seats[i]-students[i];
            count += abs(value);
        }
        return count;
    }
};