#ifndef __external_std_h__
#define __external_std_h__
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef void*PMValue;typedef void const*ConstPMValue;void erf_impl(real_T*ret,
real_T const*x,size_t const*numels);void erf_impl_custom_function_(void*out,
void const*in);void erfc_impl(real_T*ret,real_T const*x,size_t const*numels);
void erfc_impl_custom_function_(void*out,void const*in);void
tlu2_1d_akima_nearest_process(real_T*x,real_T*fx,real_T const*xs,real_T const*
fs,size_t const*n);void tlu2_1d_akima_nearest_process_custom_function_(void*in
,void const*out);void tlu2_1d_akima_nearest_value(real_T*fi,real_T const*basis
,size_t const*bin,real_T const*fx,size_t const*n,real_T const*work1,size_t
const*work2,size_t const*numels);void
tlu2_1d_akima_nearest_value_custom_function_(void*in,void const*out);void
tlu2_1d_akima_linear_process(real_T*x,real_T*fx,real_T const*xs,real_T const*
fs,size_t const*n);void tlu2_1d_akima_linear_process_custom_function_(void*out
,void const*in);void tlu2_1d_akima_linear_value(real_T*fi,real_T const*basis,
size_t const*bin,real_T const*fx,size_t const*n,real_T const*work1,size_t const
*work2,size_t const*numels);void tlu2_1d_akima_linear_value_custom_function_(
void*out,void const*in);void tlu2_1d_linear_nearest_process(real_T*x,real_T*f,
real_T const*xs,real_T const*fs,size_t const*n);void
tlu2_1d_linear_nearest_process_custom_function_(void*in,void const*out);void
tlu2_1d_linear_linear_process(real_T*x,real_T*f,real_T const*xs,real_T const*
fs,size_t const*n);void tlu2_1d_linear_linear_process_custom_function_(void*
out,void const*in);void tlu2_1d_linear_nearest_parametric_derivative(real_T*fi
,real_T const*H,size_t const*bin,real_T*f,size_t const*n,size_t const*numels);
void tlu2_1d_linear_nearest_value(real_T*fi,real_T const*H,size_t const*bin,
real_T const*f,size_t const*n,size_t const*numels);void
tlu2_1d_linear_nearest_value_custom_function_(void*in,void const*out);void
tlu2_1d_linear_linear_parametric_derivative(real_T*fi,real_T const*H,size_t
const*bin,real_T*f,size_t const*n,size_t const*numels);void
tlu2_1d_linear_linear_value(real_T*fi,real_T const*H,size_t const*bin,real_T
const*f,size_t const*n,size_t const*numels);void
tlu2_1d_linear_linear_value_custom_function_(void*out,void const*in);void
tlu2_2d_akima_nearest_process(real_T*x1,real_T*x2,real_T*fx1,real_T const*x1s,
real_T const*x2s,real_T const*fs,size_t const*n1,size_t const*n2);void
tlu2_2d_akima_nearest_process_custom_function_(void*in,void const*out);void
tlu2_2d_akima_linear_process(real_T*x1,real_T*x2,real_T*fx1,real_T const*x1s,
real_T const*x2s,real_T const*fs,size_t const*n1,size_t const*n2);void
tlu2_2d_akima_linear_process_custom_function_(void*in,void const*out);void
tlu2_2d_akima_nearest_value(real_T*fi,real_T const*basis1,size_t const*bin1,
real_T const*basis2,size_t const*bin2,real_T const*fx,size_t const*n1,size_t
const*n2,real_T const*work1,size_t const*work2,size_t const*numels);void
tlu2_2d_akima_nearest_value_custom_function_(void*in,void const*out);void
tlu2_2d_akima_linear_value(real_T*fi,real_T const*basis1,size_t const*bin1,
real_T const*basis2,size_t const*bin2,real_T const*fx,size_t const*n1,size_t
const*n2,real_T const*work1,size_t const*work2,size_t const*numels);void
tlu2_2d_akima_linear_value_custom_function_(void*in,void const*out);void
tlu2_2d_linear_nearest_process(real_T*x1,real_T*x2,real_T*f,real_T const*x1s,
real_T const*x2s,real_T const*fs,size_t const*n1,size_t const*n2);void
tlu2_2d_linear_nearest_process_custom_function_(void*in,void const*out);void
tlu2_2d_linear_linear_process(real_T*x1,real_T*x2,real_T*f,real_T const*x1s,
real_T const*x2s,real_T const*fs,size_t const*n1,size_t const*n2);void
tlu2_2d_linear_linear_process_custom_function_(void*in,void const*out);void
tlu2_2d_linear_nearest_parametric_derivative(real_T*fi,real_T const*H1,size_t
const*bin1,real_T const*H2,size_t const*bin2,real_T*f,size_t const*n1,size_t
const*n2,size_t const*numels);void tlu2_2d_linear_nearest_value(real_T*fi,
real_T const*H1,size_t const*bin1,real_T const*H2,size_t const*bin2,real_T
const*f,size_t const*n1,size_t const*n2,size_t const*numels);void
tlu2_2d_linear_nearest_value_custom_function_(void*in,void const*out);void
tlu2_2d_linear_linear_parametric_derivative(real_T*fi,real_T const*H1,size_t
const*bin1,real_T const*H2,size_t const*bin2,real_T*f,size_t const*n1,size_t
const*n2,size_t const*numels);void tlu2_2d_linear_linear_value(real_T*fi,
real_T const*H1,size_t const*bin1,real_T const*H2,size_t const*bin2,real_T
const*f,size_t const*n1,size_t const*n2,size_t const*numels);void
tlu2_2d_linear_linear_value_custom_function_(void*in,void const*out);void
tlu2_3d_akima_nearest_process(real_T*x1,real_T*x2,real_T*x3,real_T*fx1,real_T
const*x1s,real_T const*x2s,real_T const*x3s,real_T const*fs,size_t const*n1,
size_t const*n2,size_t const*n3);void
tlu2_3d_akima_nearest_process_custom_function_(void*in,void const*out);void
tlu2_3d_akima_linear_process(real_T*x1,real_T*x2,real_T*x3,real_T*fx1,real_T
const*x1s,real_T const*x2s,real_T const*x3s,real_T const*fs,size_t const*n1,
size_t const*n2,size_t const*n3);void
tlu2_3d_akima_linear_process_custom_function_(void*in,void const*out);void
tlu2_3d_akima_nearest_value(real_T*fi,real_T const*basis1,size_t const*bin1,
real_T const*basis2,size_t const*bin2,real_T const*basis3,size_t const*bin3,
real_T const*fx,size_t const*n1,size_t const*n2,size_t const*n3,real_T const*
work1,size_t const*work2,size_t const*numels);void
tlu2_3d_akima_nearest_value_custom_function_(void*in,void const*out);void
tlu2_3d_akima_linear_value(real_T*fi,real_T const*basis1,size_t const*bin1,
real_T const*basis2,size_t const*bin2,real_T const*basis3,size_t const*bin3,
real_T const*fx,size_t const*n1,size_t const*n2,size_t const*n3,real_T const*
work1,size_t const*work2,size_t const*numels);void
tlu2_3d_akima_linear_value_custom_function_(void*in,void const*out);void
tlu2_3d_linear_nearest_process(real_T*x1,real_T*x2,real_T*x3,real_T*f,real_T
const*x1s,real_T const*x2s,real_T const*x3s,real_T const*fs,size_t const*n1,
size_t const*n2,size_t const*n3);void
tlu2_3d_linear_nearest_process_custom_function_(void*in,void const*out);void
tlu2_3d_linear_linear_process(real_T*x1,real_T*x2,real_T*x3,real_T*f,real_T
const*x1s,real_T const*x2s,real_T const*x3s,real_T const*fs,size_t const*n1,
size_t const*n2,size_t const*n3);void
tlu2_3d_linear_linear_process_custom_function_(void*in,void const*out);void
tlu2_3d_linear_nearest_parametric_derivative(real_T*fi,real_T const*H1,size_t
const*bin1,real_T const*H2,size_t const*bin2,real_T const*H3,size_t const*bin3
,real_T*f,size_t const*n1,size_t const*n2,size_t const*n3,size_t const*numels)
;void tlu2_3d_linear_nearest_value(real_T*fi,real_T const*H1,size_t const*bin1
,real_T const*H2,size_t const*bin2,real_T const*H3,size_t const*bin3,real_T
const*f,size_t const*n1,size_t const*n2,size_t const*n3,size_t const*numels);
void tlu2_3d_linear_nearest_value_custom_function_(void*in,void const*out);
void tlu2_3d_linear_linear_parametric_derivative(real_T*fi,real_T const*H1,
size_t const*bin1,real_T const*H2,size_t const*bin2,real_T const*H3,size_t
const*bin3,real_T*f,size_t const*n1,size_t const*n2,size_t const*n3,size_t
const*numels);void tlu2_3d_linear_linear_value(real_T*fi,real_T const*H1,
size_t const*bin1,real_T const*H2,size_t const*bin2,real_T const*H3,size_t
const*bin3,real_T const*f,size_t const*n1,size_t const*n2,size_t const*n3,
size_t const*numels);void tlu2_3d_linear_linear_value_custom_function_(void*in
,void const*out);void tlu2_4d_akima_nearest_process(real_T*x1,real_T*x2,real_T
*x3,real_T*x4,real_T*fx1,real_T const*x1s,real_T const*x2s,real_T const*x3s,
real_T const*x4s,real_T const*fs,size_t const*n1,size_t const*n2,size_t const*
n3,size_t const*n4);void tlu2_4d_akima_nearest_process_custom_function_(void*
in,void const*out);void tlu2_4d_akima_linear_process(real_T*x1,real_T*x2,
real_T*x3,real_T*x4,real_T*fx1,real_T const*x1s,real_T const*x2s,real_T const*
x3s,real_T const*x4s,real_T const*fs,size_t const*n1,size_t const*n2,size_t
const*n3,size_t const*n4);void tlu2_4d_akima_linear_process_custom_function_(
void*in,void const*out);void tlu2_4d_akima_nearest_value(real_T*fi,real_T const
*basis1,size_t const*bin1,real_T const*basis2,size_t const*bin2,real_T const*
basis3,size_t const*bin3,real_T const*basis4,size_t const*bin4,real_T const*fx
,size_t const*n1,size_t const*n2,size_t const*n3,size_t const*n4,real_T const*
work1,size_t const*work2,size_t const*numels);void
tlu2_4d_akima_nearest_value_custom_function_(void*in,void const*out);void
tlu2_4d_akima_linear_value(real_T*fi,real_T const*basis1,size_t const*bin1,
real_T const*basis2,size_t const*bin2,real_T const*basis3,size_t const*bin3,
real_T const*basis4,size_t const*bin4,real_T const*fx,size_t const*n1,size_t
const*n2,size_t const*n3,size_t const*n4,real_T const*work1,size_t const*work2
,size_t const*numels);void tlu2_4d_akima_linear_value_custom_function_(void*in
,void const*out);void tlu2_4d_linear_nearest_process(real_T*x1,real_T*x2,
real_T*x3,real_T*x4,real_T*f,real_T const*x1s,real_T const*x2s,real_T const*
x3s,real_T const*x4s,real_T const*fs,size_t const*n1,size_t const*n2,size_t
const*n3,size_t const*n4);void tlu2_4d_linear_nearest_process_custom_function_
(void*in,void const*out);void tlu2_4d_linear_linear_process(real_T*x1,real_T*
x2,real_T*x3,real_T*x4,real_T*f,real_T const*x1s,real_T const*x2s,real_T const
*x3s,real_T const*x4s,real_T const*fs,size_t const*n1,size_t const*n2,size_t
const*n3,size_t const*n4);void tlu2_4d_linear_linear_process_custom_function_(
void*in,void const*out);void tlu2_4d_linear_nearest_parametric_derivative(
real_T*fi,real_T const*H1,size_t const*bin1,real_T const*H2,size_t const*bin2,
real_T const*H3,size_t const*bin3,real_T const*H4,size_t const*bin4,real_T*f,
size_t const*n1,size_t const*n2,size_t const*n3,size_t const*n4,size_t const*
numels);void tlu2_4d_linear_nearest_value(real_T*fi,real_T const*H1,size_t
const*bin1,real_T const*H2,size_t const*bin2,real_T const*H3,size_t const*bin3
,real_T const*H4,size_t const*bin4,real_T const*f,size_t const*n1,size_t const
*n2,size_t const*n3,size_t const*n4,size_t const*numels);void
tlu2_4d_linear_nearest_value_custom_function_(void*in,void const*out);void
tlu2_4d_linear_linear_parametric_derivative(real_T*fi,real_T const*H1,size_t
const*bin1,real_T const*H2,size_t const*bin2,real_T const*H3,size_t const*bin3
,real_T const*H4,size_t const*bin4,real_T*f,size_t const*n1,size_t const*n2,
size_t const*n3,size_t const*n4,size_t const*numels);void
tlu2_4d_linear_linear_value(real_T*fi,real_T const*H1,size_t const*bin1,real_T
const*H2,size_t const*bin2,real_T const*H3,size_t const*bin3,real_T const*H4,
size_t const*bin4,real_T const*f,size_t const*n1,size_t const*n2,size_t const*
n3,size_t const*n4,size_t const*numels);void
tlu2_4d_linear_linear_value_custom_function_(void*in,void const*out);void
tlu2_linear_linear_prelookup(real_T*H,real_T*G,size_t*bin,real_T const*x,
real_T const*t,size_t const*n,size_t const*numels);void
tlu2_linear_linear_prelookup_custom_function_(void*out,void const*in);void
tlu2_linear_nearest_prelookup(real_T*H,real_T*G,size_t*bin,real_T const*x,
real_T const*t,size_t const*n,size_t const*numels);void
tlu2_linear_nearest_prelookup_custom_function_(void*out,void const*in);void
tlu2_akima_linear_prelookup(real_T*basis,size_t*bin,size_t const*
derivativeOrder,real_T const*x,real_T const*t,size_t const*n,size_t const*
numels);void tlu2_akima_linear_prelookup_custom_function_(void*out,void const*
in);void tlu2_akima_nearest_prelookup(real_T*basis,size_t*bin,size_t const*
derivativeOrder,real_T const*x,real_T const*t,size_t const*n,size_t const*
numels);void tlu2_akima_nearest_prelookup_custom_function_(void*out,void const
*in);void compute_gaussian_value(real_T*v,real_T const*mean,real_T const*
sqrtvar,int32_T const*seed);void compute_gaussian_value_custom_function_(
PMValue y,ConstPMValue u);void update_gaussian_seed(int32_T*out,int32_T const*
x);void update_gaussian_seed_custom_function_(PMValue y,ConstPMValue u);void
init_gaussian_seed(int32_T*out,uint32_T const*x);void
init_gaussian_seed_custom_function_(PMValue y,ConstPMValue u);void
compute_uniform_value(real_T*out,real_T const*minimum,real_T const*maximum,
int32_T const*seed);void compute_uniform_value_custom_function_(PMValue y,
ConstPMValue u);void update_uniform_seed(int32_T*out,int32_T const*x);void
update_uniform_seed_custom_function_(PMValue y,ConstPMValue u);void
init_uniform_seed(int32_T*out,uint32_T const*seed);void
init_uniform_seed_custom_function_(PMValue y,ConstPMValue u);void
slu2_2d_linear_nearest_process(real_T*inputPts,int*delaunayTri,size_t*
numSimplices,int*convHull,int*pointsOnConvHull,size_t*numPtsOnConvHull,real_T
const*x1s,real_T const*x2s,real_T const*fs,size_t const*numPts);void
slu2_2d_linear_nearest_process_custom_function_(void*out,void const*in);void
slu2_2d_linear_linear_process(real_T*inputPts,int*delaunayTri,size_t*
numSimplices,int*convHull,int*pointsOnConvHull,size_t*numPtsOnConvHull,real_T
const*x1s,real_T const*x2s,real_T const*fs,size_t const*numPts);void
slu2_2d_linear_linear_process_custom_function_(void*out,void const*in);void
slu2_2d_linear_nearest_value(real_T*fi,real_T const*inputPts,real_T const*
values,real_T const*x1query,real_T const*x2query,int const*delaunayTri,int
const*vertexIDsOnConvHull,size_t const*numSimplices,size_t const*
numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T const*work1,
int const*work2);void slu2_2d_linear_nearest_value_custom_function_(void*out,
void const*in);void slu2_2d_linear_linear_value(real_T*fi,real_T const*
inputPts,real_T const*values,real_T const*x1query,real_T const*x2query,int
const*delaunayTri,int const*vertexIDsOnConvHull,size_t const*numSimplices,
size_t const*numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T
const*work1,int const*work2);void slu2_2d_linear_linear_value_custom_function_
(void*out,void const*in);void slu2_2d_linear_nearest_derivatives(real_T*gi,
real_T const*inputPts,real_T const*values,real_T const*x1query,real_T const*
x2query,int const*delaunayTri,int const*vertexIDsOnConvHull,size_t const*
numSimplices,size_t const*numPtsOnConvHull,size_t const*numPts,size_t const*
numels,real_T const*work1,int const*work2);void
slu2_2d_linear_nearest_derivatives_custom_function_(void*out,void const*in);
void slu2_2d_linear_linear_derivatives(real_T*gi,real_T const*inputPts,real_T
const*values,real_T const*x1query,real_T const*x2query,int const*delaunayTri,
int const*vertexIDsOnConvHull,size_t const*numSimplices,size_t const*
numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T const*work1,
int const*work2);void slu2_2d_linear_linear_derivatives_custom_function_(void*
out,void const*in);void slu2_2d_nearest_nearest_process(real_T*inputPts,int*
delaunayTri,size_t*numSimplices,int*convHull,int*pointsOnConvHull,size_t*
numPtsOnConvHull,real_T const*x1s,real_T const*x2s,real_T const*fs,size_t const
*numPts);void slu2_2d_nearest_nearest_process_custom_function_(void*out,void
const*in);void slu2_2d_nearest_linear_process(real_T*inputPts,int*delaunayTri,
size_t*numSimplices,int*convHull,int*pointsOnConvHull,size_t*numPtsOnConvHull,
real_T const*x1s,real_T const*x2s,real_T const*fs,size_t const*numPts);void
slu2_2d_nearest_linear_process_custom_function_(void*out,void const*in);void
slu2_2d_nearest_nearest_value(real_T*fi,real_T const*inputPts,real_T const*
values,real_T const*x1query,real_T const*x2query,int const*delaunayTri,int
const*vertexIDsOnConvHull,size_t const*numSimplices,size_t const*
numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T const*work1,
int const*work2);void slu2_2d_nearest_nearest_value_custom_function_(void*out,
void const*in);void slu2_2d_nearest_linear_value(real_T*fi,real_T const*
inputPts,real_T const*values,real_T const*x1query,real_T const*x2query,int
const*delaunayTri,int const*vertexIDsOnConvHull,size_t const*numSimplices,
size_t const*numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T
const*work1,int const*work2);void slu2_2d_nearest_linear_value_custom_function_
(void*out,void const*in);void slu2_2d_nearest_nearest_derivatives(real_T*gi,
real_T const*inputPts,real_T const*values,real_T const*x1query,real_T const*
x2query,int const*delaunayTri,int const*vertexIDsOnConvHull,size_t const*
numSimplices,size_t const*numPtsOnConvHull,size_t const*numPts,size_t const*
numels,real_T const*work1,int const*work2);void
slu2_2d_nearest_nearest_derivatives_custom_function_(void*out,void const*in);
void slu2_2d_nearest_linear_derivatives(real_T*gi,real_T const*inputPts,real_T
const*values,real_T const*x1query,real_T const*x2query,int const*delaunayTri,
int const*vertexIDsOnConvHull,size_t const*numSimplices,size_t const*
numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T const*work1,
int const*work2);void slu2_2d_nearest_linear_derivatives_custom_function_(void
*out,void const*in);void slu2_3d_linear_nearest_process(real_T*inputPts,int*
delaunayTri,size_t*numSimplices,int*convHull,int*pointsOnConvHull,size_t*
numPtsOnConvHull,real_T const*x1s,real_T const*x2s,real_T const*x3s,real_T
const*fs,size_t const*numPts);void
slu2_3d_linear_nearest_process_custom_function_(void*out,void const*in);void
slu2_3d_linear_linear_process(real_T*inputPts,int*delaunayTri,size_t*
numSimplices,int*convHull,int*pointsOnConvHull,size_t*numPtsOnConvHull,real_T
const*x1s,real_T const*x2s,real_T const*x3s,real_T const*fs,size_t const*
numPts);void slu2_3d_linear_linear_process_custom_function_(void*out,void const
*in);void slu2_3d_linear_nearest_value(real_T*fi,real_T const*inputPts,real_T
const*values,real_T const*x1query,real_T const*x2query,real_T const*x3query,
int const*delaunayTri,int const*vertexIDsOnConvHull,size_t const*numSimplices,
size_t const*numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T
const*work1,int const*work2);void slu2_3d_linear_nearest_value_custom_function_
(void*out,void const*in);void slu2_3d_linear_linear_value(real_T*fi,real_T
const*inputPts,real_T const*values,real_T const*x1query,real_T const*x2query,
real_T const*x3query,int const*delaunayTri,int const*vertexIDsOnConvHull,
size_t const*numSimplices,size_t const*numPtsOnConvHull,size_t const*numPts,
size_t const*numels,real_T const*work1,int const*work2);void
slu2_3d_linear_linear_value_custom_function_(void*out,void const*in);void
slu2_3d_linear_nearest_derivatives(real_T*gi,real_T const*inputPts,real_T const
*values,real_T const*x1query,real_T const*x2query,real_T const*x3query,int
const*delaunayTri,int const*vertexIDsOnConvHull,size_t const*numSimplices,
size_t const*numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T
const*work1,int const*work2);void
slu2_3d_linear_nearest_derivatives_custom_function_(void*out,void const*in);
void slu2_3d_linear_linear_derivatives(real_T*gi,real_T const*inputPts,real_T
const*values,real_T const*x1query,real_T const*x2query,real_T const*x3query,
int const*delaunayTri,int const*vertexIDsOnConvHull,size_t const*numSimplices,
size_t const*numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T
const*work1,int const*work2);void
slu2_3d_linear_linear_derivatives_custom_function_(void*out,void const*in);
void slu2_3d_nearest_nearest_process(real_T*inputPts,int*delaunayTri,size_t*
numSimplices,int*convHull,int*pointsOnConvHull,size_t*numPtsOnConvHull,real_T
const*x1s,real_T const*x2s,real_T const*x3s,real_T const*fs,size_t const*
numPts);void slu2_3d_nearest_nearest_process_custom_function_(void*out,void
const*in);void slu2_3d_nearest_linear_process(real_T*inputPts,int*delaunayTri,
size_t*numSimplices,int*convHull,int*pointsOnConvHull,size_t*numPtsOnConvHull,
real_T const*x1s,real_T const*x2s,real_T const*x3s,real_T const*fs,size_t const
*numPts);void slu2_3d_nearest_linear_process_custom_function_(void*out,void
const*in);void slu2_3d_nearest_nearest_value(real_T*fi,real_T const*inputPts,
real_T const*values,real_T const*x1query,real_T const*x2query,real_T const*
x3query,int const*delaunayTri,int const*vertexIDsOnConvHull,size_t const*
numSimplices,size_t const*numPtsOnConvHull,size_t const*numPts,size_t const*
numels,real_T const*work1,int const*work2);void
slu2_3d_nearest_nearest_value_custom_function_(void*out,void const*in);void
slu2_3d_nearest_linear_value(real_T*fi,real_T const*inputPts,real_T const*
values,real_T const*x1query,real_T const*x2query,real_T const*x3query,int const
*delaunayTri,int const*vertexIDsOnConvHull,size_t const*numSimplices,size_t
const*numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T const*
work1,int const*work2);void slu2_3d_nearest_linear_value_custom_function_(void
*out,void const*in);void slu2_3d_nearest_nearest_derivatives(real_T*gi,real_T
const*inputPts,real_T const*values,real_T const*x1query,real_T const*x2query,
real_T const*x3query,int const*delaunayTri,int const*vertexIDsOnConvHull,
size_t const*numSimplices,size_t const*numPtsOnConvHull,size_t const*numPts,
size_t const*numels,real_T const*work1,int const*work2);void
slu2_3d_nearest_nearest_derivatives_custom_function_(void*out,void const*in);
void slu2_3d_nearest_linear_derivatives(real_T*gi,real_T const*inputPts,real_T
const*values,real_T const*x1query,real_T const*x2query,real_T const*x3query,
int const*delaunayTri,int const*vertexIDsOnConvHull,size_t const*numSimplices,
size_t const*numPtsOnConvHull,size_t const*numPts,size_t const*numels,real_T
const*work1,int const*work2);void
slu2_3d_nearest_linear_derivatives_custom_function_(void*out,void const*in);
void tlu_simrf_F(real_T*out,real_T const*freqs,real_T const*ys,real_T const*
freq,size_t const*dims);void tlu_simrf_F_custom_function_(PMValue y,
ConstPMValue u);void tlu_simrf_DF(real_T*out,real_T const*freqs,real_T const*
ys,real_T const*freq,size_t const*dims);void tlu_simrf_DF_custom_function_(
PMValue y,ConstPMValue u);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __external_std_h__ */
