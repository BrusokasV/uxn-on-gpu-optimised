int buf[65536];

void main() {
    int x = 0;
    int y = 0;

    for (int i = 0; i < 250; i++) {
        for (int j = 0; j < 65529; j++) {
            // branching code, commented out when not in use
            y = (i + j) % 7;
            switch (y) {
                case 0:
                    x = buf[j] * 2;
                    buf[j+2] = x;
                    break;
                case 1:
                    x = buf[j] * 2;
                    buf[j+4] = x;
                    break;
                case 2:
                    x = buf[j] * 2;
                    buf[j+6] = x;
                    break;
                case 3:
                    x = buf[j] * 2;
                    buf[j+1] = x;
                    break;
                case 4:
                    x = buf[j] * 2;
                    buf[j+7] = x;
                    break;
                case 5:
                    x = buf[j] * 2;
                    buf[j+5] = x;
                    break;
                case 6:
                    x = buf[j] * 2;
                    buf[j+3] = x;
                    break;
            }

            // non-branching code, commented out when not in use
            y = (i + j) % 7;
            x = buf[j] * 2;
            buf[j+y] = x;
        }
    }
}
