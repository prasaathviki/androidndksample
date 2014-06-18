#include "com_mss_ndksample_ndksample_MainActivity.h"

/*
 * Class:     com_mss_ndksample_ndksample_MainActivity
 * Method:    getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_mss_ndksample_ndksample_MainActivity_getStringFromNative
  (JNIEnv *env, jobject obj)
  {
        return (env*)->NewStringUTF(env,"Hello from jni !");
  }


