

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

ifeq ($(TARGET_ARCH_ABI),armeabi-v7a)
LOCAL_CFLAGS += -mfloat-abi=soft
endif
LOCAL_CFLAGS += -std=c99
LOCAL_LDLIBS += -llog -landroid

LOCAL_C_INCLUDES += $(LOCAL_PATH)

LOCAL_SRC_FILES += test.c

LOCAL_MODULE := testjni

include $(BUILD_SHARED_LIBRARY)
