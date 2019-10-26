package com.company;

public class Athlette {
    int muscles;
    int staminaRate;
    int jumpHeight;
    int Accuracy;

    public void run(){
        staminaRate = staminaRate+2;
        muscles++;
    }
    public void walk(){
        staminaRate++;
    }
    public void train(){
        staminaRate++;
        muscles+=2;
    }
    public void jump(){
        jumpHeight++;
    }
    public void showStats(){
        System.out.println("////////////////////");
        System.out.println("Muscles rate : "+muscles+"\nStamina rate : "+staminaRate+"\nJump height rate : "+jumpHeight);

    }
}
