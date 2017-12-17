package com.kw.lib.p7zip;

/**
 * Created by K.W. on 2017-12-17.
 */

public class P7zipUtils {

    public static native String getVersion();
    public static native int exec(String command);

    static {
        System.loadLibrary("p7zip");
    }
}
