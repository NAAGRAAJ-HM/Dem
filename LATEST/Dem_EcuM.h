#pragma once
/*****************************************************/
/* File   : Dem_EcuM.h                               */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_Dem.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class infDem_EcuM{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      virtual FUNC(void, DEM_CODE) PreInit(void) = 0;
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern infEcuMClient* gptrinfEcuMClient_Dem;
extern infDem_EcuM*   gptrinfDem_EcuM;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

