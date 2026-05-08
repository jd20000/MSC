//     ?testing : 
//     Input:

// 153

// Output:

// 153 is Armstrong Number

// Input:

// 123

// Output:

// 123 is Not Armstrong Number
    
// Q.2  :

// Input:

// 040123456

// Output:

// Valid Phone Number

// Input:

// 099123

// Output:

// Invalid Phone Number
    
    // //Q1

    <?xml version="1.0" encoding="utf-8"?>
    <androidx.constraintlayout.widget.ConstraintLayout
        xmlns:android="http://schemas.android.com/apk/res/android"
        xmlns:app="http://schemas.android.com/apk/res-auto"
        xmlns:tools="http://schemas.android.com/tools"
        android:layout_width="match_parent"
        android:layout_height="match_parent"
        android:background="#B2DFDB"
        tools:context=".MainActivity">

        <TextView
            android:id="@+id/t1"
            android:layout_width="350dp"
            android:layout_height="70dp"
            android:text="Perfect Number Checker"
            android:textSize="28sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#00796B"
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
            android:background="#FFFFFF"
            app:layout_constraintTop_toBottomOf="@id/t1"
            app:layout_constraintStart_toStartOf="parent"
            app:layout_constraintEnd_toEndOf="parent"
            android:layout_marginTop="80dp"/>

        <Button
            android:id="@+id/b1"
            android:layout_width="200dp"
            android:layout_height="60dp"
            android:text="Check Number"
            android:textStyle="bold"
            android:textSize="20sp"
            app:layout_constraintTop_toBottomOf="@id/et1"
            app:layout_constraintStart_toStartOf="parent"
            app:layout_constraintEnd_toEndOf="parent"
            android:layout_marginTop="40dp"/>

    </androidx.constraintlayout.widget.ConstraintLayout>

// Q. Java 

package com.example.perfectnumber;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

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

                int num = Integer.parseInt(et1.getText().toString());

                int sum = 0;

                for(int i = 1; i < num; i++) {

                    if(num % i == 0) {
                        sum = sum + i;
                    }
                }

                if(sum == num) {

                    Toast.makeText(getApplicationContext(),
                            num + " is Perfect Number",
                            Toast.LENGTH_LONG).show();
                }
                else {

                    Toast.makeText(getApplicationContext(),
                            num + " is Not Perfect Number",
                            Toast.LENGTH_LONG).show();
                }
            }
        });
    }
}



// ----------------------------


// Q.2 XML 

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
        android:text="Calculator"
        android:textSize="30sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#0288D1"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"/>

    <EditText
        android:id="@+id/et1"
        android:layout_width="220dp"
        android:layout_height="60dp"
        android:hint="Enter First Number"
        android:gravity="center"
        android:inputType="numberDecimal"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <EditText
        android:id="@+id/et2"
        android:layout_width="220dp"
        android:layout_height="60dp"
        android:hint="Enter Second Number"
        android:gravity="center"
        android:inputType="numberDecimal"
        app:layout_constraintTop_toBottomOf="@id/et1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="20dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="120dp"
        android:layout_height="60dp"
        android:text="ADD"
        app:layout_constraintTop_toBottomOf="@id/et2"
        app:layout_constraintStart_toStartOf="parent"
        android:layout_marginStart="30dp"
        android:layout_marginTop="30dp"/>

    <Button
        android:id="@+id/b2"
        android:layout_width="120dp"
        android:layout_height="60dp"
        android:text="SUB"
        app:layout_constraintTop_toBottomOf="@id/et2"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginEnd="30dp"
        android:layout_marginTop="30dp"/>

    <Button
        android:id="@+id/b3"
        android:layout_width="120dp"
        android:layout_height="60dp"
        android:text="MUL"
        app:layout_constraintTop_toBottomOf="@id/b1"
        app:layout_constraintStart_toStartOf="parent"
        android:layout_marginStart="30dp"
        android:layout_marginTop="20dp"/>

    <Button
        android:id="@+id/b4"
        android:layout_width="120dp"
        android:layout_height="60dp"
        android:text="DIV"
        app:layout_constraintTop_toBottomOf="@id/b2"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginEnd="30dp"
        android:layout_marginTop="20dp"/>

    <TextView
        android:id="@+id/t2"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:text="Result"
        android:textSize="24sp"
        android:textStyle="bold"
        android:gravity="center"
        android:background="#FFFFFF"
        app:layout_constraintTop_toBottomOf="@id/b3"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>

// Q.2 Java

package com.example.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText et1, et2;
    Button b1, b2, b3, b4;
    TextView t2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.et1);
        et2 = findViewById(R.id.et2);

        b1 = findViewById(R.id.b1);
        b2 = findViewById(R.id.b2);
        b3 = findViewById(R.id.b3);
        b4 = findViewById(R.id.b4);

        t2 = findViewById(R.id.t2);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double a = Double.parseDouble(et1.getText().toString());
                double b = Double.parseDouble(et2.getText().toString());

                t2.setText("Addition = " + (a + b));
            }
        });

        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double a = Double.parseDouble(et1.getText().toString());
                double b = Double.parseDouble(et2.getText().toString());

                t2.setText("Subtraction = " + (a - b));
            }
        });

        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double a = Double.parseDouble(et1.getText().toString());
                double b = Double.parseDouble(et2.getText().toString());

                t2.setText("Multiplication = " + (a * b));
            }
        });

        b4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double a = Double.parseDouble(et1.getText().toString());
                double b = Double.parseDouble(et2.getText().toString());

                t2.setText("Division = " + (a / b));
            }
        });
    }
}