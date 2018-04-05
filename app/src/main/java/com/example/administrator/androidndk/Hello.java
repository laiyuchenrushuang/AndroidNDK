package com.example.administrator.androidndk;

import android.util.Log;

/**
 * Created by Administrator on 2018/4/5.
 */

class Hello {
    private static final String TAG = "JAVA_Hello";
    public static String info = null;
    public static String name = null;
    //加载so文件
    static {
        System.loadLibrary("hello");
    }

    public static void getLog(String i) {
        info = i;
        Log.e(TAG, "info= " + i);
    }

    public static void staticMethod(String i) {
        getLog(i);
    }

    public  void method(String i) {
        getLog(i);
    }

    public static native String sayHello();

    public native void sayHowOld(int age);

    public static native void sayLikeChengDu(String what, String why);

    public static native String sayComeFromShuangLiu(String where);

}
