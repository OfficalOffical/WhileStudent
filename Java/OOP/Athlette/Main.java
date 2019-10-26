package com.company;

public class Main {

    public static void main(String[] args) {
    Athlette athlette1 = new Athlette();
    Basketball basketballer1 = new Basketball();
    Football footballer1 = new Football();

    athlette1.train();
    athlette1.showStats();
    footballer1.train();
    footballer1.showStats();
    basketballer1.train();
    basketballer1.showStats();




    }
}
