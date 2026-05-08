// Testing : 
// Output

// Input:

// Email    : abc@gmail.com
// Password : 123456

// Output:

// Login Successful

// Invalid Input:

// Email    : abc
// Password : 12

// Output:

// Invalid Email
// Password must contain 6 characters

// Q.2 : 
// Output

// Input:

// Pune

// Output:

// Google Maps opens and searches Pune location.



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
        android:layout_width="300dp"
        android:layout_height="70dp"
        android:text="Login Form"
        android:textSize="30sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#1565C0"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="30dp"/>

    <EditText
        android:id="@+id/et1"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:hint="Enter Email"
        android:inputType="textEmailAddress"
        android:gravity="center"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="80dp"/>

    <EditText
        android:id="@+id/et2"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:hint="Enter Password"
        android:inputType="textPassword"
        android:gravity="center"
        app:layout_constraintTop_toBottomOf="@id/et1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="30dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="180dp"
        android:layout_height="60dp"
        android:text="LOGIN"
        android:textStyle="bold"
        android:textSize="22sp"
        app:layout_constraintTop_toBottomOf="@id/et2"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <TextView
        android:id="@+id/t2"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Not a member? SignUp now"
        android:textSize="18sp"
        android:textStyle="bold"
        android:textColor="#D81B60"
        app:layout_constraintTop_toBottomOf="@id/b1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="30dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>

// Q.1 Java : 
package com.example.loginvalidation;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Patterns;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText et1, et2;
    Button b1;
    TextView t2;

    Boolean isEmailValid, isPasswordValid;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.et1);
        et2 = findViewById(R.id.et2);

        b1 = findViewById(R.id.b1);

        t2 = findViewById(R.id.t2);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                validate();
            }
        });
    }

    public void validate() {

        if(et1.getText().toString().isEmpty()) {

            et1.setError("Email Required");
            isEmailValid = false;
        }

        else if(!Patterns.EMAIL_ADDRESS.matcher(
                et1.getText().toString()).matches()) {

            et1.setError("Invalid Email");
            isEmailValid = false;
        }

        else {

            isEmailValid = true;
        }

        if(et2.getText().toString().isEmpty()) {

            et2.setError("Password Required");
            isPasswordValid = false;
        }

        else if(et2.getText().length() < 6) {

            et2.setError("Password must contain 6 characters");
            isPasswordValid = false;
        }

        else {

            isPasswordValid = true;
        }

        if(isEmailValid && isPasswordValid) {

            Toast.makeText(getApplicationContext(),
                    "Login Successful",
                    Toast.LENGTH_LONG).show();
        }
    }
}


// Q.2 : 
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="#FFF3E0"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/t1"
        android:layout_width="320dp"
        android:layout_height="70dp"
        android:text="Google Map Search"
        android:textSize="28sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#EF6C00"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <EditText
        android:id="@+id/et1"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:hint="Enter Location"
        android:textSize="18sp"
        android:gravity="center"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="100dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="200dp"
        android:layout_height="60dp"
        android:text="Search Location"
        android:textSize="18sp"
        android:textStyle="bold"
        app:layout_constraintTop_toBottomOf="@id/et1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>

Q.2 Java : 
package com.example.googlemap;

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

                String location =
                        et1.getText().toString();

                Uri uri =
                        Uri.parse("geo:0,0?q=" + location);

                Intent intent =
                        new Intent(Intent.ACTION_VIEW, uri);

                intent.setPackage(
                        "com.google.android.apps.maps");

                startActivity(intent);
            }
        });
    }
}