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
 *  AC       Angelo Ciceri
 *  MF       Mario Fortier
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  032005 AC   Creation           
 *  041305 MF   Minor modification for a compiler warning
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
/* Generated */ int Core::CdlLadderBottomLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlLadderBottomLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLLADDERBOTTOM_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return TA_CANDLEAVGPERIOD(ShadowVeryShort) + 4;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLLADDERBOTTOM - Ladder Bottom
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlLadderBottom( int    startIdx,
/* Generated */                                                 int    endIdx,
/* Generated */                                                 SubArray<double>^ inOpen,
/* Generated */                                                 SubArray<double>^ inHigh,
/* Generated */                                                 SubArray<double>^ inLow,
/* Generated */                                                 SubArray<double>^ inClose,
/* Generated */                                                 [Out]int%    outBegIdx,
/* Generated */                                                 [Out]int%    outNBElement,
/* Generated */                                                 SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlLadderBottom( int    startIdx,
/* Generated */                                                 int    endIdx,
/* Generated */                                                 cli::array<double>^ inOpen,
/* Generated */                                                 cli::array<double>^ inHigh,
/* Generated */                                                 cli::array<double>^ inLow,
/* Generated */                                                 cli::array<double>^ inClose,
/* Generated */                                                 [Out]int%    outBegIdx,
/* Generated */                                                 [Out]int%    outNBElement,
/* Generated */                                                 cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlLadderBottom( int    startIdx,
/* Generated */                                 int    endIdx,
/* Generated */                                 double       inOpen[],
/* Generated */                                 double       inHigh[],
/* Generated */                                 double       inLow[],
/* Generated */                                 double       inClose[],
/* Generated */                                 MInteger     outBegIdx,
/* Generated */                                 MInteger     outNBElement,
/* Generated */                                 int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLLADDERBOTTOM( int    startIdx,
/* Generated */                                           int    endIdx,
/* Generated */                                                      const double inOpen[],
/* Generated */                                                      const double inHigh[],
/* Generated */                                                      const double inLow[],
/* Generated */                                                      const double inClose[],
/* Generated */                                                      int          *outBegIdx,
/* Generated */                                                      int          *outNBElement,
/* Generated */                                                      int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    double ShadowVeryShortPeriodTotal;
    int i, outIdx, ShadowVeryShortTrailingIdx, lookbackTotal;

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
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDLLADDERBOTTOM)();

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   ShadowVeryShortPeriodTotal = 0;
   ShadowVeryShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowVeryShort);
   
   i = ShadowVeryShortTrailingIdx;
   while( i < startIdx ) {
        ShadowVeryShortPeriodTotal += TA_CANDLERANGE( ShadowVeryShort, i-1 );
        i++;
   }
   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - three black candlesticks with consecutively lower opens and closes
    * - fourth candle: black candle with an upper shadow (it's supposed to be not very short)
    * - fifth candle: white candle that opens above prior candle's body and closes above prior candle's high
    * The meaning of "very short" is specified with TA_SetCandleSettings
    * outInteger is positive (1 to 100): ladder bottom is always bullish; 
    * the user should consider that ladder bottom is significant when it appears in a downtrend, 
    * while this function does not consider it
    */
   outIdx = 0;
   do
   {
#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#else
        if(                                                             
            TA_CANDLECOLOR(i-4) == -1 && TA_CANDLECOLOR(i-3) == -1 && TA_CANDLECOLOR(i-2) == -1 &&  // 3 black candlesticks
            inOpen[i-4] > inOpen[i-3] && inOpen[i-3] > inOpen[i-2] &&           // with consecutively lower opens
            inClose[i-4] > inClose[i-3] && inClose[i-3] > inClose[i-2] &&       // and closes
            TA_CANDLECOLOR(i-1) == -1 &&                                        // 4th: black with an upper shadow
            TA_UPPERSHADOW(i-1) > TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal, i-1 ) &&
            TA_CANDLECOLOR(i) == 1 &&                                           // 5th: white
            inOpen[i] > inOpen[i-1] &&                                          // that opens above prior candle's body
            inClose[i] > inHigh[i-1]                                            // and closes above prior candle's high
          )
            outInteger[outIdx++] = 100;
        else
            outInteger[outIdx++] = 0;
#endif
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        ShadowVeryShortPeriodTotal += TA_CANDLERANGE( ShadowVeryShort, i-1 ) 
                                    - TA_CANDLERANGE( ShadowVeryShort, ShadowVeryShortTrailingIdx-1 );
        i++; 
        ShadowVeryShortTrailingIdx++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlLadderBottomStateInit( struct TA_CdlLadderBottom_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlLadderBottomStateInit( struct TA_cdlLadderBottom_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLLADDERBOTTOM_StateInit( struct TA_CDLLADDERBOTTOM_State** _state )
/* Generated */ 
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
/* Generated */    *_state = malloc(sizeof(struct TA_CDLLADDERBOTTOM_State));
/* Generated */    (*_state)->mem_index = 0;
/* Generated */    (*_state)->mem_size = TA_CDLLADDERBOTTOM_Lookback();
/* Generated */    if ((*_state)->mem_size > 0)
/* Generated */          (*_state)->memory = malloc(sizeof(struct TA_CDLLADDERBOTTOM_Data)*(*_state)->mem_size);
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
/* Generated */ int Core::CdlLadderBottomState( struct TA_CdlLadderBottom_State* _state,
/* Generated */                               cli::array<double>^ inOpen,
/* Generated */                               cli::array<double>^ inHigh,
/* Generated */                               cli::array<double>^ inLow,
/* Generated */                               cli::array<double>^ inClose,
/* Generated */                               cli::array<int>^  *outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlLadderBottomState( struct TA_cdlLadderBottom_State* _state,
/* Generated */                                double       inOpen,
/* Generated */                                double       inHigh,
/* Generated */                                double       inLow,
/* Generated */                                double       inClose,
/* Generated */                                int           *outInteger )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLLADDERBOTTOM_State( struct TA_CDLLADDERBOTTOM_State* _state,
/* Generated */                                                   const double inOpen,
/* Generated */                                                   const double inHigh,
/* Generated */                                                   const double inLow,
/* Generated */                                                   const double inClose,
/* Generated */                                                   int           *outInteger )
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
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
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
/* Generated */ int Core::CdlLadderBottomStateFree( struct TA_CdlLadderBottom_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlLadderBottomStateFree( struct TA_cdlLadderBottom_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLLADDERBOTTOM_StateFree( struct TA_CDLLADDERBOTTOM_State** _state )
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
/* Generated */ enum class Core::RetCode Core::CdlLadderBottom( int    startIdx,
/* Generated */                                                 int    endIdx,
/* Generated */                                                 SubArray<float>^ inOpen,
/* Generated */                                                 SubArray<float>^ inHigh,
/* Generated */                                                 SubArray<float>^ inLow,
/* Generated */                                                 SubArray<float>^ inClose,
/* Generated */                                                 [Out]int%    outBegIdx,
/* Generated */                                                 [Out]int%    outNBElement,
/* Generated */                                                 SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlLadderBottom( int    startIdx,
/* Generated */                                                 int    endIdx,
/* Generated */                                                 cli::array<float>^ inOpen,
/* Generated */                                                 cli::array<float>^ inHigh,
/* Generated */                                                 cli::array<float>^ inLow,
/* Generated */                                                 cli::array<float>^ inClose,
/* Generated */                                                 [Out]int%    outBegIdx,
/* Generated */                                                 [Out]int%    outNBElement,
/* Generated */                                                 cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlLadderBottom( int    startIdx,
/* Generated */                                 int    endIdx,
/* Generated */                                 float        inOpen[],
/* Generated */                                 float        inHigh[],
/* Generated */                                 float        inLow[],
/* Generated */                                 float        inClose[],
/* Generated */                                 MInteger     outBegIdx,
/* Generated */                                 MInteger     outNBElement,
/* Generated */                                 int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLLADDERBOTTOM( int    startIdx,
/* Generated */                                  int    endIdx,
/* Generated */                                  const float  inOpen[],
/* Generated */                                  const float  inHigh[],
/* Generated */                                  const float  inLow[],
/* Generated */                                  const float  inClose[],
/* Generated */                                  int          *outBegIdx,
/* Generated */                                  int          *outNBElement,
/* Generated */                                  int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double ShadowVeryShortPeriodTotal;
/* Generated */     int i, outIdx, ShadowVeryShortTrailingIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLLADDERBOTTOM)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    ShadowVeryShortPeriodTotal = 0;
/* Generated */    ShadowVeryShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowVeryShort);
/* Generated */    i = ShadowVeryShortTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         ShadowVeryShortPeriodTotal += TA_CANDLERANGE( ShadowVeryShort, i-1 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #else
/* Generated */         if(                                                             
/* Generated */             TA_CANDLECOLOR(i-4) == -1 && TA_CANDLECOLOR(i-3) == -1 && TA_CANDLECOLOR(i-2) == -1 &&  // 3 black candlesticks
/* Generated */             inOpen[i-4] > inOpen[i-3] && inOpen[i-3] > inOpen[i-2] &&           // with consecutively lower opens
/* Generated */             inClose[i-4] > inClose[i-3] && inClose[i-3] > inClose[i-2] &&       // and closes
/* Generated */             TA_CANDLECOLOR(i-1) == -1 &&                                        // 4th: black with an upper shadow
/* Generated */             TA_UPPERSHADOW(i-1) > TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal, i-1 ) &&
/* Generated */             TA_CANDLECOLOR(i) == 1 &&                                           // 5th: white
/* Generated */             inOpen[i] > inOpen[i-1] &&                                          // that opens above prior candle's body
/* Generated */             inClose[i] > inHigh[i-1]                                            // and closes above prior candle's high
/* Generated */           )
/* Generated */             outInteger[outIdx++] = 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */ #endif
/* Generated */         ShadowVeryShortPeriodTotal += TA_CANDLERANGE( ShadowVeryShort, i-1 ) 
/* Generated */                                     - TA_CANDLERANGE( ShadowVeryShort, ShadowVeryShortTrailingIdx-1 );
/* Generated */         i++; 
/* Generated */         ShadowVeryShortTrailingIdx++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

