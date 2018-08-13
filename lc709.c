char* toLowerCase(char* str) {
    int i = 0;
    while( i < strlen(str)){
        if(str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        i++;
    }
    return str;
}