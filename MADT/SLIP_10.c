// Testing : 
// Output

// Input:

// 153

// Output:

// 153 is Armstrong Number

// Input:

// 123

// Output:

// 123 is Not Armstrong Number

// Q.2 : 
// Output

// Select:

// Android

// Output:

// Selected : Android


Q.1 :
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
        android:layout_width="330dp"
        android:layout_height="70dp"
        android:text="Armstrong Number"
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
        android:id="@+id/getnum"
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
        android:text="Check"
        android:textStyle="bold"
        android:textSize="22sp"
        app:layout_constraintTop_toBottomOf="@id/getnum"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>

// Q.1 Java :

package com.example.armstrongtoast;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText getnum;
    Button b1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        getnum = findViewById(R.id.getnum);
        b1 = findViewById(R.id.b1);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                int num, temp, rem, sum = 0;

                num = Integer.parseInt(
                        getnum.getText().toString());

                temp = num;

                while(temp > 0) {

                    rem = temp % 10;

                    sum = sum + (rem * rem * rem);

                    temp = temp / 10;
                }

                if(sum == num) {

                    Toast.makeText(
                            getApplicationContext(),
                            num + " is Armstrong Number",
                            Toast.LENGTH_LONG).show();
                }
                else {

                    Toast.makeText(
                            getApplicationContext(),
                            num + " is Not Armstrong Number",
                            Toast.LENGTH_LONG).show();
                }
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
    android:background="#E8F5E9"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/t1"
        android:layout_width="300dp"
        android:layout_height="70dp"
        android:text="Spinner Example"
        android:textSize="28sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#2E7D32"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <Spinner
        android:id="@+id/sp1"
        android:layout_width="220dp"
        android:layout_height="60dp"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="100dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="180dp"
        android:layout_height="60dp"
        android:text="Show Selection"
        android:textStyle="bold"
        android:textSize="18sp"
        app:layout_constraintTop_toBottomOf="@id/sp1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

    <TextView
        android:id="@+id/t2"
        android:layout_width="300dp"
        android:layout_height="60dp"
        android:text="Selected Item"
        android:textSize="24sp"
        android:textStyle="bold"
        android:gravity="center"
        android:background="#FFFFFF"
        app:layout_constraintTop_toBottomOf="@id/b1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="40dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>
// Q.2 Java : 
package com.example.spinnerdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    Spinner sp1;
    Button b1;
    TextView t2;

    String courses[] = {
            "Java",
            "Python",
            "Android",
            "PHP",
            "C++"
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        sp1 = findViewById(R.id.sp1);
        b1 = findViewById(R.id.b1);
        t2 = findViewById(R.id.t2);

        ArrayAdapter adapter =
                new ArrayAdapter(
                        this,
                        android.R.layout.simple_spinner_item,
                        courses);

        adapter.setDropDownViewResource(
                android.R.layout.simple_spinner_dropdown_item);

        sp1.setAdapter(adapter);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String item =
                        sp1.getSelectedItem().toString();

                t2.setText("Selected : " + item);
            }
        });
    }
}

