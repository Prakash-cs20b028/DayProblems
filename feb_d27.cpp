int* game_with_number(int arr[], int n)
{
    
    int* arr1 = new int[n];
    for(int i=0;i<n-1;i++)
    {
        arr1[i] = arr[i] | arr[i+1];
    }
    arr1[n-1] = arr[n-1];
    return arr1;
    
} 
