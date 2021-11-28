package com.example.listviewgmail;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {
    ListView listView;
    ArrayList<String>list = new ArrayList<>();
    ArrayAdapter<String> adapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        listView = (ListView) findViewById(R.id.list_view);

        list.add("Nguyen Van A");
        list.add("Thang Van B");
        list.add("Son Van C");
        list.add("Rieng Van D");
        list.add("Kim Van E");
        list.add("Yeo Van F");
        list.add("Bog Van G");
        list.add("Nguyen Van H");
        list.add("Hong Van I");
        list.add("Ceo Van J");
        list.add("Gok Van K");
        list.add("Leng Van L");
        list.add("Dog Van M");

        adapter = new ListAdapter(MainActivity.this, R.layout.item_list, list);
        listView.setAdapter(adapter);

    }
}