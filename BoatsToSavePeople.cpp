class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats =0;
        int n =  people.size();
        sort(people.begin(), people.end());
        int i=0, j=n-1;
        while(i<=j){
            if (people[i] + people[j] <= limit){
                i++, j--;
                boats++;
            }
            
            else if (people [i] < people[j]) {
                j--;
            boats++;
            }
            else { 
                i++;
                boats++;
            }
        
        }
        return boats;
    }
};
