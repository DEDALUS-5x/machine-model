#include "multibody_model_macros.h"
#include "pm_std.h"
#include "pm_std.h"
size_t ssc_sli__CDD19AM_IhpaXs2KLpsZc(PmSparsityPattern const*
mc__srK5LmyWw42ZyPnbOWDWJ,PmRealVector const*x,size_t
ssc_core_FKySES0vPzxeVPkVt80QKX);
#include "limits.h"
#include "pm_std.h"
#include "mc_std.h"
#include "mc_std_fwd.h"
McLinearAlgebraFactory const*ssc_sli_FYvvIFpO88hngmSH96cJGx(size_t
ssc_sli__jwySfHyx1SXgXJeVWoIzb);size_t ssc_sli__CDD19AM_IhpaXs2KLpsZc(
PmSparsityPattern const*mc__srK5LmyWw42ZyPnbOWDWJ,PmRealVector const*x,size_t
ssc_core_FKySES0vPzxeVPkVt80QKX){McLinearAlgebraFactory const*
mc_FX_ivTD1E1K3Z16XUq1VHF=ssc_sli_FYvvIFpO88hngmSH96cJGx(
mc__srK5LmyWw42ZyPnbOWDWJ->mNumCol);McLinearAlgebra*la=NULL;int32_T
ssc_sli_k4M7bSEmThKJbirXUDQgS6=mc_FX_ivTD1E1K3Z16XUq1VHF->mCreateLinearAlgebra
(mc_FX_ivTD1E1K3Z16XUq1VHF,&la,mc__srK5LmyWw42ZyPnbOWDWJ);size_t
mc_V2mBNcV1EqCifyH9UdCbkF=0;(void)0;ssc_sli_k4M7bSEmThKJbirXUDQgS6=la->mFactor
(la,x->mX);if(ssc_sli_k4M7bSEmThKJbirXUDQgS6==MC_LA_OK){size_t const
ssc_sli_VNQzpLALKA_zfLFvcb_LsX=(size_t)-1;if(ssc_core_FKySES0vPzxeVPkVt80QKX>
sizeof(size_t)*CHAR_BIT){mc_V2mBNcV1EqCifyH9UdCbkF=
ssc_sli_VNQzpLALKA_zfLFvcb_LsX;}else{size_t ssc_sli_kAl5DlN6chhWVi27H8xSg4=(
size_t)1<<(ssc_core_FKySES0vPzxeVPkVt80QKX);size_t
ssc_sli_V1by6O3tkudiiujUtDbUaK=la->mMemusage(la);size_t
ssc_sli_kh3esLctKtOzXH7Y0LDG8B=ssc_sli_kAl5DlN6chhWVi27H8xSg4*
ssc_sli_V1by6O3tkudiiujUtDbUaK;(void)0;if(ssc_sli_kh3esLctKtOzXH7Y0LDG8B/
ssc_sli_V1by6O3tkudiiujUtDbUaK!=ssc_sli_kAl5DlN6chhWVi27H8xSg4){
mc_V2mBNcV1EqCifyH9UdCbkF=ssc_sli_VNQzpLALKA_zfLFvcb_LsX;}else{
mc_V2mBNcV1EqCifyH9UdCbkF=ssc_sli_kh3esLctKtOzXH7Y0LDG8B;}}}else{
mc_V2mBNcV1EqCifyH9UdCbkF=0;}la->mDestructor(la);return
mc_V2mBNcV1EqCifyH9UdCbkF;}
