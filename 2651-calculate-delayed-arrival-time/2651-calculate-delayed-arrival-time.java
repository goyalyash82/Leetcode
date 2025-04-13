class Solution {
    public int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int total=(arrivalTime+delayedTime)%24;
        return total;
    }
}