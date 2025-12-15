char before(char x) {
    if (x < 'A'|| x > 'Z') {
        return '0';
    } else if (x >= 'B' && x <= 'Z') {
        return(x - 1);
    } else {
        return 'Z';
    }
}