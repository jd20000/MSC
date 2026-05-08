// Testing : 
// Q.1 : 
// Output

// Input:

// 5

// Output:

// Factorial = 120

// Q.2 : 
// Output

// Input:

// Username : admin
// Password : admin

// Output:

// Login Successful...

// Input:

// Username : admin
// Password : 123

// Output:

// Invalid Login



// Q.1 

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
        android:text="Factorial Program"
        android:textSize="28sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#2E7D32"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <EditText
        android:id="@+id/et1"
        android:layout_width="240dp"
        android:layout_height="60dp"
        android:hint="Enter Number"
        android:inputType="number"
        android:gravity="center"
        android:textSize="20sp"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="90dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="180dp"
        android:layout_height="60dp"
        android:text="Calculate"
        android:textStyle="bold"
        android:textSize="20sp"
        app:layout_constraintTop_toBottomOf="@id/et1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <TextView
        android:id="@+id/t2"
        android:layout_width="300dp"
        android:layout_height="70dp"
        android:text="Result"
        android:textSize="24sp"
        android:textStyle="bold"
        android:gravity="center"
        android:background="#FFFFFF"
        app:layout_constraintTop_toBottomOf="@id/b1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="50dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>

// Q.1 Java :
package com.example.factorialprogram;

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

                int num, fact = 1;

                num = Integer.parseInt(
                        et1.getText().toString());

                for(int i = 1; i <= num; i++) {

                    fact = fact * i;
                }

                t2.setText(
                        "Factorial = " + fact);
            }
        });
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
        android:layout_marginTop="40dp"/>

    <EditText
        android:id="@+id/username"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:hint="Enter Username"
        android:gravity="center"
        android:textSize="18sp"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="80dp"/>

    <EditText
        android:id="@+id/password"
        android:layout_width="250dp"
        android:layout_height="60dp"
        android:hint="Enter Password"
        android:inputType="textPassword"
        android:gravity="center"
        android:textSize="18sp"
        app:layout_constraintTop_toBottomOf="@id/username"
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
        app:layout_constraintTop_toBottomOf="@id/password"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>
// Q.2 Java :
package com.example.simplelogin;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText username, password;
    Button b1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        username = findViewById(R.id.username);
        password = findViewById(R.id.password);

        b1 = findViewById(R.id.b1);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String user =
                        username.getText().toString();

                String pass =
                        password.getText().toString();

                if(user.equals(pass)) {

                    Toast.makeText(
                            getApplicationContext(),
                            "Login Successful...",
                            Toast.LENGTH_LONG).show();
                }
                else {

                    Toast.makeText(
                            getApplicationContext(),
                            "Invalid Login",
                            Toast.LENGTH_LONG).show();
                }
            }
        });
    }
}