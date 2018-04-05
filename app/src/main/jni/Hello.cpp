//
// Created by Administrator on 2018/4/5.
//

#include "com_example_administrator_androidndk_Hello.h"
#include <android/log.h>
#include <stdlib.h>
#include <stdio.h>

#define LOGD(...) ((void)__android_log_print(ANDROID_LOG_INFO, "nate", __VA_ARGS__))

JNIEXPORT jstring JNICALL Java_com_example_administrator_androidndk_Hello_sayHello
(JNIEnv *env, jclass jclass1){
    LOGD("log NDK come from c");
    return env->NewStringUTF("Hello everyone Now we use NDK");
}

JNIEXPORT void JNICALL Java_com_example_administrator_androidndk_Hello_sayHowOld
  (JNIEnv * env, jobject jobject1, jint age){
  //找到对应的类(实现方法)
  jclass cls_age = env->FindClass("com/example/administrator/androidndk/Hello");
  if (NULL == cls_age){
        return;
  }
  //找到对应的方法(实现方法)
  jmethodID mtd_howold = env->GetStaticMethodID(cls_age,"staticMethod","(Ljava/lang/String;)V");
    if (NULL == mtd_howold){
          return;
    }
  //调用java层的方法(实现方法)
  jstring data = env->NewStringUTF("28");
  env->CallStaticVoidMethod(cls_age,mtd_howold,data);
  //找到对应的field(调用feild)
  jfieldID fld_name = env->GetStaticFieldID(cls_age,"name","Ljava/lang/String;");
  jstring name = env->NewStringUTF("laiyu");
  env->SetStaticObjectField(cls_age,fld_name,name);
  //删除引用
  env->DeleteLocalRef(cls_age);
  env->DeleteLocalRef(data);
}


JNIEXPORT void JNICALL Java_com_example_administrator_androidndk_Hello_sayLikeChengDu
  (JNIEnv * env, jclass jclass1, jstring jclass2, jstring jclass3){

}


JNIEXPORT jstring JNICALL Java_com_example_administrator_androidndk_Hello_sayComeFromShuangLiu
  (JNIEnv * env, jclass jclass1, jstring jclass2){
  //找到对应的类(调用java方法)
  jclass cls_addr = env->FindClass("com/example/administrator/androidndk/Hello");
  //找到对应的方法(调用java方法)
  jmethodID mtd_method = env->GetMethodID(cls_addr,"method","(Ljava/lang/String;)V");
  //找到构造方法(调用java方法)
  jmethodID construct = env->GetMethodID(cls_addr,"<init>","()V");
  //创建对象(调用java方法)
  jobject hello = env->NewObject(cls_addr,construct,NULL);
  //具体实现
  jstring address = env->NewStringUTF("shanghai");
  env->CallVoidMethod(hello,mtd_method,address);
  return address;
  //删除引用
  env->DeleteLocalRef(cls_addr);
  env->DeleteLocalRef(hello);
  env->DeleteLocalRef(address);
}
