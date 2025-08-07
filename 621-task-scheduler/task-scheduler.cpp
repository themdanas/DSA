class Solution {
public:
    int leastInterval(vector<char>& tasks, int coolingPeriod) {
        vector<int> taskCount(26);
        int maxCount = 0;

        for (char task : tasks) {
            task -= 'A';
            ++taskCount[task];
            maxCount = max(maxCount, taskCount[task]);
        }

        int tasksWithMaxCount = 0;
        for (int count : taskCount) {
            if (count == maxCount) {
                ++tasksWithMaxCount;
            }
        }

        int minSlotsRequired = (maxCount - 1) * (coolingPeriod + 1) + tasksWithMaxCount;

        return max(static_cast<int>(tasks.size()), minSlotsRequired);
    }
};
