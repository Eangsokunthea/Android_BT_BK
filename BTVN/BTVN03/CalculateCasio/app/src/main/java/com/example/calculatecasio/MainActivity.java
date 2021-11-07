package com.example.calculatecasio;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView tv;
    private String input, answer;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        tv = (TextView) findViewById(R.id.tv);
    }

    public void ButtonClick(View view){
        Button button = (Button) view;
        String data = button.getText().toString();

        switch (data){
            case "AC":
                input = "";
                break;
            case "DEL":
                if(input.length()>0){
                    String newText = input.substring(0,input.length()-1);
                    input = newText;
                }
                break;
            case "=":
                Solve();
                answer = input;
                break;
            case "x":
                Solve();
                input+="*";
                break;

            default:
                if (input == null){
                    input="";
                }
                if (data.equals("+") || data.equals("-") || data.equals("/")){
                    Solve();
                    //in ket qua
                }
                input+=data;
        }
        tv.setText(input);
    }

    //chia chuoi
    public void Solve(){
        //phep nhan
        if (input.split("\\*").length==2){
            String number[] = input.split("\\*");
            try {
                double mul = Double.parseDouble(number[0])*Double.parseDouble(number[1]);
                input = mul+"";
            }catch (Exception e){

            }
        }

        //phep chia
        if (input.split("\\/").length==2){
            String number[] = input.split("\\/");
            try {
                double div = Double.parseDouble(number[0])/Double.parseDouble(number[1]);
                input = div+"";
            }catch (Exception e){

            }
        }

        //phep cong
        if (input.split("\\+").length==2){
            String number[] = input.split("\\+");
            try {
                double sum = Double.parseDouble(number[0])+Double.parseDouble(number[1]);
                input = sum+"";
            }catch (Exception e){

            }
        }

        //phep tru
        if (input.split("\\-").length==2){
            String number[] = input.split("\\-");
            try {
                double sub = Double.parseDouble(number[0])-Double.parseDouble(number[1]);
                input = sub+"";
            }catch (Exception e){

            }
        }
        String n[] = input.split("\\.");
        if (n.length > 1){
            if (n[1].equals("0")){
                input = n[0];
            }
        }
    }
}