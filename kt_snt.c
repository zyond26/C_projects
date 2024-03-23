// các cách kiểm tra 1 số nguyên tố;

// cách 1:
int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}


//cách 2 :
int snt(int t)
{
    if(t<=1) return 0;
    if(t>=4){
        if(t%2==0||t%3==0)return 0;
        else {
                for(int i=5;i<=sqrt(t);i+=6){
                    if(t%i==0||t%(i+2)==0) return 0;
                }
        }
    }
    return 1;
}

