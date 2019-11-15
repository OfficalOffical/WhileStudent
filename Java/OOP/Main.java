package com.company;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Gpa gpa = new Gpa();
        double midterm = sc.nextDouble();
        double finals = sc.nextDouble();
        gpa.setFinals(finals);
        gpa.setMidterm(midterm);
        System.out.println(gpa.calculateGPA());
    }
}

