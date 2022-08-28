#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(){

    int ut = uptime();
    printf("uptime of xv6 vm : %d sec", ut/10);

    return 0;
}