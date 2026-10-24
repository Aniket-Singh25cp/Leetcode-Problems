class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int daysBefore[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        partial_sum(begin(daysBefore), end(daysBefore), begin(daysBefore));
        //partial_sum here used to modify original daysBefore to the running sum of the array
        auto day = [&](const string& mmdd){
            return daysBefore[stoi(mmdd.substr(0,2)) - 1] + stoi(mmdd.substr(3));
        };
        int latestArrival = day(max(arriveAlice, arriveBob));
        int earliestDepart = day(min(leaveAlice, leaveBob));
        return max(0, earliestDepart - latestArrival + 1);
    }
};