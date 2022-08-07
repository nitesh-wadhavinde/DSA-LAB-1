#include<stdio.h>
#include<time.h>
#include<stdlib.h>


//void arr_rev(int arr[],int N);
bubbleSort(int arr[],int P, int c);
selectionSort(int arr[],int P, int c);
insertionSort(int arr[],int P, int c);
time_mergeSort(int arr[], int P, int srt,int ed, int c);
mergeSort(int arr[], int P, int start,int end, int c);
merge(int arr[], int start, int m1, int m2,int end);
quickSort(int arr[],int start,int end,int P);
mS(int arr[],int P,int start,int c);
void swap(int *a1, int *a2);
int main(){
int T;
scanf("%d",&T);
while(T>0){
int N,S,K,P;
printf("enter number of elements, which sorting algo to use, what should be nature of ip, what should be output: ");
scanf("%d %d %d %d", &N, &S, &K, &P);
if(K!=0 && K!=1 && K!=2){
    printf("Invalid K val");
}
if(P!=0 && P!=1 && P!=2){
    printf("Invalid P val");
}
int randomArr[N];
int lower= 0;
    int upper=10000;
    for(int i=0;i<N;i++){
        randomArr[i]=rand()%upper;
        //printf(randomArr[i]);
    }
    if(P==2){
    for(int i=0;i<N;i++){
        printf("%d ",randomArr[i]);
    }
    }
    printf("\n");
    if(K==0){
       printf("\n");

            //Sorting function starts
            switch(S)
            {
          case 0:
              bubbleSort(randomArr,P,N);
              break;
          case 1:
            selectionSort(randomArr,P,N);
            break;
          case 2:
            insertionSort(randomArr,P,N);
            break;
          case 3:
              {clock_t start, end;
         start = clock();
            mergeSort(randomArr,P,0,N,N);
            end = clock();
            double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            printf("Time consumed %f",time);
            break;}
          case 4:
              {


              clock_t start, end;
         start = clock();
            quickSort(randomArr,0,N-1,P);
            end = clock();
            double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            printf("Time consumed %f",time);

if(P==1 || P==2){
        printf("Sorted Array: ");
        for(int i=0;i<50;i++){
        printf("%d ",randomArr[i]);
    }
        }
            break;
              }

          default:
            printf("Invalid S input");

            }
    }
if(K==1){
     int swap;
        int pos;
        for(int i=0;i<N;i++){
            pos=i;
            for(int j=i+1;j<N;j++){
                if(randomArr[pos]>randomArr[j]){
                    swap=randomArr[pos];
                    randomArr[pos] =  randomArr[j];
                    randomArr[j]=swap;
                }
            }

    }
    printf("Sorted arr");
            for(int i=0;i<50;i++){
        printf("%d ",randomArr[i]);
    }
    printf("\n");

            //Sorting function starts
            switch(S)
            {
          case 0:
              bubbleSort(randomArr,P,N);
              break;
          case 1:
            selectionSort(randomArr,P,N);
            break;
          case 2:
            insertionSort(randomArr,P,N);
            break;
          case 3:{
              clock_t start, end;
         start = clock();
            mergeSort(randomArr,P,0,N,N);
            end = clock();
            double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            printf("Time consumed %f",time);
            break;}
          case 4:
              {


              clock_t start, end;
         start = clock();
            quickSort(randomArr,0,N-1,P);
            end = clock();
            double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            printf("Time consumed %f",time);

if(P==1 || P==2){
        printf("Sorted Array: ");
        for(int i=0;i<50;i++){
        printf("%d ",randomArr[i]);
    }
        }
            break;
              }

          default:
            printf("Invalid S input");

            }
        }


else if(K==2){
 int swap;
        int pos;
        for(int i=0;i<N;i++){
            pos=i;
            for(int j=i+1;j<N;j++){
                if(randomArr[pos]<randomArr[j]){
                    swap=randomArr[pos];
                    randomArr[pos] =  randomArr[j];
                    randomArr[j]=swap;
                }
            }
        }

        //int temp;
int start=0;
int end=N;


printf("\n");
printf("Reverse sorted arr");
            for(int i=0;i<N;i++){
        printf("%d ",randomArr[i]);
    }

    printf("\n");

            //Sorting function starts
            switch(S)
            {
          case 0:
              bubbleSort(randomArr,P,N);
              break;
          case 1:
            selectionSort(randomArr,P,N);
            break;
          case 2:
            insertionSort(randomArr,P,N);
            break;
          case 3:

            {


         int c=N;
clock_t start, end;
         start = clock();
           mergeSort(randomArr,P,0,N-1,c);//N-1 to handle both odd and even length arrays
end=clock();
double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            printf("Time consumed %f",time);


            printf("\n");
            if(P==1 || P==2){
        printf("Sorted Array: ");
        for(int i=0;i<50;i++){
        printf("%d ",randomArr[i]);
    }
        }
            break;
            }
          case 4:
              {


              clock_t start, end;
         start = clock();
            quickSort(randomArr,0,N-1,P);
            end = clock();
            double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            printf("Time consumed %f",time);

if(P==1 || P==2){
        printf("Sorted Array: ");
        for(int i=0;i<50;i++){
        printf("%d ",randomArr[i]);
    }
        }
            break;
              }

          default:
            printf("Invalid S input");

            }
}

printf("\n");
T--;}
}
bubbleSort(int arr[],int P,int c)
{
clock_t start, end;
         start = clock();
        int temp=0;

        for(int i=0;i<c;i++){
            for(int j=0;j<c-i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }

        }
           end = clock();
            double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
  // printf("Time consumed %f",time);
   if(P==1 || P==2)
    {
   printf("\n");
        printf("Sorted Array: ");
        for(int i=0;i<50;i++){
        printf("%d ",arr[i]);
    }
   }
   printf("Time consumed %f",time);
}
selectionSort(int arr[],int P, int c)
{
     clock_t start, end;
         start = clock();
        int swap;
        int pos;
        for(int i=0;i<c;i++){
            pos=i;
            for(int j=i+1;j<c;j++){
                if(arr[pos]>arr[j]){
                    swap=arr[pos];
                    arr[pos] =  arr[j];
                    arr[j]=swap;
                }
            }
        }
        end = clock();
            double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            //printf("Time consumed %f",time);
        if(P==1 || P==2){
        printf("Sorted Array: ");
        for(int i=0;i<50;i++){
        printf("%d ",arr[i]);
    }
        }
        printf("Time consumed %f",time);
}

insertionSort(int arr[],int P, int c)
{
    int tmp=0;
    clock_t start, end;
         start = clock();
    for(int i=1;i<c;i++){
        int temp=arr[i];
        int pos=i;
        while(pos>0 && arr[pos-1]>temp){
           // tmp=arr[pos];
            arr[pos]=arr[pos-1];
            //arr[pos-1]=tmp;
            pos=pos-1;


        }
        arr[pos]=temp ;


    }
    end = clock();
            double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            printf("Time consumed %f",time);

            if(P==1 || P==2){
        printf("Sorted Array: ");
        for(int i=0;i<50;i++){
        printf("%d ",arr[i]);
    }
        }


}
//mS(int arr[],int P,int start,int c){
    //int end=c;
//mergeSort(arr,P,start,end);
//}
time_mergeSort(int arr[], int P, int srt,int ed, int c){
clock_t start, end;
         start = clock();
         mergeSort(arr,P,0,c-1,c);
         end = clock();
         double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            printf("Time consumed %f",time);


}
mergeSort(int arr[], int P, int srt, int e,int c)


    {


int mid;
/*clock_t start, end;
         start = clock();*/
if(srt<e){
    mid=(srt+e)/2;
    mergeSort(arr, P,srt,mid,c);
    mergeSort(arr,P,mid+1,e,c);
    merge(arr,srt,mid,mid+1,e);

//else return;
}
//end = clock();


}

merge(int arr[], int start, int m1, int m2,int end)
{
    int k=0;
    int i=start;
    int j=m2;
    int arr2[end];
    while(i<=m1 && j<=end){
        if(arr[i]<arr[j]){
            arr2[k]=arr[i];
            k=k+1;
            i=i+1;
        }
        else {
            arr2[k]=arr[j];
           k++;
            j++;
        }
        //k++;
    }
    while(i<=m1){
        arr2[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end){
        arr2[k]=arr[j];
        j++;
        k++;
    }
   //printf("\n");
   int len=sizeof(arr2)/sizeof(int);
   int a1,a2;
   for(a1=start, a2=0;a1<=end;a1++,a2++){
        arr[a1]=arr2[a2];
   }
}

quickSort(int arr[],int srt,int ed,int P){

  /*  clock_t start, end;
         start = clock();*/
    if(srt<ed){
        //printf("inside qs");



        int pos=partition(arr,srt,ed);
    quickSort(arr,srt,pos-1,P);
    quickSort(arr,pos+1,ed,P);
    }
   /* end = clock();
            double total_time_consumed = ((double) (end - start)) / CLOCKS_PER_SEC;
            double time=total_time_consumed;
            printf("Time consumed %f",time);

if(P==1 || P==2){
        printf("Sorted Array: ");
        for(int i=0;i<ed;i++){
        printf("%d ",arr[i]);
    }
        }*/

}

int partition(int arr[],int start,int end){

int pivot=arr[end];
int index=(start-1);
for(int i=start;i<=end-1;i++){
    if(arr[i]<pivot){
        index++;
        swap(&arr[index],&arr[i]);
    }
}
swap(&arr[index+1],&arr[end]);
return (index+1);



}
void swap(int *a1, int *a2) {
  int t = *a1;
  *a1 = *a2;
  *a2 = t;
}

