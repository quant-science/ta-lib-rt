/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MF       Mario Fortier
 *  AA       Andrew Atkinson
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  112400 MF   Template creation.
 *  052603 MF   Adapt code to compile with .NET Managed C++
 *  062804 MF   Resolve div by zero bug on limit case.
 *  020605 AA   Fix #1117666 Lookback & out-of-bound bug.
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::ApoLookback( int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                      int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                      MAType        optInMAType ) /* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int apoLookback( int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                       int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                       MAType        optInMAType ) /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_APO_Lookback( int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                          int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                          TA_MAType     optInMAType ) /* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInFastPeriod. */
/* Generated */    if( (int)optInFastPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInFastPeriod = 12;
/* Generated */    else if( ((int)optInFastPeriod < 2) || ((int)optInFastPeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    /* min/max are checked for optInSlowPeriod. */
/* Generated */    if( (int)optInSlowPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInSlowPeriod = 26;
/* Generated */    else if( ((int)optInSlowPeriod < 2) || ((int)optInSlowPeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = (TA_MAType)0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */

   /* The slow MA is the key factor determining the lookback period. */
   return LOOKBACK_CALL(MA)( max(optInSlowPeriod,optInFastPeriod), optInMAType );
}


/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_APO - Absolute Price Oscillator
 * 
 * Input  = double
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInFastPeriod:(From 2 to 100000)
 *    Number of period for the fast MA
 * 
 * optInSlowPeriod:(From 2 to 100000)
 *    Number of period for the slow MA
 * 
 * optInMAType:
 *    Type of Moving Average
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Apo( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     SubArray<double>^ inReal,
/* Generated */                                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                     MAType        optInMAType,/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Apo( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     cli::array<double>^ inReal,
/* Generated */                                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                     MAType        optInMAType,/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode apo( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     double       inReal[],
/* Generated */                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                     MAType        optInMAType,/* Generated */                     MInteger     outBegIdx,
/* Generated */                     MInteger     outNBElement,
/* Generated */                     double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_APO( int    startIdx,
/* Generated */                               int    endIdx,
/* Generated */                                          const double inReal[],
/* Generated */                                          int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                          int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                          TA_MAType     optInMAType,/* Generated */                                          int          *outBegIdx,
/* Generated */                                          int          *outNBElement,
/* Generated */                                          double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
   ARRAY_REF(tempBuffer);
   ENUM_DECLARATION(RetCode) retCode;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInFastPeriod. */
/* Generated */    if( (int)optInFastPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInFastPeriod = 12;
/* Generated */    else if( ((int)optInFastPeriod < 2) || ((int)optInFastPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInSlowPeriod. */
/* Generated */    if( (int)optInSlowPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInSlowPeriod = 26;
/* Generated */    else if( ((int)optInSlowPeriod < 2) || ((int)optInSlowPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = (TA_MAType)0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* Allocate an intermediate buffer. */
   ARRAY_ALLOC(tempBuffer, (endIdx-startIdx+1) );
   #if !defined(_JAVA)
      if( !tempBuffer )
         return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
   #endif

   retCode = FUNCTION_CALL(INT_PO)( startIdx, endIdx,                        
                                    inReal,
                                    optInFastPeriod, 
                                    optInSlowPeriod, 
                                    optInMAType,
                                    outBegIdx,
                                    outNBElement,
                                    outReal,
                                    tempBuffer,
                                    0 /* No percentage. */ );

   ARRAY_FREE( tempBuffer );

   return retCode;
}

/* Internal price oscillator function.
 *
 * A buffer must be provided for intermediate processing.
 */
#if defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined(USE_SINGLE_PRECISION_INPUT)
  // No INT fucntion
#else

#if defined( _MANAGED ) && defined( USE_SUBARRAY )
 enum class Core::RetCode Core::TA_INT_PO( int    startIdx,
                                           int    endIdx,
									       SubArray<double>^ inReal,
                                           int    optInFastPeriod, 
                                           int    optInSlowPeriod, 
										   MAType    optInMethod_2,
                                           [Out]int% outBegIdx,
                                           [Out]int% outNBElement,
										   SubArray<double>^ outReal,
                                           SubArray<double>^ tempBuffer,
                                           int  doPercentageOutput )

#elif defined( _MANAGED )
 enum class Core::RetCode Core::TA_INT_PO( int    startIdx,
                                           int    endIdx,
									       cli::array<INPUT_TYPE>^ inReal,
                                           int    optInFastPeriod, 
                                           int    optInSlowPeriod, 
										   MAType    optInMethod_2,
                                           [Out]int% outBegIdx,
                                           [Out]int% outNBElement,
										   cli::array<double>^ outReal,
                                           cli::array<double>^ tempBuffer,
                                           int  doPercentageOutput )
#elif defined( _JAVA )
RetCode TA_INT_PO( int        startIdx,
                   int        endIdx,
                   INPUT_TYPE inReal[],
                   int        optInFastPeriod, 
                   int        optInSlowPeriod, 
                   MAType  optInMethod_2,
                   MInteger   outBegIdx,
                   MInteger   outNBElement,
                   double     outReal[],
                   double     tempBuffer[],
                   int        doPercentageOutput )

#else
TA_RetCode TA_PREFIX(INT_PO)( int    startIdx,
                              int    endIdx,
                              const INPUT_TYPE *inReal,
                              int    optInFastPeriod, 
                              int    optInSlowPeriod, 
                              TA_MAType optInMethod_2,
                              int   *outBegIdx,
                              int   *outNBElement,
                              double      *outReal,
                              double      *tempBuffer,
                              int  doPercentageOutput )
#endif
{
   ENUM_DECLARATION(RetCode) retCode;

   double tempReal;
   int tempInteger;
   VALUE_HANDLE_INT(outBegIdx1);
   VALUE_HANDLE_INT(outNbElement1);
   VALUE_HANDLE_INT(outBegIdx2);
   VALUE_HANDLE_INT(outNbElement2);

   int i, j;

   /* Make sure slow is really slower than
    * the fast period! if not, swap...
    */
   if( optInSlowPeriod < optInFastPeriod )
   {
       /* swap */
       tempInteger     = optInSlowPeriod;
       optInSlowPeriod = optInFastPeriod;
       optInFastPeriod = tempInteger;
   }

   /* Calculate the fast MA into the tempBuffer. */
   retCode = FUNCTION_CALL(MA)( startIdx, endIdx,
                                inReal,
                                optInFastPeriod, 
                                optInMethod_2,                    
                                VALUE_HANDLE_OUT(outBegIdx2), VALUE_HANDLE_OUT(outNbElement2),
							    tempBuffer );

   if( retCode == ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
   {
      /* Calculate the slow MA into the output. */
      retCode = FUNCTION_CALL(MA)( startIdx, endIdx,                       
                                   inReal,
                                   optInSlowPeriod, 
                                   optInMethod_2,
                                   VALUE_HANDLE_OUT(outBegIdx1), VALUE_HANDLE_OUT(outNbElement1),
							       outReal );

      if( retCode == ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
      {
         tempInteger = VALUE_HANDLE_GET(outBegIdx1) - VALUE_HANDLE_GET(outBegIdx2);
         if( doPercentageOutput != 0 )
         {
            /* Calculate ((fast MA)-(slow MA))/(slow MA) in the output. */   
            for( i=0,j=tempInteger; i < VALUE_HANDLE_GET(outNbElement1); i++, j++ )
            {
               tempReal = outReal[i];
               if( !TA_IS_ZERO(tempReal) )
                  outReal[i] = ((tempBuffer[j]-tempReal)/tempReal)*100.0;
               else
                  outReal[i] = 0.0;
            }
         }
         else
         {
            /* Calculate (fast MA)-(slow MA) in the output. */   
            for( i=0,j=tempInteger; i < VALUE_HANDLE_GET(outNbElement1); i++, j++ )
               outReal[i] = tempBuffer[j]-outReal[i];
         }

         VALUE_HANDLE_DEREF(outBegIdx)     = VALUE_HANDLE_GET(outBegIdx1);
         VALUE_HANDLE_DEREF(outNBElement)  = VALUE_HANDLE_GET(outNbElement1);
      }
   }

   if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
   }

   return retCode;
}
#endif // Not defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined( USE_SINGLE_PRECISION_INPUT )

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::ApoStateInit( struct TA_Apo_State** _state,
/* Generated */                       int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                       int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                       MAType        optInMAType ) /* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int apoStateInit( struct TA_apo_State** _state,
/* Generated */                        int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                        int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                        MAType        optInMAType ) /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_APO_StateInit( struct TA_APO_State** _state,
/* Generated */                                           int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                           int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                           TA_MAType     optInMAType ) /* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    /* min/max are checked for optInFastPeriod. */
/* Generated */    if( (int)optInFastPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInFastPeriod = 12;
/* Generated */    else if( ((int)optInFastPeriod < 2) || ((int)optInFastPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    /* min/max are checked for optInSlowPeriod. */
/* Generated */    if( (int)optInSlowPeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInSlowPeriod = 26;
/* Generated */    else if( ((int)optInSlowPeriod < 2) || ((int)optInSlowPeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = (TA_MAType)0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    *_state = malloc(sizeof(struct TA_APO_State));
/* Generated */    (*_state)->mem_index = 0;
/* Generated */    (*_state)->optInFastPeriod = optInFastPeriod;
/* Generated */    (*_state)->optInSlowPeriod = optInSlowPeriod;
/* Generated */    (*_state)->optInMAType = optInMAType;
/* Generated */    (*_state)->mem_size = TA_APO_Lookback(optInFastPeriod, optInSlowPeriod, optInMAType );
/* Generated */    if ((*_state)->mem_size > 0)
/* Generated */          (*_state)->memory = malloc(sizeof(struct TA_APO_Data)*(*_state)->mem_size);
/* Generated */    else
/* Generated */          (*_state)->memory = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::ApoState( struct TA_Apo_State* _state,
/* Generated */                   cli::array<double>^ inReal,
/* Generated */                   cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int apoState( struct TA_apo_State* _state,
/* Generated */                    double       inReal,
/* Generated */                    double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_APO_State( struct TA_APO_State* _state,
/* Generated */                                       const double inReal,
/* Generated */                                       double        *outReal )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::ApoStateFree( struct TA_Apo_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int apoStateFree( struct TA_apo_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_APO_StateFree( struct TA_APO_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if (*_state != NULL) {
/* Generated */          if ((*_state)->memory != NULL) free((*_state)->memory);
/* Generated */          free(*_state); *_state = NULL;}
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Apo( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     SubArray<float>^ inReal,
/* Generated */                                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                     MAType        optInMAType,/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Apo( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     cli::array<float>^ inReal,
/* Generated */                                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                                     MAType        optInMAType,/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode apo( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     float        inReal[],
/* Generated */                     int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                     int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                     MAType        optInMAType,/* Generated */                     MInteger     outBegIdx,
/* Generated */                     MInteger     outNBElement,
/* Generated */                     double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_APO( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      const float  inReal[],
/* Generated */                      int           optInFastPeriod, /* From 2 to 100000 */
/* Generated */                      int           optInSlowPeriod, /* From 2 to 100000 */
/* Generated */                      TA_MAType     optInMAType,/* Generated */                      int          *outBegIdx,
/* Generated */                      int          *outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    ARRAY_REF(tempBuffer);
/* Generated */    ENUM_DECLARATION(RetCode) retCode;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInFastPeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInFastPeriod = 12;
/* Generated */     else if( ((int)optInFastPeriod < 2) || ((int)optInFastPeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( (int)optInSlowPeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInSlowPeriod = 26;
/* Generated */     else if( ((int)optInSlowPeriod < 2) || ((int)optInSlowPeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */        optInMAType = (TA_MAType)0;
/* Generated */     else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    ARRAY_ALLOC(tempBuffer, (endIdx-startIdx+1) );
/* Generated */    #if !defined(_JAVA)
/* Generated */       if( !tempBuffer )
/* Generated */          return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
/* Generated */    #endif
/* Generated */    retCode = FUNCTION_CALL(INT_PO)( startIdx, endIdx,                        
/* Generated */                                     inReal,
/* Generated */                                     optInFastPeriod, 
/* Generated */                                     optInSlowPeriod, 
/* Generated */                                     optInMAType,
/* Generated */                                     outBegIdx,
/* Generated */                                     outNBElement,
/* Generated */                                     outReal,
/* Generated */                                     tempBuffer,
/* Generated */                                     0  );
/* Generated */    ARRAY_FREE( tempBuffer );
/* Generated */    return retCode;
/* Generated */ }
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined(USE_SINGLE_PRECISION_INPUT)
/* Generated */   // No INT fucntion
/* Generated */ #else
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */  enum class Core::RetCode Core::TA_INT_PO( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */ 									       SubArray<double>^ inReal,
/* Generated */                                            int    optInFastPeriod, 
/* Generated */                                            int    optInSlowPeriod, 
/* Generated */ 										   MAType    optInMethod_2,
/* Generated */                                            [Out]int% outBegIdx,
/* Generated */                                            [Out]int% outNBElement,
/* Generated */ 										   SubArray<double>^ outReal,
/* Generated */                                            SubArray<double>^ tempBuffer,
/* Generated */                                            int  doPercentageOutput )
/* Generated */ #elif defined( _MANAGED )
/* Generated */  enum class Core::RetCode Core::TA_INT_PO( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */ 									       cli::array<INPUT_TYPE>^ inReal,
/* Generated */                                            int    optInFastPeriod, 
/* Generated */                                            int    optInSlowPeriod, 
/* Generated */ 										   MAType    optInMethod_2,
/* Generated */                                            [Out]int% outBegIdx,
/* Generated */                                            [Out]int% outNBElement,
/* Generated */ 										   cli::array<double>^ outReal,
/* Generated */                                            cli::array<double>^ tempBuffer,
/* Generated */                                            int  doPercentageOutput )
/* Generated */ #elif defined( _JAVA )
/* Generated */ RetCode TA_INT_PO( int        startIdx,
/* Generated */                    int        endIdx,
/* Generated */                    INPUT_TYPE inReal[],
/* Generated */                    int        optInFastPeriod, 
/* Generated */                    int        optInSlowPeriod, 
/* Generated */                    MAType  optInMethod_2,
/* Generated */                    MInteger   outBegIdx,
/* Generated */                    MInteger   outNBElement,
/* Generated */                    double     outReal[],
/* Generated */                    double     tempBuffer[],
/* Generated */                    int        doPercentageOutput )
/* Generated */ #else
/* Generated */ TA_RetCode TA_PREFIX(INT_PO)( int    startIdx,
/* Generated */                               int    endIdx,
/* Generated */                               const INPUT_TYPE *inReal,
/* Generated */                               int    optInFastPeriod, 
/* Generated */                               int    optInSlowPeriod, 
/* Generated */                               TA_MAType optInMethod_2,
/* Generated */                               int   *outBegIdx,
/* Generated */                               int   *outNBElement,
/* Generated */                               double      *outReal,
/* Generated */                               double      *tempBuffer,
/* Generated */                               int  doPercentageOutput )
/* Generated */ #endif
/* Generated */ {
/* Generated */    ENUM_DECLARATION(RetCode) retCode;
/* Generated */    double tempReal;
/* Generated */    int tempInteger;
/* Generated */    VALUE_HANDLE_INT(outBegIdx1);
/* Generated */    VALUE_HANDLE_INT(outNbElement1);
/* Generated */    VALUE_HANDLE_INT(outBegIdx2);
/* Generated */    VALUE_HANDLE_INT(outNbElement2);
/* Generated */    int i, j;
/* Generated */    if( optInSlowPeriod < optInFastPeriod )
/* Generated */    {
/* Generated */        tempInteger     = optInSlowPeriod;
/* Generated */        optInSlowPeriod = optInFastPeriod;
/* Generated */        optInFastPeriod = tempInteger;
/* Generated */    }
/* Generated */    retCode = FUNCTION_CALL(MA)( startIdx, endIdx,
/* Generated */                                 inReal,
/* Generated */                                 optInFastPeriod, 
/* Generated */                                 optInMethod_2,                    
/* Generated */                                 VALUE_HANDLE_OUT(outBegIdx2), VALUE_HANDLE_OUT(outNbElement2),
/* Generated */ 							    tempBuffer );
/* Generated */    if( retCode == ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
/* Generated */    {
/* Generated */       retCode = FUNCTION_CALL(MA)( startIdx, endIdx,                       
/* Generated */                                    inReal,
/* Generated */                                    optInSlowPeriod, 
/* Generated */                                    optInMethod_2,
/* Generated */                                    VALUE_HANDLE_OUT(outBegIdx1), VALUE_HANDLE_OUT(outNbElement1),
/* Generated */ 							       outReal );
/* Generated */       if( retCode == ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
/* Generated */       {
/* Generated */          tempInteger = VALUE_HANDLE_GET(outBegIdx1) - VALUE_HANDLE_GET(outBegIdx2);
/* Generated */          if( doPercentageOutput != 0 )
/* Generated */          {
/* Generated */             for( i=0,j=tempInteger; i < VALUE_HANDLE_GET(outNbElement1); i++, j++ )
/* Generated */             {
/* Generated */                tempReal = outReal[i];
/* Generated */                if( !TA_IS_ZERO(tempReal) )
/* Generated */                   outReal[i] = ((tempBuffer[j]-tempReal)/tempReal)*100.0;
/* Generated */                else
/* Generated */                   outReal[i] = 0.0;
/* Generated */             }
/* Generated */          }
/* Generated */          else
/* Generated */          {
/* Generated */             for( i=0,j=tempInteger; i < VALUE_HANDLE_GET(outNbElement1); i++, j++ )
/* Generated */                outReal[i] = tempBuffer[j]-outReal[i];
/* Generated */          }
/* Generated */          VALUE_HANDLE_DEREF(outBegIdx)     = VALUE_HANDLE_GET(outBegIdx1);
/* Generated */          VALUE_HANDLE_DEREF(outNBElement)  = VALUE_HANDLE_GET(outNbElement1);
/* Generated */       }
/* Generated */    }
/* Generated */    if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */    }
/* Generated */    return retCode;
/* Generated */ }
/* Generated */ #endif // Not defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined( USE_SINGLE_PRECISION_INPUT )
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

