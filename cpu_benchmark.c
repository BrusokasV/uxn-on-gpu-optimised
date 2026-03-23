int buf[65536];

void main() {
    int x = 0;
    int y = 0;

    for (int i = 0; i < 500; i++) {
        for (int j = 0; j < 65536; j++) {
            // branching code, commented out when not in use
            y = i % 2;
            if (y == 0) {
               x = i + j;
               buf[j] = x;
            }
            else {
               x = i + j;
               buf[j] = x;
            }

            // non-branching code, commented out when not in use
            y = i % 2;
            x = i + j;
            buf[j] = x;
        }
    }
}
