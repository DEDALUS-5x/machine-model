#include "multibody_model_macros.h"
#include "pm_std.h"
#include "external_std.h"
#include "string.h"
size_t ex_FSBp3lkv5gpCXL2yT9vLNh(real_T const*x,size_t const n,real_T const t)
;void ex_kGRJvwU4WMthWL53sjRCpO(real_T*ex_F2l4p_g4sn02huHNflQjMH,size_t const
n1,size_t const n2,size_t const n3,size_t const n4,size_t const
ex_kyZWlRgyPY_nhaYrzhlz4N,size_t const ex_VSy0VE52bQSafuDoXEVasH,size_t const
ex_keXUKEfwn7pKd9Pw_tgV73,size_t const ex_FZiPJehSX8hycyX0BLEeoT);void
ex_FtfBZE2kLGxyWamCvlRfeQ(real_T*x,real_T*f,size_t const n);void
ex_F4LajttG6uGtbXBJgUNQpW(real_T*x1,real_T*x2,real_T*f,size_t const n1,size_t
const n2);void ex_kIBgcKPC9nhchTKovcabSa(real_T*x1,real_T*x2,real_T*x3,real_T*
f,size_t const n1,size_t const n2,size_t const n3);void
ex_F_6wSEEsvm_1cTAuvwDt9B(real_T*x1,real_T*x2,real_T*x3,real_T*x4,real_T*f,
size_t const n1,size_t const n2,size_t const n3,size_t const n4);size_t
ex_VzC4wVDNwRO2VyQZ1TOBFP(real_T*H,real_T*G,real_T const*x,size_t const n,
real_T const t,boolean_T const ex_V0dauSHHy5d6_D42s3Aeag);static void
ex_FEqJOwWsoqtBeLOBScc47f(real_T*fi,real_T const*H1,size_t const bin1,real_T
const*H2,size_t const bin2,real_T const*f,size_t const n1,size_t const n2,
boolean_T const ex_F_tm5fod4xxuguhS49BSQm);static void
ex_FH_uPUneNGWNjiMxeN5lfg(real_T*x1,real_T*x2,real_T*f,real_T const*x1s,real_T
const*x2s,real_T const*fs,size_t const n1,size_t const n2);void
tlu2_2d_linear_nearest_process(real_T*x1,real_T*x2,real_T*f,real_T const*x1s,
real_T const*x2s,real_T const*fs,size_t const*n1,size_t const*n2){
ex_FH_uPUneNGWNjiMxeN5lfg(x1,x2,f,x1s,x2s,fs,*n1,*n2);}void
tlu2_2d_linear_nearest_process_custom_function_(void*out,void const*in){real_T
const*x1s=(real_T const*)((void const*const*)in)[0];real_T const*x2s=(real_T
const*)((void const*const*)in)[1];real_T const*fs=(real_T const*)((void const*
const*)in)[2];size_t const*n1=(size_t const*)((void const*const*)in)[3];size_t
const*n2=(size_t const*)((void const*const*)in)[4];real_T*x1=(real_T*)((void**
)out)[0];real_T*x2=(real_T*)((void**)out)[1];real_T*f=(real_T*)((void**)out)[2
];tlu2_2d_linear_nearest_process(x1,x2,f,x1s,x2s,fs,n1,n2);}void
tlu2_2d_linear_linear_process(real_T*x1,real_T*x2,real_T*f,real_T const*x1s,
real_T const*x2s,real_T const*fs,size_t const*n1,size_t const*n2){
ex_FH_uPUneNGWNjiMxeN5lfg(x1,x2,f,x1s,x2s,fs,*n1,*n2);}void
tlu2_2d_linear_linear_process_custom_function_(void*out,void const*in){real_T
const*x1s=(real_T const*)((void const*const*)in)[0];real_T const*x2s=(real_T
const*)((void const*const*)in)[1];real_T const*fs=(real_T const*)((void const*
const*)in)[2];size_t const*n1=(size_t const*)((void const*const*)in)[3];size_t
const*n2=(size_t const*)((void const*const*)in)[4];real_T*x1=(real_T*)((void**
)out)[0];real_T*x2=(real_T*)((void**)out)[1];real_T*f=(real_T*)((void**)out)[2
];tlu2_2d_linear_linear_process(x1,x2,f,x1s,x2s,fs,n1,n2);}static void
ex_FH_uPUneNGWNjiMxeN5lfg(real_T*x1,real_T*x2,real_T*f,real_T const*x1s,real_T
const*x2s,real_T const*fs,size_t const n1,size_t const n2){size_t const n=n1*
n2;memcpy(x1,x1s,n1*sizeof(real_T));memcpy(x2,x2s,n2*sizeof(real_T));memcpy(f,
fs,n*sizeof(real_T));ex_F4LajttG6uGtbXBJgUNQpW(x1,x2,f,n1,n2);}void
tlu2_2d_linear_nearest_parametric_derivative(real_T*fi,real_T const*H1,size_t
const*bin1,real_T const*H2,size_t const*bin2,real_T*f,size_t const*n1,size_t
const*n2,size_t const*numels){size_t ex_kwrB3ZoKf7OufTHWaHJV7a,
ex__wN5g_p_uwdVVLfRtx9szc,ex__ESTFr_LB7OdiuXN5c2Lq_=(*n1)*(*n2);for(
ex_kwrB3ZoKf7OufTHWaHJV7a=0;ex_kwrB3ZoKf7OufTHWaHJV7a<
ex__ESTFr_LB7OdiuXN5c2Lq_;ex_kwrB3ZoKf7OufTHWaHJV7a++){f[
ex_kwrB3ZoKf7OufTHWaHJV7a]=0;}for(ex__wN5g_p_uwdVVLfRtx9szc=0;
ex__wN5g_p_uwdVVLfRtx9szc<ex__ESTFr_LB7OdiuXN5c2Lq_;ex__wN5g_p_uwdVVLfRtx9szc
++){if(ex__wN5g_p_uwdVVLfRtx9szc>0){f[ex__wN5g_p_uwdVVLfRtx9szc-1]=0;}f[
ex__wN5g_p_uwdVVLfRtx9szc]=1;tlu2_2d_linear_nearest_value(fi+
ex__wN5g_p_uwdVVLfRtx9szc*(*numels),H1,bin1,H2,bin2,f,n1,n2,numels);}}void
tlu2_2d_linear_nearest_value(real_T*fi,real_T const*H1,size_t const*bin1,
real_T const*H2,size_t const*bin2,real_T const*f,size_t const*n1,size_t const*
n2,size_t const*numels){size_t ex__wN5g_p_uwdVVLfRtx9szc;for(
ex__wN5g_p_uwdVVLfRtx9szc=0;ex__wN5g_p_uwdVVLfRtx9szc<*numels;
ex__wN5g_p_uwdVVLfRtx9szc++){ex_FEqJOwWsoqtBeLOBScc47f(fi+
ex__wN5g_p_uwdVVLfRtx9szc,H1+2*ex__wN5g_p_uwdVVLfRtx9szc,*(bin1+
ex__wN5g_p_uwdVVLfRtx9szc),H2+2*ex__wN5g_p_uwdVVLfRtx9szc,*(bin2+
ex__wN5g_p_uwdVVLfRtx9szc),f,*n1,*n2,false);}}void
tlu2_2d_linear_nearest_value_custom_function_(void*out,void const*in){real_T
const*H1=(real_T const*)((void const*const*)in)[0];size_t const*bin1=(size_t
const*)((void const*const*)in)[1];real_T const*H2=(real_T const*)((void const*
const*)in)[2];size_t const*bin2=(size_t const*)((void const*const*)in)[3];
real_T const*f=(real_T const*)((void const*const*)in)[4];size_t const*n1=(
size_t const*)((void const*const*)in)[5];size_t const*n2=(size_t const*)((void
const*const*)in)[6];size_t const*numels=(size_t const*)((void const*const*)in)
[7];real_T*fi=(real_T*)out;tlu2_2d_linear_nearest_value(fi,H1,bin1,H2,bin2,f,
n1,n2,numels);}void tlu2_2d_linear_linear_parametric_derivative(real_T*fi,
real_T const*H1,size_t const*bin1,real_T const*H2,size_t const*bin2,real_T*f,
size_t const*n1,size_t const*n2,size_t const*numels){size_t
ex_kwrB3ZoKf7OufTHWaHJV7a,ex__wN5g_p_uwdVVLfRtx9szc,ex__ESTFr_LB7OdiuXN5c2Lq_=
(*n1)*(*n2);for(ex_kwrB3ZoKf7OufTHWaHJV7a=0;ex_kwrB3ZoKf7OufTHWaHJV7a<
ex__ESTFr_LB7OdiuXN5c2Lq_;ex_kwrB3ZoKf7OufTHWaHJV7a++){f[
ex_kwrB3ZoKf7OufTHWaHJV7a]=0;}for(ex__wN5g_p_uwdVVLfRtx9szc=0;
ex__wN5g_p_uwdVVLfRtx9szc<ex__ESTFr_LB7OdiuXN5c2Lq_;ex__wN5g_p_uwdVVLfRtx9szc
++){if(ex__wN5g_p_uwdVVLfRtx9szc>0){f[ex__wN5g_p_uwdVVLfRtx9szc-1]=0;}f[
ex__wN5g_p_uwdVVLfRtx9szc]=1;tlu2_2d_linear_nearest_value(fi+
ex__wN5g_p_uwdVVLfRtx9szc*(*numels),H1,bin1,H2,bin2,f,n1,n2,numels);}}void
tlu2_2d_linear_linear_value(real_T*fi,real_T const*H1,size_t const*bin1,real_T
const*H2,size_t const*bin2,real_T const*f,size_t const*n1,size_t const*n2,
size_t const*numels){size_t ex__wN5g_p_uwdVVLfRtx9szc;for(
ex__wN5g_p_uwdVVLfRtx9szc=0;ex__wN5g_p_uwdVVLfRtx9szc<*numels;
ex__wN5g_p_uwdVVLfRtx9szc++){ex_FEqJOwWsoqtBeLOBScc47f(fi+
ex__wN5g_p_uwdVVLfRtx9szc,H1+2*ex__wN5g_p_uwdVVLfRtx9szc,*(bin1+
ex__wN5g_p_uwdVVLfRtx9szc),H2+2*ex__wN5g_p_uwdVVLfRtx9szc,*(bin2+
ex__wN5g_p_uwdVVLfRtx9szc),f,*n1,*n2,true);}}void
tlu2_2d_linear_linear_value_custom_function_(void*out,void const*in){real_T
const*H1=(real_T const*)((void const*const*)in)[0];size_t const*bin1=(size_t
const*)((void const*const*)in)[1];real_T const*H2=(real_T const*)((void const*
const*)in)[2];size_t const*bin2=(size_t const*)((void const*const*)in)[3];
real_T const*f=(real_T const*)((void const*const*)in)[4];size_t const*n1=(
size_t const*)((void const*const*)in)[5];size_t const*n2=(size_t const*)((void
const*const*)in)[6];size_t const*numels=(size_t const*)((void const*const*)in)
[7];real_T*fi=(real_T*)out;tlu2_2d_linear_linear_value(fi,H1,bin1,H2,bin2,f,n1
,n2,numels);}static void ex_FEqJOwWsoqtBeLOBScc47f(real_T*fi,real_T const*H1,
size_t const bin1,real_T const*H2,size_t const bin2,real_T const*f,size_t const
n1,size_t const n2,boolean_T const ex_V0dauSHHy5d6_D42s3Aeag){size_t bin=bin1+
n1*bin2;size_t ex_FnrjFNs9eQp9V5vCxPaoKw,ex_FRuIUemzxbdhfqkjXhoyK7;size_t
ex_Fb8WfqABMs_vcqFzZf37Fa,ex_k4UiAV7JSYpMjHsHDM_wV6;fi[0]=0.0;for(
ex_FRuIUemzxbdhfqkjXhoyK7=0;ex_FRuIUemzxbdhfqkjXhoyK7<2;++
ex_FRuIUemzxbdhfqkjXhoyK7){ex_k4UiAV7JSYpMjHsHDM_wV6=n1*
ex_FRuIUemzxbdhfqkjXhoyK7+bin;for(ex_FnrjFNs9eQp9V5vCxPaoKw=0;
ex_FnrjFNs9eQp9V5vCxPaoKw<2;++ex_FnrjFNs9eQp9V5vCxPaoKw){
ex_Fb8WfqABMs_vcqFzZf37Fa=ex_FnrjFNs9eQp9V5vCxPaoKw+ex_k4UiAV7JSYpMjHsHDM_wV6;
fi[0]+=f[ex_Fb8WfqABMs_vcqFzZf37Fa]*H1[ex_FnrjFNs9eQp9V5vCxPaoKw]*H2[
ex_FRuIUemzxbdhfqkjXhoyK7];}}}
