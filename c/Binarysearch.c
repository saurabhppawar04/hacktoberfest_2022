#include<stdio.h>
int binarySearch(int arr[] , int left , int right , int item ){
    int mid ;
    if (right >= left){
        mid = (left+ right )/2;
        if (arr[mid ]==item){
            return mid +1 ;
}       else if (arr[mid]<item){
            binarySearch(arr,mid +1 , right, item );


    }   else{
            binarySearch(arr , left, mid-1 , item);
    }
    }
    return 0;
}




int main(){
    int q ;
    scanf("%d\n", &q);
    for( int z=0 ; z<q ; z++){
        int n , h;
        scanf("%d %d", &n , &h);
        int arr[n];
        for (int i=0 ; i<n ; i++ ){
            int a ;
            scanf("%d ", &a );
            arr[i]=a;
        }
        int val=15;
        int pos =-1 ;
        pos = binarySearch( arr , 0 , 7, val );
        if (pos !=-1){
            printf("%d is found at %d pos " , val , pos);
        }else {
            printf ("not able to find ");
        }
        int sum=0;
        int k=1;

        while (sum!=h){
            int hsum=0;
            for(int i =0 ; i<n-1 ; i++){
                if ((arr[i]+k)<(arr[i+1])){
                    sum=sum+k;
                }else if ((arr[i]+k)>arr[i+1]){
                    hsum= hsum+(arr[i+1]-arr[i]);
                }
                

                }

            sum=hsum;
            k++;
        }
        printf("%d ", k);

    }
        


    
    return 0;
}
   
