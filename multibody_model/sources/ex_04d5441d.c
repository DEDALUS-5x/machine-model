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
ex__UlvlrBcJyCQe9g1XKnQTy(real_T*fi,real_T const*H,size_t const bin,real_T
const*f,size_t const n,boolean_T const ex_F_tm5fod4xxuguhS49BSQm);static void
ex__KGvif9QwHdpbDAnE0QfcZ(real_T*x,real_T*f,real_T const*xs,real_T const*fs,
size_t const n);void tlu2_1d_linear_nearest_process(real_T*x,real_T*f,real_T
const*xs,real_T const*fs,size_t const*n){ex__KGvif9QwHdpbDAnE0QfcZ(x,f,xs,fs,*
n);}void tlu2_1d_linear_nearest_process_custom_function_(void*out,void const*
in){real_T const*xs=(real_T const*)((void const*const*)in)[0];real_T const*fs=
(real_T const*)((void const*const*)in)[1];size_t const*n=(size_t const*)((void
const*const*)in)[2];real_T*x=(real_T*)((void**)out)[0];real_T*f=(real_T*)((
void**)out)[1];tlu2_1d_linear_nearest_process(x,f,xs,fs,n);}void
tlu2_1d_linear_linear_process(real_T*x,real_T*f,real_T const*xs,real_T const*
fs,size_t const*n){ex__KGvif9QwHdpbDAnE0QfcZ(x,f,xs,fs,*n);}void
tlu2_1d_linear_linear_process_custom_function_(void*out,void const*in){real_T
const*xs=(real_T const*)((void const*const*)in)[0];real_T const*fs=(real_T
const*)((void const*const*)in)[1];size_t const*n=(size_t const*)((void const*
const*)in)[2];real_T*x=(real_T*)((void**)out)[0];real_T*f=(real_T*)((void**)
out)[1];tlu2_1d_linear_linear_process(x,f,xs,fs,n);}static void
ex__KGvif9QwHdpbDAnE0QfcZ(real_T*x,real_T*f,real_T const*xs,real_T const*fs,
size_t const n){memcpy(x,xs,n*sizeof(real_T));memcpy(f,fs,n*sizeof(real_T));
ex_FtfBZE2kLGxyWamCvlRfeQ(x,f,n);}void
tlu2_1d_linear_nearest_parametric_derivative(real_T*fi,real_T const*H,size_t
const*bin,real_T*f,size_t const*n,size_t const*numels){size_t
ex_kwrB3ZoKf7OufTHWaHJV7a,ex__wN5g_p_uwdVVLfRtx9szc;for(
ex_kwrB3ZoKf7OufTHWaHJV7a=0;ex_kwrB3ZoKf7OufTHWaHJV7a<*n;
ex_kwrB3ZoKf7OufTHWaHJV7a++){f[ex_kwrB3ZoKf7OufTHWaHJV7a]=0;}for(
ex__wN5g_p_uwdVVLfRtx9szc=0;ex__wN5g_p_uwdVVLfRtx9szc<*n;
ex__wN5g_p_uwdVVLfRtx9szc++){if(ex__wN5g_p_uwdVVLfRtx9szc>0){f[
ex__wN5g_p_uwdVVLfRtx9szc-1]=0;}f[ex__wN5g_p_uwdVVLfRtx9szc]=1;
tlu2_1d_linear_nearest_value(fi+ex__wN5g_p_uwdVVLfRtx9szc*(*numels),H,bin,f,n,
numels);}}void tlu2_1d_linear_nearest_value(real_T*fi,real_T const*H,size_t
const*bin,real_T const*f,size_t const*n,size_t const*numels){size_t
ex__wN5g_p_uwdVVLfRtx9szc;for(ex__wN5g_p_uwdVVLfRtx9szc=0;
ex__wN5g_p_uwdVVLfRtx9szc<*numels;ex__wN5g_p_uwdVVLfRtx9szc++){
ex__UlvlrBcJyCQe9g1XKnQTy(fi+ex__wN5g_p_uwdVVLfRtx9szc,H+2*
ex__wN5g_p_uwdVVLfRtx9szc,*(bin+ex__wN5g_p_uwdVVLfRtx9szc),f,*n,false);}}void
tlu2_1d_linear_nearest_value_custom_function_(void*out,void const*in){real_T
const*H=(real_T const*)((void const*const*)in)[0];size_t const*bin=(size_t
const*)((void const*const*)in)[1];real_T const*f=(real_T const*)((void const*
const*)in)[2];size_t const*n=(size_t const*)((void const*const*)in)[3];size_t
const*numels=(size_t const*)((void const*const*)in)[4];real_T*fi=(real_T*)out;
tlu2_1d_linear_nearest_value(fi,H,bin,f,n,numels);}void
tlu2_1d_linear_linear_parametric_derivative(real_T*fi,real_T const*H,size_t
const*bin,real_T*f,size_t const*n,size_t const*numels){size_t
ex_kwrB3ZoKf7OufTHWaHJV7a,ex__wN5g_p_uwdVVLfRtx9szc;for(
ex_kwrB3ZoKf7OufTHWaHJV7a=0;ex_kwrB3ZoKf7OufTHWaHJV7a<*n;
ex_kwrB3ZoKf7OufTHWaHJV7a++){f[ex_kwrB3ZoKf7OufTHWaHJV7a]=0;}for(
ex__wN5g_p_uwdVVLfRtx9szc=0;ex__wN5g_p_uwdVVLfRtx9szc<*n;
ex__wN5g_p_uwdVVLfRtx9szc++){if(ex__wN5g_p_uwdVVLfRtx9szc>0){f[
ex__wN5g_p_uwdVVLfRtx9szc-1]=0;}f[ex__wN5g_p_uwdVVLfRtx9szc]=1;
tlu2_1d_linear_linear_value(fi+ex__wN5g_p_uwdVVLfRtx9szc*(*numels),H,bin,f,n,
numels);}}void tlu2_1d_linear_linear_value(real_T*fi,real_T const*H,size_t
const*bin,real_T const*f,size_t const*n,size_t const*numels){size_t
ex__wN5g_p_uwdVVLfRtx9szc;for(ex__wN5g_p_uwdVVLfRtx9szc=0;
ex__wN5g_p_uwdVVLfRtx9szc<*numels;ex__wN5g_p_uwdVVLfRtx9szc++){
ex__UlvlrBcJyCQe9g1XKnQTy(fi+ex__wN5g_p_uwdVVLfRtx9szc,H+2*
ex__wN5g_p_uwdVVLfRtx9szc,*(bin+ex__wN5g_p_uwdVVLfRtx9szc),f,*n,true);}}void
tlu2_1d_linear_linear_value_custom_function_(void*out,void const*in){real_T
const*H=(real_T const*)((void const*const*)in)[0];size_t const*bin=(size_t
const*)((void const*const*)in)[1];real_T const*f=(real_T const*)((void const*
const*)in)[2];size_t const*n=(size_t const*)((void const*const*)in)[3];size_t
const*numels=(size_t const*)((void const*const*)in)[4];real_T*fi=(real_T*)out;
tlu2_1d_linear_linear_value(fi,H,bin,f,n,numels);}static void
ex__UlvlrBcJyCQe9g1XKnQTy(real_T*fi,real_T const*H,size_t const bin,real_T
const*f,size_t const n,boolean_T const ex_F_tm5fod4xxuguhS49BSQm){if(f[bin]==f
[bin+1]){if(H[0]== -H[1]){fi[0]=0.0;}else{fi[0]=f[bin];}}else{fi[0]=f[bin]*H[0
]+f[bin+1]*H[1];}}
