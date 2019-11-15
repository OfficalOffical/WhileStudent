package com.company;

public class Gpa {
    private double midterm;
    private double finals;
    public void setMidterm(double midterm){
        this.midterm=midterm;
    }
    public void setFinals(double finals){
        this.finals=finals;
    }
    public double calculateGPA(){
        return (finals*0.6)+(midterm*0.4);
    }
}
