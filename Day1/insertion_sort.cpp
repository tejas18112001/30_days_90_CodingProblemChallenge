class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        
        for(int i =1 ; i<n ; i++)
        {
            int p = arr[i] ;
            
            int j = i-1 ;
            
            while(j>=0 && p < arr[j])
            {
                arr[j+1] = arr[j] ;
                j-- ;
            }
            
            arr[j+1] = p ;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends
