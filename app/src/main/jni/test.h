//
//  ht_transcoder_jni.h
//  IJKMediaPlayer
//
//  Created by huiti123 on 2017/5/15.
//  Copyright © 2017年 bilibili. All rights reserved.
//

#ifndef ht_transcoder_jni_h
#define ht_transcoder_jni_h

#include <stdio.h>


#ifndef NELEM
#define NELEM(x) ((int) (sizeof(x) / sizeof((x)[0])))
#endif

#define FIND_JAVA_CLASS(env__, var__, classsign__) \
    do { \
        jclass clazz = (*env__)->FindClass(env__, classsign__); \
        if (!(clazz)) { \
            return -1; \
        } \
        var__ = (*env__)->NewGlobalRef(env__, clazz); \
        if (!(var__)) { \
            (*env__)->DeleteLocalRef(env__, clazz); \
            return -1; \
        } \
        (*env__)->DeleteLocalRef(env__, clazz); \
    } while(0);




#define VLOG(level, TAG, ...)    ((void)__android_log_vprint(level, TAG, __VA_ARGS__))
#define ALOG(level, TAG, ...)    ((void)__android_log_print(level, TAG, __VA_ARGS__))


#define ALOGD(...)  ALOG(2,      "testjni", __VA_ARGS__)


#endif