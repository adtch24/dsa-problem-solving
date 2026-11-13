class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>arr(score.size());
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++)
        {
          pq.push({score[i],i});
        }
        int rank=1;
        while(!pq.empty())
        {
          int x=pq.top().second;
          if(rank==1) arr[x]="Gold Medal";
          else if(rank==2) arr[x]="Silver Medal";
          else if(rank==3) arr[x]="Bronze Medal";
          else
          {
            arr[x]=to_string(rank);
          }
          pq.pop();
          rank++;
        }
          
        return arr;

        
    }
};