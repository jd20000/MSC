// Testing :
// Output

// Initial Image:

// img1 displayed

// After Button Click:

// img2 displayed

// Q.2 : 
// Output

// Input:

// 5

// Menu:

// Find Factorial
// Find Sum of Digits

// Output:

// Factorial = 120

// Input:

// 123

// Output:

// Sum of Digits = 6


// Q.1 : 

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="#E3F2FD"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/t1"
        android:layout_width="320dp"
        android:layout_height="70dp"
        android:text="Image Change Program"
        android:textSize="26sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#1565C0"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <ImageView
        android:id="@+id/imageView"
        android:layout_width="250dp"
        android:layout_height="250dp"
        android:src="@drawable/img1"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="60dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="200dp"
        android:layout_height="60dp"
        android:text="Change Image"
        android:textStyle="bold"
        android:textSize="20sp"
        app:layout_constraintTop_toBottomOf="@id/imageView"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>
// Q.1 Java : 
package com.example.imagechange;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {

    ImageView imageView;
    Button b1;

    boolean status = true;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        imageView = findViewById(R.id.imageView);
        b1 = findViewById(R.id.b1);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                if(status) {

                    imageView.setImageResource(
                            R.drawable.img2);

                    status = false;
                }
                else {

                    imageView.setImageResource(
                            R.drawable.img1);

                    status = true;
                }
            }
        });
    }
}

// Q.2 : 

// Skip slip 2 
