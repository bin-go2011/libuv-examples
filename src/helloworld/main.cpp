#include <stdio.h>
#include <stdlib.h>
#include <uv.h>

int main() {
    uv_loop_t *loop = (uv_loop_t*)malloc(sizeof(uv_loop_t));
    uv_loop_init(loop);

    printf("Now quitting.\n");
    uv_run(loop, UV_RUN_DEFAULT);

    //This program quits immediately because it has no events to process.
    /*
        static int uv__loop_alive(const uv_loop_t* loop) {
        return uv__has_active_handles(loop) ||
                uv__has_active_reqs(loop) ||
                loop->endgame_handles != NULL;
        }
    */
   
    uv_loop_close(loop);
    free(loop);
    return 0;
}