#include <stdio.h>

int main() {
    char w_in[8];
    int flag[8] = {0};
    int found = 0;
    int go = 0;
    int res = 0;
    int l_cntr = 0;
    int fail_cntr = 0;
    int win = 1;
    char temp;

    while (!go && !res) {
        if (l_cntr > 8)  {
            //Reset
        }
        w_in[l_cntr++] = l_in;
    }
    //Display(l_cntr)
    //reset win
    while(fail_cntr != 10) {
        temp = getchar();
        found = 0;

        for (int i = 0; i < l_cntr; i++) {
            if (w_in[i] == temp) {
                flag[i] = 1;
                found = 1;
            }
        }
        if (found == 0) {
            fail_cntr++;
            //go to 22
        }
        //clear terminal
        win = display();
        if (win)
            break;  
    }
    for (int i = 0; i < 8; i++) {
        flag[i] = 1;
    }
    //clear terminal
    display();
}

int display(int flag[], int w_in[]) {
    int win = 1;
    for (int i = 0; i < 8; i++) {
        if (flag[i] == 1) {
            //print w_in[i]
        }
        else {
            //print -
            win = 0;
        }
    }
    return win;
}