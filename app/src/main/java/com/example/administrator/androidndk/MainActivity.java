package com.example.administrator.androidndk;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

private TextView tv;
private TextView tv1;
private TextView tv12;
private TextView tv2;
private Hello mHello = new Hello();


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        //第一行“Hello everyone Now we use NDK”
        tv= (TextView) findViewById(R.id.ndk_test);
        tv.setText(Hello.sayHello());

        tv1= (TextView) findViewById(R.id.test1);
        tv12 = (TextView) findViewById(R.id.test1_2);
        tv2= (TextView) findViewById(R.id.test2);
        //第二行28 laiyu
        mHello.sayHowOld(1);
        tv1.setText(Hello.info);
        tv12.setText(Hello.name);

        //第三行“address”
        mHello.sayComeFromShuangLiu("1");
        tv2.setText(Hello.info);


    }
}
