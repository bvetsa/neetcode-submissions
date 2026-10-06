class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        
        for (int i = 0; i <= k; i ++){
            time += min(tickets[i],tickets[k]);
        }

        if (tickets[k] == 1){
            return time;
        }
        tickets[k] -=1;
        for (int i = k; i < tickets.size(); i++){
            time += min(tickets[i],tickets[k]);
        }
        return time-tickets[k];
    }
};