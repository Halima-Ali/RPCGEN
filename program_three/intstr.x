struct intstring  {
    int i;
};

program INTSTR_PROG {
    version INTSTR_VERS {
        string INTSTR(intstring) = 1;
    } = 1;
} = 0x19101925;