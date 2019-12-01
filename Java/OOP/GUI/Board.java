package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.TextEvent;
import java.util.Random;



class TheBoard extends JFrame {
    private JButton btn;
    private JButton btn2;
    private JButton btn3;
    private JTextField textField;
    private JTextField textField2;

    private void init1(){
        Random rnd = new Random();
        int TMakina = rnd.nextInt(10)+1;
        int temp = Integer.parseInt (textField.getText ());
        if(temp == TMakina){
            textField2.setText ("Bravo");
        }
        else{
            textField2.setText ("Malesef : " +TMakina );
        }
    }
    private void init2(){
        Random rnd = new Random();
        int TMakina = rnd.nextInt(10)+1;
        int temp = Integer.parseInt (textField2.getText ());
        if(temp == TMakina){
            textField.setText ("Bravo");
        }
        else{
            textField.setText ("Malesef : " +TMakina );
        }
    }
    private void init(){
        setLayout (new FlowLayout ());
        setResizable (false);
        setLocationRelativeTo (null);
        textField = new JTextField (10);
        textField2 = new JTextField (10);
        btn = new JButton ("Senin tahminin");
        JLabel label = new JLabel ();
        btn2 = new JButton ("Bilgisayarın tahmini");
        btn3 = new JButton ("Hile %50 yakalanma");
        add (btn3,BorderLayout.SOUTH);
        getContentPane().add(textField);
        add (textField, BorderLayout.CENTER);
        add(btn,BorderLayout.EAST);
        add(btn2,BorderLayout.AFTER_LAST_LINE);
        add(textField2, BorderLayout.WEST);
        setSize (800,100);
        setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
        setVisible (true);
    }

    public TheBoard(){
        super("Tuttur bakalım");
        init ();
        btn.addActionListener (new ActionListener () {
            @Override
            public void actionPerformed (ActionEvent actionEvent) {
              init1();
            }
        });
        btn2.addActionListener (new ActionListener () {
            @Override
            public void actionPerformed (ActionEvent actionEvent) {
            init2 ();
            }
        });
        btn3.addActionListener (new ActionListener () {
            @Override
            public void actionPerformed (ActionEvent actionEvent) {
                Random rnd = new Random();
                int TMakina = rnd.nextInt(10)+1;
                if(TMakina >5){
                    textField.setText ("Bravo");
                    textField2.setText ("Bravo");
                }
                else{
                        textField.setText ("Hile yapma");
                        textField2.setText ("Hile yapma");
                }
            }
        });
    }
}