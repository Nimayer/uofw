#define SCE_HTTP_ERROR_PARSE_HTTP_INVALID_RESPONSE 0x80432060
#define SCE_HTTP_ERROR_PARSE_HTTP_INVALID_VALUE 0x804321FE

s32 g_841; //0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x08 0x08 0x08 0x08 0x08 0x20 0x20
s8 g_830 = "HTTP:/";

//Parameter registers a0 s5    a1 s4     a2 s6     a3 s0     t0 s3     t1 s2     t2 s1
s32 sceParseHttp_8077A433(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    if (Kernel_Library_D12BDE95() < 992) {
        return ((0x8041 << 16) | 0x5);
    }
    if (arg0 == 0) {
        return SCE_HTTP_ERROR_PARSE_HTTP_INVALID_RESPONSE;
    }
    /* 0x60 - 0x6C ASM code
    * if ((arg2 == 0) || (arg3 == 0)) {
    *     t2 = (0x8043 << 16);
    }*/
    if ((arg4 == 0) || (arg5 == 0) || (arg6 == 0)) {
        return SCE_HTTP_ERROR_PARSE_HTTP_INVALID_VALUE;
    }
    val = sub_000003A0(arg0,arg1,arg2,arg3);
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
//Parameter registers          a0 fp?    a1 s7     a2 s6     a3 s5     t0 s4
s32 sceParseHttp_AD7BFDEF(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    Kernel_Library_D12BDE95();
    sp[0] = 0;
    if (res < 960) {
        return 0x80410005;
    }
    if (fp == 0) {
        return SCE_HTTP_ERROR_PARSE_HTTP_INVALID_RESPONSE;
    }
    if ((arg2 == 0) || (arg3 == 0)) {
        loc_00000398();
    }
    if (arg4 == 0) {
        return SCE_HTTP_ERROR_PARSE_HTTP_INVALID_VALUE;
    }
    if (arg1 == 0) {
        loc_0000021C();
    }
    //Rivedere parte da 0x1B4 a 0x1D0
    //s1 = g_841;
    s0 = fp + 0;
    //t5 legge byte in posizione $fp
    //t4 contiene indirizzo g_841 con offset t5
    //t3 legge u32 a indirizzo t4
    s3 = 1;
    do() {
        if(s3 == 0){
            loc_000001D4();
        }
        if((t4[0]&0x8)==0) {
            loc_00000330(arg2);
        }
    }while()
}
//Registers Parameters a0 s0(vett)a1 a1     a2 s2    a3 s1
void sub_000003A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if(arg1 < 9){
        return SCE_HTTP_ERROR_PARSE_HTTP_INVALID_RESPONSE;
    }
    arg3[0]=0;
    a2 = 5;
    a1 = g_830;
    if(sub_000006CC()) {
        return SCE_HTTP_ERROR_PARSE_HTTP_INVALID_RESPONSE;
    }
}
void sub_00000510(s32 arg0, s32 arg1, s32 arg2)
{
    a3 = g_841;
    if(arg1 < 4) {
        return SCE_HTTP_ERROR_PARSE_HTTP_INVALID_RESPONSE;
    }
    t2 = arg0[0];
    t0 = arg0[$g_841];

    if((t0 & 0x4) == 0) {
        return SCE_HTTP_ERROR_PARSE_HTTP_INVALID_RESPONSE;
    }
    t6 = arg0[1] + g_841;
}
