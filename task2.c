// Mohamed Reda Abdullatif Akl [id:99]
// Task2: ToggleBit() function 

#include <stdio.h>
int ToggleBit(int byte, int position);

int main (){
    int result = ToggleBit(0x08,4);
    printf("result = 0x%X",result);
    return 0;
}

int ToggleBit(int byte, int position){

    int answer = byte ^ ( 1 << position );
    return answer;

}
