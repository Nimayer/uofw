

void sub_00000000(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    v0 = Kernel_Library_D12BDE95();
    cond = (v0 < 992);
    v0 = (0x8041 << 16) | 0x5;
    if (cond != 0) {
        loc_000000E4();
    }
    v0 = (0x8043 << 16) | 0x2060;
    if (arg0 == 0) {
        loc_000000E4();
    }
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
        loc_000000E4();
    }
    sub_00000510((arg0 + val), (arg1 - val), arg4);
    if (val < 0) {
        loc_000000E4();
    }
    //check the first and second argument
    sub_0000061C((arg0 + val + val),(arg1 - val - val), arg4, arg5);
    if (val < 0) {
        loc_000000E4();
    }
    return ((s0 + val) - arg0);
}

loc_000000E4()
{

}
