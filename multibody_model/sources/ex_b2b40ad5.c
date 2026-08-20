#include "multibody_model_macros.h"
#include "pm_std.h"
#include "external_std.h"
#include "math.h"
extern int32_T ex_kAGatx_ZQ6OiVLnUjuqSAR(int32_T const);extern int32_T
ex_FaQw_ffuc7xT_q_mbYdzir(uint32_T);static void ex_VdO_UbGQkxGTb1eqborJDZ(
int32_T ex_kXqFOFSw4jlGWLYvFkyk1m,int32_T*const out){int32_T
ex__P62gPTDu_GtjP1J7m5AOp;int32_T ex__CId_jRUNKCqWiTOyT1NQx;real_T
ex_FhygHBqmHYx1jHeiQn8ZVj;real_T ex_kNbvLmFI_EtAay5OpgNJFz;do{
ex_kXqFOFSw4jlGWLYvFkyk1m=ex_kAGatx_ZQ6OiVLnUjuqSAR(ex_kXqFOFSw4jlGWLYvFkyk1m)
;ex__P62gPTDu_GtjP1J7m5AOp=ex_kXqFOFSw4jlGWLYvFkyk1m;ex_FhygHBqmHYx1jHeiQn8ZVj
=2.0*4.6566128752457969e-10*ex__P62gPTDu_GtjP1J7m5AOp-1.0;
ex_kXqFOFSw4jlGWLYvFkyk1m=ex_kAGatx_ZQ6OiVLnUjuqSAR(ex_kXqFOFSw4jlGWLYvFkyk1m)
;ex__CId_jRUNKCqWiTOyT1NQx=ex_kXqFOFSw4jlGWLYvFkyk1m;ex_kNbvLmFI_EtAay5OpgNJFz
=2.0*4.6566128752457969e-10*ex__CId_jRUNKCqWiTOyT1NQx-1.0;}while(
ex_FhygHBqmHYx1jHeiQn8ZVj*ex_FhygHBqmHYx1jHeiQn8ZVj+ex_kNbvLmFI_EtAay5OpgNJFz*
ex_kNbvLmFI_EtAay5OpgNJFz>1.0);out[0]=ex__P62gPTDu_GtjP1J7m5AOp;out[1]=
ex__CId_jRUNKCqWiTOyT1NQx;}void compute_gaussian_value(real_T*out,real_T const
*mean,real_T const*sqrtvar,int32_T const*seed){real_T ex_FhygHBqmHYx1jHeiQn8ZVj
=2*4.6566128752457969e-10*seed[0]-1.0;real_T ex_kNbvLmFI_EtAay5OpgNJFz=2*
4.6566128752457969e-10*seed[1]-1.0;ex_kNbvLmFI_EtAay5OpgNJFz=
ex_kNbvLmFI_EtAay5OpgNJFz*ex_kNbvLmFI_EtAay5OpgNJFz+ex_FhygHBqmHYx1jHeiQn8ZVj*
ex_FhygHBqmHYx1jHeiQn8ZVj;out[0]=(sqrt(-2.0*log(ex_kNbvLmFI_EtAay5OpgNJFz)/
ex_kNbvLmFI_EtAay5OpgNJFz)*ex_FhygHBqmHYx1jHeiQn8ZVj)*sqrtvar[0]+mean[0];}void
compute_gaussian_value_custom_function_(PMValue ex_kBjdZCqdGxxriTLiPTxn4N,
ConstPMValue in){real_T const*mean=(real_T const*)((void const*const*)in)[0];
real_T const*ex_VYo2Mm0MLwSwemVoyqJ3lF=(real_T const*)((void const*const*)in)[
1];int32_T const*seed=(int32_T const*)((void const*const*)in)[2];real_T*out=(
real_T*)ex_kBjdZCqdGxxriTLiPTxn4N;compute_gaussian_value(out,mean,
ex_VYo2Mm0MLwSwemVoyqJ3lF,seed);}void update_gaussian_seed(int32_T*out,int32_T
const*x){ex_VdO_UbGQkxGTb1eqborJDZ(x[1],out);}void
update_gaussian_seed_custom_function_(PMValue ex_kBjdZCqdGxxriTLiPTxn4N,
ConstPMValue ex_VkFC2hfrNV8lYiAOFp8tS1){int32_T const*x=(int32_T const*)((void
const*const*)ex_VkFC2hfrNV8lYiAOFp8tS1)[0];int32_T*out=(int32_T*)
ex_kBjdZCqdGxxriTLiPTxn4N;update_gaussian_seed(out,x);}void init_gaussian_seed
(int32_T*out,uint32_T const*x){int32_T ex_k9vhyFTMKOdYgysUqibCZU=
ex_FaQw_ffuc7xT_q_mbYdzir(x[0]);ex_VdO_UbGQkxGTb1eqborJDZ(
ex_k9vhyFTMKOdYgysUqibCZU,out);}void init_gaussian_seed_custom_function_(
PMValue ex_kBjdZCqdGxxriTLiPTxn4N,ConstPMValue ex_VkFC2hfrNV8lYiAOFp8tS1){
uint32_T const*x=(uint32_T const*)((void const*const*)
ex_VkFC2hfrNV8lYiAOFp8tS1)[0];int32_T*out=(int32_T*)ex_kBjdZCqdGxxriTLiPTxn4N;
init_gaussian_seed(out,x);}
