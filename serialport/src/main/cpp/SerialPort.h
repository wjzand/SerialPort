#include <jni.h>
/* Header for class com_startdt_android_serialport_SerialPort */

#ifndef COM_STARTDT_ANDROID_SERIALPORT_SERIALPORT_H_
#define COM_STARTDT_ANDROID_SERIALPORT_SERIALPORT_H_
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_startdt_android_serialport_SerialPort
 * Method:    open
 * Signature: (Ljava/lang/String;II)Ljava/io/FileDescriptor;
 */
JNIEXPORT jobject JNICALL
Java_com_startdt_android_serialport_SerialPort_open(JNIEnv *env, jclass type, jstring path,
                                                    jint baudrate, jint flags);

/*
 * Class:     com_startdt_android_serialport_SerialPort
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_com_startdt_android_serialport_SerialPort_close(JNIEnv *env, jobject thiz);

#ifdef __cplusplus
}
#endif
#endif
