package com.company;

public class Football extends Athlette{
    public void showStats(){
        System.out.println("////////////////////");
        System.out.println("Muscles rate : "+muscles+"\nStamina rate : "+staminaRate+"\nJump height rate : "+jumpHeight+"\nYour accuraty is : "+Accuracy);

    }
    public void train(){
        muscles+=1;
        staminaRate+=3;
        Accuracy+=2;
    }
    public void jump(){
        jumpHeight+=1;
    }
}
