package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.TextEvent;

public class TheBoard extends JFrame {
    private JButton btn;
    private JTextField textField;
    private JTextField textField2;

    public TheBoard(){
        super("Dikkat Çevirme Var");
        setLayout (new FlowLayout ());
        setResizable (false);
        setLocationRelativeTo (null);

        textField = new JTextField (10);
        textField2 = new JTextField (10);

        btn = new JButton ("Dolar - TL");

        JLabel label = new JLabel ();

        getContentPane().add(textField);

        btn.addActionListener (new ActionListener () {
            @Override
            public void actionPerformed (ActionEvent actionEvent) {
            int temp = Integer.parseInt (textField.getText ());
            temp *= 5;
            String tempo = Integer.toString (temp);
            textField2.setText (tempo);
            }
        });

        add (textField, BorderLayout.CENTER);
        add(btn,BorderLayout.EAST);
        add(textField2, BorderLayout.WEST);

        setSize (450,85);
        setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
        setVisible (true);

    }
}
