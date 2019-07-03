#include <assert.h>

int main() {
    int x,y;
    x = 0;
    y = 0;
    __VERIFIER_assume(-y <= 5);
    while (1) {
        if (x < 50) {
            y++;
        } else {
            y--;
        }
        if (y < 0) break;
        x++;
	__VERIFIER_assume(-y <= 5);
    }
    assert(x == 100);
    return 0;
}
