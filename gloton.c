#include <malloc.h>
#include <unistd.h>
#include <memory.h>
#define MB 1024 * 1024
int main() {
    while (1) {
        void *p = malloc( 100*MB );
        memset(p,0, 100*MB );
        sleep(1);
    }
}
