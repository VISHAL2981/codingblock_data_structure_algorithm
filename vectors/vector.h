class vector
{
    int cs;
    int ms;
    int *arr;

    public: vector(){
        cs=0;
        ms=1;
        arr=new int [ms];

    }

    void push_back(int d){
        if(cs==ms){
            // array if full
        int *oldarr =arr;
        arr=new int[2*ms];
        ms=2*ms;
        for(int i=0; i < cs; i++){
            arr[i]=oldarr[i];
        }

       //clear old memory
        delete [] oldarr;
        }

    

    arr[cs]=d;
    cs++;
    
    
    } 



