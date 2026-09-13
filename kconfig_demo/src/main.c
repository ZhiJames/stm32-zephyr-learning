#include <zephyr/random/random.h>

static const int32_t sleep_time_ms = 1000;

int main(){
    uint32_t rnd;

    //do forever
    while(1){

        rnd = sys_rand32_get();
        printf("Random value: %u\n", rnd);

        //sleep
        k_msleep(sleep_time_ms);
    }

    return 0;
}
