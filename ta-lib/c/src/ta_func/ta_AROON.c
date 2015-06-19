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
 *  AM       Adrian Michel <michel@pacbell.net>
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  120802 MF   Template creation.
 *  052603 MF   Adapt code to compile with .NET Managed C++
 *  050703 MF   Fix algorithm base on Adrian Michel bug report #748163
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
/* Generated */ int Core::AroonLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int aroonLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_AROON_Lookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
   return optInTimePeriod;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_AROON - Aroon
 * 
 * Input  = High, Low
 * Output = double, double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Aroon( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       SubArray<double>^ inHigh,
/* Generated */                                       SubArray<double>^ inLow,
/* Generated */                                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNBElement,
/* Generated */                                       SubArray<double>^  outAroonDown,
/* Generated */                                       SubArray<double>^  outAroonUp )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Aroon( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       cli::array<double>^ inHigh,
/* Generated */                                       cli::array<double>^ inLow,
/* Generated */                                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNBElement,
/* Generated */                                       cli::array<double>^  outAroonDown,
/* Generated */                                       cli::array<double>^  outAroonUp )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode aroon( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       double       inHigh[],
/* Generated */                       double       inLow[],
/* Generated */                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                       MInteger     outBegIdx,
/* Generated */                       MInteger     outNBElement,
/* Generated */                       double        outAroonDown[],
/* Generated */                       double        outAroonUp[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_AROON( int    startIdx,
/* Generated */                                 int    endIdx,
/* Generated */                                            const double inHigh[],
/* Generated */                                            const double inLow[],
/* Generated */                                            int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                            int          *outBegIdx,
/* Generated */                                            int          *outNBElement,
/* Generated */                                            double        outAroonDown[],
/* Generated */                                            double        outAroonUp[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
	/* insert local variable here */
   double lowest, highest, tmp, factor;
   int outIdx;
   int trailingIdx, lowestIdx, highestIdx, today, i;

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
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outAroonDown )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    if( !outAroonUp )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* This function is using a speed optimized algorithm
    * for the min/max logic.
    *
    * You might want to first look at how TA_MIN/TA_MAX works
    * and this function will become easier to understand.
    */

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < optInTimePeriod )
      startIdx = optInTimePeriod;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Proceed with the calculation for the requested range.
    * Note that this algorithm allows the input and
    * output to be the same buffer.
    */
   outIdx = 0;
   today       = startIdx;
   trailingIdx = startIdx-optInTimePeriod;
   lowestIdx   = -1;
   highestIdx  = -1;
   lowest      = 0.0;
   highest     = 0.0;
   factor      = (double)100.0/(double)optInTimePeriod;
   
   while( today <= endIdx )
   {
      /* Keep track of the lowestIdx */
      tmp = inLow[today];
      if( lowestIdx < trailingIdx )
      {
        lowestIdx = trailingIdx;
        lowest = inLow[lowestIdx];
        i = lowestIdx;
        while( ++i<=today )
        {
           tmp = inLow[i];
           if( tmp <= lowest )
           {
              lowestIdx = i;
              lowest = tmp;
           }
        }
      }
      else if( tmp <= lowest )
      {
        lowestIdx = today;
        lowest    = tmp;
      }

      /* Keep track of the highestIdx */
      tmp = inHigh[today];
      if( highestIdx < trailingIdx )
      {
        highestIdx = trailingIdx;
        highest = inHigh[highestIdx];
        i = highestIdx;
        while( ++i<=today )
        {
           tmp = inHigh[i];
           if( tmp >= highest )
           {
              highestIdx = i;
              highest = tmp;
           }
        }
      }
      else if( tmp >= highest )
      {
        highestIdx = today;
        highest = tmp;
      }

      /* Note: Do not forget that input and output buffer can be the same,
       *       so writing to the output is the last thing being done here.
       */
      outAroonUp[outIdx] = factor*(optInTimePeriod-(today-highestIdx));
      outAroonDown[outIdx] = factor*(optInTimePeriod-(today-lowestIdx));

      outIdx++;
      trailingIdx++;
      today++;  
   }

   /* Keep the outBegIdx relative to the
    * caller input before returning.
    */
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AroonStateInit( struct TA_Aroon_State* _state,
/* Generated */                         int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int aroonStateInit( struct TA_aroon_State* _state,
/* Generated */                          int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_AROON_StateInit( struct TA_AROON_State* _state,
/* Generated */                                             int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    if (_state != NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */

   _state = NULL;
   return 0;
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AroonState( struct TA_Aroon_State* _state,
/* Generated */                     cli::array<double>^ inHigh,
/* Generated */                     cli::array<double>^ inLow,
/* Generated */                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                     cli::array<double>^  &outAroonDown,
/* Generated */                     cli::array<double>^  &outAroonUp )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int aroonState( struct TA_aroon_State* _state,
/* Generated */                      double       inHigh,
/* Generated */                      double       inLow,
/* Generated */                      int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                      double        &outAroonDown,
/* Generated */                      double        &outAroonUp )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_AROON_State( struct TA_AROON_State* _state,
/* Generated */                                         const double inHigh,
/* Generated */                                         const double inLow,
/* Generated */                                         int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                         double        &outAroonDown,
/* Generated */                                         double        &outAroonUp )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outAroonDown )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    if( !outAroonUp )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */

   return 0;
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AroonStateFree( struct TA_Aroon_State* _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int aroonStateFree( struct TA_aroon_State* _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_AROON_StateFree( struct TA_AROON_State* _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return 0;
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
/* Generated */ enum class Core::RetCode Core::Aroon( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       SubArray<float>^ inHigh,
/* Generated */                                       SubArray<float>^ inLow,
/* Generated */                                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNBElement,
/* Generated */                                       SubArray<double>^  outAroonDown,
/* Generated */                                       SubArray<double>^  outAroonUp )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Aroon( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       cli::array<float>^ inHigh,
/* Generated */                                       cli::array<float>^ inLow,
/* Generated */                                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNBElement,
/* Generated */                                       cli::array<double>^  outAroonDown,
/* Generated */                                       cli::array<double>^  outAroonUp )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode aroon( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       float        inHigh[],
/* Generated */                       float        inLow[],
/* Generated */                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                       MInteger     outBegIdx,
/* Generated */                       MInteger     outNBElement,
/* Generated */                       double        outAroonDown[],
/* Generated */                       double        outAroonUp[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_AROON( int    startIdx,
/* Generated */                        int    endIdx,
/* Generated */                        const float  inHigh[],
/* Generated */                        const float  inLow[],
/* Generated */                        int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                        int          *outBegIdx,
/* Generated */                        int          *outNBElement,
/* Generated */                        double        outAroonDown[],
/* Generated */                        double        outAroonUp[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    double lowest, highest, tmp, factor;
/* Generated */    int outIdx;
/* Generated */    int trailingIdx, lowestIdx, highestIdx, today, i;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 14;
/* Generated */     else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outAroonDown )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( !outAroonUp )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    if( startIdx < optInTimePeriod )
/* Generated */       startIdx = optInTimePeriod;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    outIdx = 0;
/* Generated */    today       = startIdx;
/* Generated */    trailingIdx = startIdx-optInTimePeriod;
/* Generated */    lowestIdx   = -1;
/* Generated */    highestIdx  = -1;
/* Generated */    lowest      = 0.0;
/* Generated */    highest     = 0.0;
/* Generated */    factor      = (double)100.0/(double)optInTimePeriod;
/* Generated */    while( today <= endIdx )
/* Generated */    {
/* Generated */       tmp = inLow[today];
/* Generated */       if( lowestIdx < trailingIdx )
/* Generated */       {
/* Generated */         lowestIdx = trailingIdx;
/* Generated */         lowest = inLow[lowestIdx];
/* Generated */         i = lowestIdx;
/* Generated */         while( ++i<=today )
/* Generated */         {
/* Generated */            tmp = inLow[i];
/* Generated */            if( tmp <= lowest )
/* Generated */            {
/* Generated */               lowestIdx = i;
/* Generated */               lowest = tmp;
/* Generated */            }
/* Generated */         }
/* Generated */       }
/* Generated */       else if( tmp <= lowest )
/* Generated */       {
/* Generated */         lowestIdx = today;
/* Generated */         lowest    = tmp;
/* Generated */       }
/* Generated */       tmp = inHigh[today];
/* Generated */       if( highestIdx < trailingIdx )
/* Generated */       {
/* Generated */         highestIdx = trailingIdx;
/* Generated */         highest = inHigh[highestIdx];
/* Generated */         i = highestIdx;
/* Generated */         while( ++i<=today )
/* Generated */         {
/* Generated */            tmp = inHigh[i];
/* Generated */            if( tmp >= highest )
/* Generated */            {
/* Generated */               highestIdx = i;
/* Generated */               highest = tmp;
/* Generated */            }
/* Generated */         }
/* Generated */       }
/* Generated */       else if( tmp >= highest )
/* Generated */       {
/* Generated */         highestIdx = today;
/* Generated */         highest = tmp;
/* Generated */       }
/* Generated */       outAroonUp[outIdx] = factor*(optInTimePeriod-(today-highestIdx));
/* Generated */       outAroonDown[outIdx] = factor*(optInTimePeriod-(today-lowestIdx));
/* Generated */       outIdx++;
/* Generated */       trailingIdx++;
/* Generated */       today++;  
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

