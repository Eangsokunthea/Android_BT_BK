package com.example.listviewgmail;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.LayoutRes;
import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import com.amulyakhare.textdrawable.TextDrawable;
import com.amulyakhare.textdrawable.util.ColorGenerator;


import java.util.List;

public class ListAdapter extends ArrayAdapter<String> {
    Context context;
    List<String> list;

    public ListAdapter(@NonNull Context context, @LayoutRes int resource, List<String> list){
        super(context, resource, list);

        this.context = context;
        this.list = list;
    }

    @Override
    public int getCount(){
        return list.size();
    }

    @Nullable
    @Override
    public String getItem(int position){
        return list.get(position);
    }

    @Override
    public long getItemId(int position){
        return position;
    }

    @NonNull
    @Override
    public View getView(int position, @Nullable View convertView, @NonNull ViewGroup parent){
        ViewHolder viewHolder;
        LayoutInflater inflater = (LayoutInflater)  context.getSystemService(context.LAYOUT_INFLATER_SERVICE);
        if(convertView == null){
            convertView = inflater.inflate(R.layout.item_list, parent, false);
            viewHolder = new ViewHolder(convertView);
            convertView.setTag(viewHolder);
        }
        else{
            viewHolder = (ViewHolder) convertView.getTag();
        }

        viewHolder.textView.setText(getItem(position));
        String letters = String.valueOf(getItem(position).charAt(0));
        ColorGenerator colorGenerator = ColorGenerator.MATERIAL;
        int color = colorGenerator.getColor(getItem(position));

        TextDrawable textDrawable = TextDrawable.builder()
                .buildRound(letters,color);

        viewHolder.imageView.setImageDrawable(textDrawable);
        return convertView;
    }
    public class ViewHolder{
        ImageView imageView;
        TextView textView;

        public ViewHolder(View iteView){
            imageView = iteView.findViewById(R.id.image_view);
            textView =iteView.findViewById(R.id.text_view);
        }
    }
}
