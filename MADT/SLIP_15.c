// Testing : 
// Output

// Input:

// 10
// 5

// Outputs:

// Addition = 15
// Subtraction = 5
// Division = 2
// Multiplication = 50

// Q.2 : 
// Output

// Create Balance:

// 1000

// Output:

// Balance = 1000

// Deposit:

// 500

// Output:

// Balance = 1500

// Withdraw:

// 300

// Output:

// Balance = 1200


// Q.1 :

<?xml version="1.0" encoding="utf-8"?>
<ScrollView xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <LinearLayout
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:orientation="vertical"
        android:padding="20dp"
        android:background="#E8F5E9">

        <TextView
            android:id="@+id/t1"
            android:layout_width="match_parent"
            android:layout_height="70dp"
            android:text="Simple Calculator"
            android:textSize="28sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#2E7D32"/>

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
            android:text="ADD"
            android:layout_marginTop="25dp"/>

        <Button
            android:id="@+id/b2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="SUB"/>

        <Button
            android:id="@+id/b3"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="DIV"/>

        <Button
            android:id="@+id/b4"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="MULT"/>

    </LinearLayout>

</ScrollView>

// Q.1 Java :

package com.example.toastcalculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText et1, et2;
    Button b1, b2, b3, b4;

    double a, b, result;

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

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                a = Double.parseDouble(et1.getText().toString());
                b = Double.parseDouble(et2.getText().toString());

                result = a + b;

                Toast.makeText(getApplicationContext(),
                        "Addition = " + result,
                        Toast.LENGTH_LONG).show();
            }
        });

        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                a = Double.parseDouble(et1.getText().toString());
                b = Double.parseDouble(et2.getText().toString());

                result = a - b;

                Toast.makeText(getApplicationContext(),
                        "Subtraction = " + result,
                        Toast.LENGTH_LONG).show();
            }
        });

        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                a = Double.parseDouble(et1.getText().toString());
                b = Double.parseDouble(et2.getText().toString());

                result = a / b;

                Toast.makeText(getApplicationContext(),
                        "Division = " + result,
                        Toast.LENGTH_LONG).show();
            }
        });

        b4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                a = Double.parseDouble(et1.getText().toString());
                b = Double.parseDouble(et2.getText().toString());

                result = a * b;

                Toast.makeText(getApplicationContext(),
                        "Multiplication = " + result,
                        Toast.LENGTH_LONG).show();
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
        android:background="#FFF3E0">

        <TextView
            android:id="@+id/t1"
            android:layout_width="match_parent"
            android:layout_height="70dp"
            android:text="Simple Bank Application"
            android:textSize="26sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#EF6C00"/>

        <EditText
            android:id="@+id/acno"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Account Number"
            android:layout_marginTop="25dp"/>

        <RadioGroup
            android:id="@+id/rg1"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_marginTop="20dp">

            <RadioButton
                android:id="@+id/r1"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:text="Checking"/>

            <RadioButton
                android:id="@+id/r2"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:text="Savings"/>
        </RadioGroup>

        <EditText
            android:id="@+id/balance"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Amount"
            android:inputType="numberDecimal"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Create Balance"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Deposit"/>

        <Button
            android:id="@+id/b3"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Withdraw"/>

        <TextView
            android:id="@+id/t2"
            android:layout_width="match_parent"
            android:layout_height="70dp"
            android:text="Balance"
            android:textSize="24sp"
            android:textStyle="bold"
            android:gravity="center"
            android:background="#FFFFFF"
            android:layout_marginTop="30dp"/>

    </LinearLayout>

</ScrollView>
// Q.2 Java :

package com.example.bankapp;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText acno, balance;
    Button b1, b2, b3;
    TextView t2;

    double totalBalance = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        acno = findViewById(R.id.acno);
        balance = findViewById(R.id.balance);

        b1 = findViewById(R.id.b1);
        b2 = findViewById(R.id.b2);
        b3 = findViewById(R.id.b3);

        t2 = findViewById(R.id.t2);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                totalBalance =
                        Double.parseDouble(
                                balance.getText().toString());

                t2.setText(
                        "Balance = " + totalBalance);

                Toast.makeText(
                        getApplicationContext(),
                        "Account Created",
                        Toast.LENGTH_SHORT).show();
            }
        });

        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double amt =
                        Double.parseDouble(
                                balance.getText().toString());

                totalBalance = totalBalance + amt;

                t2.setText(
                        "Balance = " + totalBalance);

                Toast.makeText(
                        getApplicationContext(),
                        "Amount Deposited",
                        Toast.LENGTH_SHORT).show();
            }
        });

        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double amt =
                        Double.parseDouble(
                                balance.getText().toString());

                if(amt <= totalBalance) {

                    totalBalance = totalBalance - amt;

                    t2.setText(
                            "Balance = " + totalBalance);

                    Toast.makeText(
                            getApplicationContext(),
                            "Amount Withdrawn",
                            Toast.LENGTH_SHORT).show();
                }
                else {

                    Toast.makeText(
                            getApplicationContext(),
                            "Insufficient Balance",
                            Toast.LENGTH_SHORT).show();
                }
            }
        });
    }
}