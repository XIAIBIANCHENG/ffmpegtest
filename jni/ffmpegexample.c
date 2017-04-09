#include <jni.h>
#include<stdio.h>
#include<math.h>
#include <android/log.h>
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
#include "libavutil/log.h"
#include "libavutil/mathematics.h"
#define TAG "TEST"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,TAG,__VA_ARGS__)
void Java_com_example_ffmpeg_MainActivity_test(JNIEnv* env, jobject thiz){
	av_register_all();
	LOGD("ok");
}
