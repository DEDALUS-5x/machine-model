/* Copyright 2021-2022 The MathWorks, Inc. */
/*
 * @file: RTWCG_FMU_util.h
 *  
 * @brief FMU path handling util function. This file is included during FMU code generation.
 *      
 */

#ifndef RTWCG_FMU_util_h
#define RTWCG_FMU_util_h


#include "RTWCG_util_functions.h"
#include <stdbool.h>

#include "FMUCG_Target.h"
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif


#if FMU_CG_TARGET == FMUCG_MCC || FMU_CG_TARGET == FMUCG_GRT || FMU_CG_TARGET == FMUCG_ERT 
#include <stdio.h>
#include <stdarg.h>
#endif

//current FMU unzip directory
#if FMU_CG_TARGET == FMUCG_PROTECTED_MODEL
#include <simstruc.h>
const char* raccelDeployLocation(void* simstruct);
int saveRapidSimulationMode(int);
const char* fmu_resourceLocation(void* simstruct);
//nested FMU dll and resources directory
char* fmu_nestedDLLLocation(void* simstruct, const char* uid, const char* model, const char* dllName, int x64Format);
char* fmu_nestedResourceLocation(void* simstruct, const char* uid, const char* model, int root, int fmuVersion);
#elif  FMU_CG_TARGET == FMUCG_ERT
const void* fmu_callback(int fmuVersion);
#elif FMU_CG_TARGET == FMUCG_MCC
#include <simstruc.h>
const void* fmu_callback(int fmuVersion);
const char* raccelDeployLocation(void* simstruct);
//rapid accel deployment dll and reosurce location
char* fmu_raccelDeploymentDLLLocation(void* simstruct, const char* deploy, const char* uid, const char* model, const char* dllName, int x64Format);
char* fmu_raccelDeploymentResourceLocation(void* simstruct, const char* deploy, const char* uid, const char* model, int root, int fmuVersion);
#elif FMU_CG_TARGET == FMUCG_GRT
const void* fmu_callback(int fmuVersion);
const char* raccelDeployLocation(void);
const char* fmu_resourceLocation(void);
//rapid grt deployment dll and reosurce location
char* fmu_grtDeploymentDLLLocation(const char* buildDir, const char* dllName, int x64Format);
char* fmu_grtDeploymentResourceLocation(const char* buildDir, int root, int fmuVersion);
#endif

#if FMU_CG_TARGET == FMUCG_NESTEDFMU
extern const char* fmu_resourceLocation(void);
char* fmu_nestedDLLLocation(const char* uid, const char* model, const char* dllName, int x64Format);
char* fmu_nestedResourceLocation(const char* uid, const char* model, int root, int fmuVersion);
extern const void* fmu_callback(int fmuVersion);
extern int fmu_fmuVisible(void);
extern int fmu_fmuLogging(void);
extern char* fmu_instanceName(void);
extern int fmu_parameterUpdated(void);
extern void fmu_clearParameterUpdated(void);
#endif

//convert uri to local path
char* uriToLocal(const char *uri);
void fmu_strncpy(char* dest, void* src, int size);
char* fmu_strndup(const char* src, int size);

extern int fmu_restoreSimScapeInitialState(void);

void compareInputWithWorkingVec(void *dstWorkingVec, const void* srcBlkInput, const unsigned int* dimList, const size_t nVal, const size_t dstWorkingVecDTSize, const size_t srcBlkInputDTSize, int needConversion, int *is_diff_value);
void updateVectorForFmu(void *dstWorkingVec, const void* srcBlkInput, const unsigned int* dimList, const size_t nVal, const size_t dstDTSize, const size_t srcDTSize, int needConversion);
void updateVectorForBlk(void *dstBlkOutput, const void* srcWorkingVector, const unsigned int* dimList, const size_t nVal, const size_t dstDTSize, const size_t srcDTSize, int needConversion);

struct loggerEnvironmentComponent {
    int isLoggingOn;
    const char* instanceName;
    void* ssPtr;
};
void* fmu_loggerEnvironment(int enableLogging, const char* fmuname, void* ssPtr);    
bool canAccessVar(const bool accessClkVars, const unsigned int* activeClocksList, const size_t numActiveClocks, const unsigned int* clkDependsList);
bool isVarActive(unsigned int* activeVarList, const size_t activeNvrs, const size_t valueReference);
#ifdef __cplusplus
}
#endif

#endif
