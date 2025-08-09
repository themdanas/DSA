class Solution {
public:
    struct meeting {
        int start;
        int end;
        int pos;
    };

    static bool comparator(struct meeting m1, struct meeting m2) {
        if (m1.end < m2.end) return true;
        else if (m1.end > m2.end) return false;
        else if (m1.pos < m2.pos) return true;
        return false;
    }

    int maxMeetings(vector<int> &s, vector<int> &e) {
        int n = s.size();
        struct meeting meet[n];
        for (int i = 0; i < n; i++) {
            meet[i].start = s[i];
            meet[i].end = e[i];
            meet[i].pos = i + 1;
        }
    
        sort(meet, meet + n, comparator);
    
        int count = 1;
        int limit = meet[0].end;
    
        for (int i = 1; i < n; i++) {
            if (meet[i].start > limit) {
                limit = meet[i].end;
                count++;
            }
        }
            return count;
        }

};
