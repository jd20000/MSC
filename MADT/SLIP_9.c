// Testing : 
// Output

// Input:

// 121

// Output:

// 121 is Palindrome

// Input:

// 123

// Output:

// 123 is Not Palindrome

// Q.2 : 
// Output

// Input:

// 10
// 5

// Output:

// Addition = 15
// Subtraction = 5
// Multiplication = 50
// Division = 2


// Q.1 : 

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="#E8F5E9"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/t1"
        android:layout_width="320dp"
        android:layout_height="70dp"
        android:text="Palindrome Number Checker"
        android:textSize="24sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#2E7D32"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <EditText
        android:id="@+id/getnum"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:hint="Enter Number"
        android:inputType="number"
        android:gravity="center"
        android:textSize="18sp"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="80dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="180dp"
        android:layout_height="60dp"
        android:text="Check"
        android:textSize="22sp"
        android:textStyle="bold"
        app:layout_constraintTop_toBottomOf="@id/getnum"
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

Q.1 Java : 
package com.example.palindrome;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText getnum;
    Button b1;
    TextView t2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        getnum = findViewById(R.id.getnum);
        b1 = findViewById(R.id.b1);
        t2 = findViewById(R.id.t2);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                int num, temp, rem, rev = 0;

                num = Integer.parseInt(
                        getnum.getText().toString());

                temp = num;

                while(temp > 0) {

                    rem = temp % 10;

                    rev = rev * 10 + rem;

                    temp = temp / 10;
                }

                if(rev == num) {

                    t2.setText(num +
                            " is Palindrome");
                }
                else {

                    t2.setText(num +
                            " is Not Palindrome");
                }
            }
        });
    }
}

// Q.2 : 
<?xml version="1.0" encoding="utf-8"?>
<ScrollView xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <LinearLayout
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:orientation="vertical"
        android:padding="20dp"
        android:background="#FFF8E1">

        <TextView
            android:id="@+id/t1"
            android:layout_width="match_parent"
            android:layout_height="70dp"
            android:text="Simple Calculator"
            android:textSize="28sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#F57F17"/>

        <EditText
            android:id="@+id/et1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter First Number"
            android:inputType="numberDecimal"
            android:layout_marginTop="30dp"/>

        <EditText
            android:id="@+id/et2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Second Number"
            android:inputType="numberDecimal"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Addition"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Subtraction"/>

        <Button
            android:id="@+id/b3"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Multiplication"/>

        <Button
            android:id="@+id/b4"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Division"/>

        <TextView
            android:id="@+id/t2"
            android:layout_width="match_parent"
            android:layout_height="60dp"
            android:text="Result"
            android:textSize="24sp"
            android:textStyle="bold"
            android:gravity="center"
            android:background="#FFFFFF"
            android:layout_marginTop="30dp"/>

    </LinearLayout>

</ScrollView>

// Q.2  :

<?xml version="1.0" encoding="utf-8"?>
<ScrollView xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <LinearLayout
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:orientation="vertical"
        android:padding="20dp"
        android:background="#FFF8E1">

        <TextView
            android:id="@+id/t1"
            android:layout_width="match_parent"
            android:layout_height="70dp"
            android:text="Simple Calculator"
            android:textSize="28sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#F57F17"/>

        <EditText
            android:id="@+id/et1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter First Number"
            android:inputType="numberDecimal"
            android:layout_marginTop="30dp"/>

        <EditText
            android:id="@+id/et2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Second Number"
            android:inputType="numberDecimal"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Addition"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Subtraction"/>

        <Button
            android:id="@+id/b3"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Multiplication"/>

        <Button
            android:id="@+id/b4"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Division"/>

        <TextView
            android:id="@+id/t2"
            android:layout_width="match_parent"
            android:layout_height="60dp"
            android:text="Result"
            android:textSize="24sp"
            android:textStyle="bold"
            android:gravity="center"
            android:background="#FFFFFF"
            android:layout_marginTop="30dp"/>

    </LinearLayout>

</ScrollView>

// Q2 Java :
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

                double a =
                        Double.parseDouble(et1.getText().toString());

                double b =
                        Double.parseDouble(et2.getText().toString());

                t2.setText("Addition = " + (a + b));
            }
        });

        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double a =
                        Double.parseDouble(et1.getText().toString());

                double b =
                        Double.parseDouble(et2.getText().toString());

                t2.setText("Subtraction = " + (a - b));
            }
        });

        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double a =
                        Double.parseDouble(et1.getText().toString());

                double b =
                        Double.parseDouble(et2.getText().toString());

                t2.setText("Multiplication = " + (a * b));
            }
        });

        b4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double a =
                        Double.parseDouble(et1.getText().toString());

                double b =
                        Double.parseDouble(et2.getText().toString());

                t2.setText("Division = " + (a / b));
            }
        });
    }
}
