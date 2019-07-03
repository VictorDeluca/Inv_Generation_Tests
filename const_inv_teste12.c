#include <assert.h>

int main() {
    int x,y;
    x = 0;
    y = 0;
	__VERIFIER_assume(-x <= 0);
	__VERIFIER_assume(-y <= 0);
	__VERIFIER_assume(-x + y <= 0);
	__VERIFIER_assume(-y <= 3);
    while (1) {
        if (x < 50) {
            y++;
        } else {
            y--;
        }
        if (y < 0) break;
        x++;
		__VERIFIER_assume(-x <= 0);
		__VERIFIER_assume(-y <= 0);
		__VERIFIER_assume(-y + 1 <= 0);
		__VERIFIER_assume(-y - 1 <= 0);
		__VERIFIER_assume(-x + y <= 0);
		__VERIFIER_assume(-y <= 3);
    }
	__VERIFIER_assume(-x <= 0);
	__VERIFIER_assume(-y <= 0);
	__VERIFIER_assume(-y + 1 <= 0);
	__VERIFIER_assume(-y - 1 <= 0);
	__VERIFIER_assume(-x + y <= 0);
    assert(x == 100);
    return 0;
}
