#include <iostream>

char before(char input) {
    if (input >= 'A' && input <= 'Z') {
        if (input == 'A') {
            return 'Z';
        } else {
            return input - 1;
        }
    } else {
        return '0';
    }
}
