#include "multibody_model_macros.h"
#include "pm_std.h"
#include "external_std.h"
extern int32_T ex_kAGatx_ZQ6OiVLnUjuqSAR(int32_T const);extern int32_T
ex_FaQw_ffuc7xT_q_mbYdzir(uint32_T);void compute_uniform_value(real_T*out,
real_T const*minimum,real_T const*maximum,int32_T const*seed){out[0]=((seed[0]
*4.6566128752457969e-10)*(maximum[0]-minimum[0])+minimum[0]);}void
compute_uniform_value_custom_function_(PMValue ex_kBjdZCqdGxxriTLiPTxn4N,
ConstPMValue in){real_T const*minimum=(real_T const*)((void const*const*)in)[0
];real_T const*maximum=(real_T const*)((void const*const*)in)[1];int32_T const
*seed=(int32_T const*)((void const*const*)in)[2];real_T*out=(real_T*)
ex_kBjdZCqdGxxriTLiPTxn4N;compute_uniform_value(out,minimum,maximum,seed);}
void update_uniform_seed(int32_T*out,int32_T const*x){out[0]=
ex_kAGatx_ZQ6OiVLnUjuqSAR(x[0]);}void update_uniform_seed_custom_function_(
PMValue ex_kBjdZCqdGxxriTLiPTxn4N,ConstPMValue ex_VkFC2hfrNV8lYiAOFp8tS1){
int32_T const*x=(int32_T const*)((void const*const*)ex_VkFC2hfrNV8lYiAOFp8tS1)
[0];int32_T*out=(int32_T*)ex_kBjdZCqdGxxriTLiPTxn4N;update_uniform_seed(out,x)
;}void init_uniform_seed(int32_T*out,uint32_T const*seed){out[0]=
ex_kAGatx_ZQ6OiVLnUjuqSAR(ex_FaQw_ffuc7xT_q_mbYdzir(seed[0]));}void
init_uniform_seed_custom_function_(PMValue ex_kBjdZCqdGxxriTLiPTxn4N,
ConstPMValue ex_VkFC2hfrNV8lYiAOFp8tS1){uint32_T const*x=(uint32_T const*)((
void const*const*)ex_VkFC2hfrNV8lYiAOFp8tS1)[0];int32_T*out=(int32_T*)
ex_kBjdZCqdGxxriTLiPTxn4N;init_uniform_seed(out,x);}
