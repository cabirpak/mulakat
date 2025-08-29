#include <stdio.h>
#include <string.h>
#pragma pack(1)
struct test {
    int buf[4];
    int crc;
};
int main(){
    struct test t1;
    t1.crc = 0x5a5a;
    printf("%ld %ld\n", (unsigned char*)&t1.crc - (unsigned char*)t1.buf, 
        sizeof(t1.buf));
    /*some other codes here...*/
    memset(t1.buf, 0, 4*4+4);
    /*some other codes here...*/
    printf("crc: %x\n", t1.crc);
    return 0;
}
