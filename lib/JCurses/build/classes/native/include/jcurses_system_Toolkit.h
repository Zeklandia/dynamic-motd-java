/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jcurses_system_Toolkit */

#ifndef _Included_jcurses_system_Toolkit
#define _Included_jcurses_system_Toolkit
#ifdef __cplusplus
extern "C" {
#endif
#undef jcurses_system_Toolkit_CORNER_UNDER_LINE
#define jcurses_system_Toolkit_CORNER_UNDER_LINE 0L
#undef jcurses_system_Toolkit_CORNER_OVER_LINE
#define jcurses_system_Toolkit_CORNER_OVER_LINE 1L
#undef jcurses_system_Toolkit_LL_CORNER
#define jcurses_system_Toolkit_LL_CORNER 2L
#undef jcurses_system_Toolkit_LR_CORNER
#define jcurses_system_Toolkit_LR_CORNER 3L
#undef jcurses_system_Toolkit_UL_CORNER
#define jcurses_system_Toolkit_UL_CORNER 4L
#undef jcurses_system_Toolkit_UR_CORNER
#define jcurses_system_Toolkit_UR_CORNER 5L
#undef jcurses_system_Toolkit_VERTICAL
#define jcurses_system_Toolkit_VERTICAL 0L
#undef jcurses_system_Toolkit_HORIZONTAL
#define jcurses_system_Toolkit_HORIZONTAL 1L
/*
 * Class:     jcurses_system_Toolkit
 * Method:    fillAttributes
 * Signature: ([J)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_fillAttributes
  (JNIEnv *, jclass, jlongArray);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    fillBasicColors
 * Signature: ([S)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_fillBasicColors
  (JNIEnv *, jclass, jshortArray);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    initColorPair
 * Signature: (SSS)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_initColorPair
  (JNIEnv *, jclass, jshort, jshort, jshort);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    computeChtype
 * Signature: (S)I
 */
JNIEXPORT jint JNICALL Java_jcurses_system_Toolkit_computeChtype
  (JNIEnv *, jclass, jshort);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    startPainting
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_startPainting
  (JNIEnv *, jclass);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    endPainting
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_endPainting
  (JNIEnv *, jclass);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    getScreenWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jcurses_system_Toolkit_getScreenWidth
  (JNIEnv *, jclass);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    getScreenHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jcurses_system_Toolkit_getScreenHeight
  (JNIEnv *, jclass);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    hasColorsAsInteger
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jcurses_system_Toolkit_hasColorsAsInteger
  (JNIEnv *, jclass);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_init
  (JNIEnv *, jclass);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_shutdown
  (JNIEnv *, jclass);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    clearScreen
 * Signature: (SJ)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_clearScreen
  (JNIEnv *, jclass, jshort, jlong);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    drawRectangle
 * Signature: (IIIISJ)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_drawRectangle
  (JNIEnv *, jclass, jint, jint, jint, jint, jshort, jlong);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    drawHorizontalThickLine
 * Signature: (IIISJ)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_drawHorizontalThickLine
  (JNIEnv *, jclass, jint, jint, jint, jshort, jlong);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    drawVerticalThickLine
 * Signature: (IIISJ)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_drawVerticalThickLine
  (JNIEnv *, jclass, jint, jint, jint, jshort, jlong);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    drawHorizontalLine
 * Signature: (IIISJ)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_drawHorizontalLine
  (JNIEnv *, jclass, jint, jint, jint, jshort, jlong);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    drawVerticalLine
 * Signature: (IIISJ)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_drawVerticalLine
  (JNIEnv *, jclass, jint, jint, jint, jshort, jlong);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    drawCorner
 * Signature: (IIIISJS)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_drawCorner
  (JNIEnv *, jclass, jint, jint, jint, jint, jshort, jlong, jshort);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    printString
 * Signature: ([BIIIISJ)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_printString
  (JNIEnv *, jclass, jbyteArray, jint, jint, jint, jint, jshort, jlong);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    readByte
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jcurses_system_Toolkit_readByte
  (JNIEnv *, jclass);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    getSpecialKeyCode
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_jcurses_system_Toolkit_getSpecialKeyCode
  (JNIEnv *, jclass, jint);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    changeColors
 * Signature: (IIIISJ)V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_changeColors
  (JNIEnv *, jclass, jint, jint, jint, jint, jshort, jlong);

/*
 * Class:     jcurses_system_Toolkit
 * Method:    beep
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jcurses_system_Toolkit_beep
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
