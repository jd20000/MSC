// What is ImageSwitcher?

// ImageSwitcher is used to display images one by one with animation effects.

// setFactory() is used to create ImageView dynamically inside ImageSwitcher.


// Testing : 

// Q.1 : 
// Output
// Images change when clicking:
// Next Button
// Previous Button



// Q.2 : 
// Output

// Input:

// Mumbai

// Output:

// Google Maps opens and searches Mumbai location.


// Q.1 

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="#E8EAF6"
    tools:context=".MainActivity">

    <ImageSwitcher
        android:id="@+id/imageSwitcher"
        android:layout_width="300dp"
        android:layout_height="300dp"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="120dp"
        android:layout_height="60dp"
        android:text="Previous"
        app:layout_constraintTop_toBottomOf="@id/imageSwitcher"
        app:layout_constraintStart_toStartOf="parent"
        android:layout_marginStart="40dp"
        android:layout_marginTop="40dp"/>

    <Button
        android:id="@+id/b2"
        android:layout_width="120dp"
        android:layout_height="60dp"
        android:text="Next"
        app:layout_constraintTop_toBottomOf="@id/imageSwitcher"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginEnd="40dp"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>



Q.1 Java : 
package com.example.imageswitcher;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageSwitcher;
import android.widget.ImageView;
import android.widget.ViewSwitcher;

public class MainActivity extends AppCompatActivity {

    ImageSwitcher imageSwitcher;
    Button b1, b2;

    int images[] = {
            R.drawable.img1,
            R.drawable.img2,
            R.drawable.img3
    };

    int position = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        imageSwitcher = findViewById(R.id.imageSwitcher);

        b1 = findViewById(R.id.b1);
        b2 = findViewById(R.id.b2);

        imageSwitcher.setFactory(new ViewSwitcher.ViewFactory() {
            @Override
            public View makeView() {

                ImageView imageView = new ImageView(getApplicationContext());

                imageView.setScaleType(ImageView.ScaleType.FIT_CENTER);

                imageView.setLayoutParams(
                        new ImageSwitcher.LayoutParams(
                                ImageSwitcher.LayoutParams.MATCH_PARENT,
                                ImageSwitcher.LayoutParams.MATCH_PARENT
                        )
                );

                return imageView;
            }
        });

        imageSwitcher.setImageResource(images[position]);

        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                position++;

                if(position == images.length) {
                    position = 0;
                }

                imageSwitcher.setImageResource(images[position]);
            }
        });

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                position--;

                if(position < 0) {
                    position = images.length - 1;
                }

                imageSwitcher.setImageResource(images[position]);
            }
        });
    }
}


// Q.2 

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <EditText
        android:id="@+id/et1"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:hint="Enter Location"
        android:textSize="18sp"
        android:gravity="center"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="80dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="180dp"
        android:layout_height="60dp"
        android:text="Search Location"
        android:textSize="18sp"
        app:layout_constraintTop_toBottomOf="@id/et1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>

// Q.2 Java :
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <EditText
        android:id="@+id/et1"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:hint="Enter Location"
        android:textSize="18sp"
        android:gravity="center"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="80dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="180dp"
        android:layout_height="60dp"
        android:text="Search Location"
        android:textSize="18sp"
        app:layout_constraintTop_toBottomOf="@id/et1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>

// Q.2 Java 

package com.example.googlemapsearch;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    EditText et1;
    Button b1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.et1);
        b1 = findViewById(R.id.b1);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String location = et1.getText().toString();

                Uri uri = Uri.parse("geo:0,0?q=" + location);

                Intent intent = new Intent(Intent.ACTION_VIEW, uri);

                intent.setPackage("com.google.android.apps.maps");

                startActivity(intent);
            }
        });
    }
}