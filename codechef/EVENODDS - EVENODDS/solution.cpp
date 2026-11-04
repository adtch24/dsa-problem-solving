{
            cin>>arr[i];
        }
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2 == 0)
            {
                count++;
            }
            else
            {
                count=0;
            }
            ans=max(ans,count);
        }
        
    }
    cout<<count;

count local
count snippet
count_if snippet