#include <cstdio>
int main(){
    long long a, b, da, db;
    scanf("%lld%lld%lld%lld", &a, &da, &b, &db);
    long long pa = 0 , pb = 0;
   
   
    while ( a!=0)
    {
        //枚举a中的每一位
        if(a%10 == da ) pa = pa * 10 +da ;
        a = a/10;
    }

    while (b !=0){
        // 枚举b的每一位
            // 枚举b的每一位
            if(b%10 == db) pb = pb*10 +db; //如果当前位为db,给pb增加一位
            // 3*10+3
            b = b/10;
    }



    printf("%lld\n", pa + pb);
    return 0;
}
