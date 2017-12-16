/*
 * com_hu_p7zip_ZipUtils.cpp
 *
 * interface of jni
 *
 *  Created on: 2014-8-12
 *      Author: HZY
 */


#include "JniWrapper.h"


#ifdef __cplusplus
extern "C" {
#endif

#define NDK_FUNC(f) Java_com_kw_lib_p7zip_P7zipUtils_##f

/*
 * Class:     com_hu_p7zip_ZipUtils
 * Method:    executeCommand
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL NDK_FUNC(exec)
(JNIEnv *env, jclass thiz, jstring command)
{
	const char* ccommand = (const char*)env->GetStringUTFChars(command, NULL);
	//LOGI("start[%s]", ccommand);
	jint ret = executeCommand((const char*)ccommand);
	//LOGI("end[%s]", ccommand);
	env->ReleaseStringUTFChars(command, ccommand);
	return ret;
}

JNIEXPORT jstring JNICALL NDK_FUNC(getVersion)
(JNIEnv *env, jclass type) {
    return env->NewStringUTF(getVersion());
}


#ifdef __cplusplus
}
#endif
