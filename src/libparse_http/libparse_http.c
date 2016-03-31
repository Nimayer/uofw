
//Parameter registers  a0 s5    a1 s4      a2 s6     a3 s0     t0 s3     t1 s2     t2 s1
void sub_00000000(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    if (Kernel_Library_D12BDE95() < 992) {
        return ((0x8041 << 16) | 0x5);
    }
    if (arg0 == 0) {
        return ((0x8043 << 16) | 0x2060);
    }
    //Add parameters to loc function call
    if (!(arg1 == 0) || (arg3 == 0)) {
        loc_0000010C();
    }
    if (!(arg4 == 0) || (arg5 == 0) || (arg6 == 0)) {
        loc_00000110();
    }
    t2 = (0x8043 << 16);
    val = sub_000003A0(arg0,arg1,arg2,arg3);
    s4 = arg1 - val;
    if (val < 0) {
        return val;
    }
    val = sub_00000510((arg0 + val), (arg1 - val), arg4);
    if (val < 0) {
        return val;
    }
    //check the first and second argument
    sub_0000061C((arg0 + val),(arg1 - val), arg4, arg5);
    if (val1 < 0) {
        loc_000000E4();
    }
    return ((s0 + val) - arg0);
}

loc_0000010C
