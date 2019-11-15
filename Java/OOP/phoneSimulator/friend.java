package com.company;

public class friend extends People{

    friend(String Name, int ID) {
        super(Name, ID);
    }

    public static void talk() {
        System.out.println("Hello, how are you ?");
    }
}
