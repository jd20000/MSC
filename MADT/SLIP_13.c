// Testing : 


// Q.1 : 
// Output

// Input:

// First Name : Jay
// Last Name  : Deshmukh
// Email      : jay@gmail.com
// Phone      : 9876543210
// Password   : 123456

// Output:

// Registration Successful

// Invalid Input:

// Email : abc
// Phone : 123

// Output:

// Invalid Email
// Invalid Phone Number


// Q.2 : 
// Output

// Insert:

// Java
// Android
// Python

// Search:

// Android

// Output:

// Item Found

// Delete:

// Python

// Output:

// Item Deleted

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
        android:background="#E3F2FD">

        <TextView
            android:id="@+id/t1"
            android:layout_width="match_parent"
            android:layout_height="70dp"
            android:text="Registration Form"
            android:textSize="28sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#1565C0"/>

        <EditText
            android:id="@+id/fname"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter First Name"
            android:layout_marginTop="20dp"/>

        <EditText
            android:id="@+id/lname"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Last Name"
            android:layout_marginTop="15dp"/>

        <EditText
            android:id="@+id/email"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Email"
            android:inputType="textEmailAddress"
            android:layout_marginTop="15dp"/>

        <EditText
            android:id="@+id/phone"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Phone Number"
            android:inputType="phone"
            android:layout_marginTop="15dp"/>

        <EditText
            android:id="@+id/password"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Password"
            android:inputType="textPassword"
            android:layout_marginTop="15dp"/>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Register"
            android:textStyle="bold"
            android:textSize="20sp"
            android:layout_marginTop="25dp"/>

    </LinearLayout>

</ScrollView>

// Q.1 Java : 
package com.example.registrationform;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Patterns;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText fname, lname, email, phone, password;
    Button b1;

    Boolean isValid;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        fname = findViewById(R.id.fname);
        lname = findViewById(R.id.lname);
        email = findViewById(R.id.email);
        phone = findViewById(R.id.phone);
        password = findViewById(R.id.password);

        b1 = findViewById(R.id.b1);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                validateData();
            }
        });
    }

    public void validateData() {

        isValid = true;

        if(fname.getText().toString().isEmpty()) {

            fname.setError("First Name Required");
            isValid = false;
        }

        if(lname.getText().toString().isEmpty()) {

            lname.setError("Last Name Required");
            isValid = false;
        }

        if(email.getText().toString().isEmpty()) {

            email.setError("Email Required");
            isValid = false;
        }

        else if(!Patterns.EMAIL_ADDRESS.matcher(
                email.getText().toString()).matches()) {

            email.setError("Invalid Email");
            isValid = false;
        }

        if(phone.getText().toString().length() != 10) {

            phone.setError("Invalid Phone Number");
            isValid = false;
        }

        if(password.getText().toString().length() < 6) {

            password.setError("Password must contain 6 characters");
            isValid = false;
        }

        if(isValid) {

            Toast.makeText(
                    getApplicationContext(),
                    "Registration Successful",
                    Toast.LENGTH_LONG).show();
        }
    }
}



// Q.2 :

<?xml version="1.0" encoding="utf-8"?>
<LinearLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    android:padding="15dp"
    android:background="#FFF8E1">

    <TextView
        android:id="@+id/t1"
        android:layout_width="match_parent"
        android:layout_height="60dp"
        android:text="ListView Operations"
        android:textSize="26sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#F57F17"/>

    <EditText
        android:id="@+id/et1"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:hint="Enter Item"
        android:layout_marginTop="20dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:text="Insert"
        android:layout_marginTop="10dp"/>

    <Button
        android:id="@+id/b2"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:text="Delete"/>

    <Button
        android:id="@+id/b3"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:text="Search"/>

    <ListView
        android:id="@+id/listView"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:layout_marginTop="20dp"/>

</LinearLayout>

// Q.2 Java : 
package com.example.listviewoperations;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.Toast;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    EditText et1;
    Button b1, b2, b3;
    ListView listView;

    ArrayList<String> items;

    ArrayAdapter<String> adapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.et1);

        b1 = findViewById(R.id.b1);
        b2 = findViewById(R.id.b2);
        b3 = findViewById(R.id.b3);

        listView = findViewById(R.id.listView);

        items = new ArrayList<>();

        adapter = new ArrayAdapter<>(
                this,
                android.R.layout.simple_list_item_1,
                items);

        listView.setAdapter(adapter);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String item =
                        et1.getText().toString();

                items.add(item);

                adapter.notifyDataSetChanged();

                Toast.makeText(
                        getApplicationContext(),
                        "Item Inserted",
                        Toast.LENGTH_SHORT).show();
            }
        });

        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String item =
                        et1.getText().toString();

                items.remove(item);

                adapter.notifyDataSetChanged();

                Toast.makeText(
                        getApplicationContext(),
                        "Item Deleted",
                        Toast.LENGTH_SHORT).show();
            }
        });

        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String item =
                        et1.getText().toString();

                if(items.contains(item)) {

                    Toast.makeText(
                            getApplicationContext(),
                            "Item Found",
                            Toast.LENGTH_SHORT).show();
                }
                else {

                    Toast.makeText(
                            getApplicationContext(),
                            "Item Not Found",
                            Toast.LENGTH_SHORT).show();
                }
            }
        });
    }
}
