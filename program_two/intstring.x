struct intstring {
    int i;
    string s<16>;
};

program STINT_PROG {
    version STINT_VERS {
        float STINT_STR(intstring) = 1;
    } = 1;
} = 0x19101925;