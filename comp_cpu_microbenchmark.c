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
                    x = x + i * 2;
                    break;
                case 1:
                    x = x + i * 4;
                    break;
                case 2:
                    x = x + i * 6;
                    break;
                case 3:
                    x = x + i * 1;
                    break;
                case 4:
                    x = x + i * 7;
                    break;
                case 5:
                    x = x + i * 5;
                    break;
                case 6:
                    x = x + i * 3;
                    break;
            }

            // non-branching code, commented out when not in use
            y = (i + j) % 7;
            x = x + i * y;
        }
    }

    buf[0] = x;
}
