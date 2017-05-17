package com.example.wtw.editordemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        System.loadLibrary("testjni");

        NativeInterface  test = new NativeInterface();
        test.setParams("aa1","aa2");
        test.getParams();

    }
}
