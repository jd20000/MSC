// Q.1 

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="#FFE0B2"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/t1"
        android:layout_width="350dp"
        android:layout_height="70dp"
        android:text="Armstrong Number Checker"
        android:textSize="26sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#F57C00"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"/>

    <EditText
        android:id="@+id/et1"
        android:layout_width="220dp"
        android:layout_height="60dp"
        android:hint="Enter Number"
        android:gravity="center"
        android:textSize="20sp"
        android:inputType="number"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="80dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="200dp"
        android:layout_height="60dp"
        android:text="Check Armstrong"
        android:textSize="20sp"
        android:textStyle="bold"
        app:layout_constraintTop_toBottomOf="@id/et1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <TextView
        android:id="@+id/t2"
        android:layout_width="300dp"
        android:layout_height="60dp"
        android:text="Result"
        android:textSize="24sp"
        android:textStyle="bold"
        android:gravity="center"
        android:background="#FFFFFF"
        app:layout_constraintTop_toBottomOf="@id/b1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>


// Q.1 Java

package com.example.armstrongnumber;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText et1;
    Button b1;
    TextView t2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.et1);
        b1 = findViewById(R.id.b1);
        t2 = findViewById(R.id.t2);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                int num, temp, rem, sum = 0;

                num = Integer.parseInt(et1.getText().toString());

                temp = num;

                while(temp > 0) {

                    rem = temp % 10;

                    sum = sum + (rem * rem * rem);

                    temp = temp / 10;
                }

                if(sum == num) {

                    t2.setText(num + " is Armstrong Number");
                }
                else {

                    t2.setText(num + " is Not Armstrong Number");
                }
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
    android:background="#E1F5FE"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/t1"
        android:layout_width="350dp"
        android:layout_height="70dp"
        android:text="Phone Number Validation"
        android:textSize="24sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#0288D1"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"/>

    <EditText
        android:id="@+id/et1"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:hint="Enter Phone Number"
        android:gravity="center"
        android:textSize="18sp"
        android:inputType="phone"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="100dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="180dp"
        android:layout_height="60dp"
        android:text="Validate"
        android:textSize="20sp"
        android:textStyle="bold"
        app:layout_constraintTop_toBottomOf="@id/et1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <TextView
        android:id="@+id/t2"
        android:layout_width="300dp"
        android:layout_height="60dp"
        android:text="Result"
        android:textSize="22sp"
        android:textStyle="bold"
        android:gravity="center"
        android:background="#FFFFFF"
        app:layout_constraintTop_toBottomOf="@id/b1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>

// Q.2 Java

package com.example.phonevalidation;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText et1;
    Button b1;
    TextView t2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.et1);
        b1 = findViewById(R.id.b1);
        t2 = findViewById(R.id.t2);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String phone = et1.getText().toString();

                String pattern = "^(040|041|050|0400|044)[0-9]{6,8}$";

                if(phone.matches(pattern)) {

                    t2.setText("Valid Phone Number");
                }
                else {

                    t2.setText("Invalid Phone Number");
                }
            }
        });
    }
}
