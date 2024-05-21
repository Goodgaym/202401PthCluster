#include <stdio.h>
#include <windows.h>

#define KEY_DOWN(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 1 : 0)
#define KEY_UP(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 0 : 1)

int main(){
    while(1){
        if(KEY_DOWN('W')){
            printf("Down WWWW \n");
        }
        if(KEY_UP('W')){
            printf("Up WWWW \n");
        }
        if(KEY_DOWN('E')){
            printf("Press EEEE \n");
        }
        if(KEY_DOWN(VK_SPACE)){
            printf("Press Space \n");
        }

        if(KEY_DOWN(VK_ESCAPE)){
            break;
        }
        Sleep(10);
    }
    return 0;
}