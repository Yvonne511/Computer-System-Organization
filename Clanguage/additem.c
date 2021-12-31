void additem(int* arr, int* capacity, int* actual_size, int value ){
    if(*capacity==*actual_size){
        (*capacity)*=2;                                     //increase the capacity
        arr=(int*) realloc(arr,sizeof(int)* *capacity);
    }
    arr[*actual_size]=value;
    (*actual_size)++;
}

int main(){
    //static array in stack
    //need to track the actual_size
    int a[10]={5};
    printf("%d\n",a[0]);

    //dynamic array in heap - fixed size
    //need to track the actual_size
    int* b=(int*) malloc(sizeof(int)*10);
    *b=10;
    *(b+1)=20;
    *(b+2)=30;
    printf("%d\n",b[0]);
    printf("%d\n",b[1]);
    printf("%d\n",b[2]);


    //dynamic array in heap - modified size
    //need to track the actual_size and capacity
    int* c=(int*) malloc(sizeof(int)*1);
    int cap=1;
    int size=0;
    
    additem(c,&cap,&size, 100);     
    additem(c,&cap,&size, 200);     
    additem(c,&cap,&size, 300);
    additem(c,&cap,&size, 400);
    printf("%d\n",c[0]);
    printf("%d\n",c[1]);
    printf("%d\n",c[2]);
    printf("%d\n",c[3]);
}
