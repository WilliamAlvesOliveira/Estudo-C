#include<stdio.h>

int main(){
    int n_normal =2147483647;
    unsigned int s_sinal = 2147483647;
    long int num_long= 4000000000;
    unsigned int quatroMilhoesInsigned = 4000000000;
    long long int num_long_long = 4000000000;
    long long unsigned int num_unsigned_long_long = 4000000000;

    printf("var int %d, var unsigned int %u\n", n_normal, s_sinal);
    n_normal++;
    s_sinal++;
    printf("var int %u, var unsigned int %u\n", n_normal, s_sinal);
    
    printf("long int num_long= %ld\n unsigned int quatroMilhoesInsigned = %u\n long long int num_long_long = %lld\n unsigned long long int num_unsigned_long_long = %llu\n",  num_long, quatroMilhoesInsigned, num_long_long, num_unsigned_long_long);

    char exit;
    printf("============= presione 's' e ENTER para sair: ");
    scanf(" %c", &exit);
    return 0;
}