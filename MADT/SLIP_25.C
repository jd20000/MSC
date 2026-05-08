// Testing : 

// Q.1 :
// Input:

// Mobile Number : 9876543210
// Message : Hello

// Output:

// SMS application opens with message

// Q.2 : 

// Output

// Input:

// Username : admin
// Password : admin

// Output:

// Login Successful

// Input:

// Username : admin
// Password : 1234

// Output:

// Invalid Login


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
            android:text="SMS Application"
            android:textSize="28sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#2E7D32"/>

        <EditText
            android:id="@+id/et1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Mobile Number"
            android:inputType="phone"
            android:layout_marginTop="30dp"/>

        <EditText
            android:id="@+id/et2"
            android:layout_width="match_parent"
            android:layout_height="120dp"
            android:hint="Enter Message"
            android:gravity="top"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="SEND SMS"
            android:textStyle="bold"
            android:textSize="20sp"
            android:layout_marginTop="30dp"/>

    </LinearLayout>

</ScrollView>

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
            android:text="SMS Application"
            android:textSize="28sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#2E7D32"/>

        <EditText
            android:id="@+id/et1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Mobile Number"
            android:inputType="phone"
            android:layout_marginTop="30dp"/>

        <EditText
            android:id="@+id/et2"
            android:layout_width="match_parent"
            android:layout_height="120dp"
            android:hint="Enter Message"
            android:gravity="top"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="SEND SMS"
            android:textStyle="bold"
            android:textSize="20sp"
            android:layout_marginTop="30dp"/>

    </LinearLayout>

</ScrollView>

// Q.1 Java 

package com.example.smsactivity;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    EditText et1, et2;
    Button b1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.et1);
        et2 = findViewById(R.id.et2);

        b1 = findViewById(R.id.b1);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String number =
                        et1.getText().toString();

                String message =
                        et2.getText().toString();

                Intent intent =
                        new Intent(Intent.ACTION_VIEW);

                intent.setData(
                        Uri.parse(
                                "sms:" + number));

                intent.putExtra(
                        "sms_body",
                        message);

                startActivity(intent);
            }
        });
    }
}


// Q.2 : 
<?xml version="1.0" encoding="utf-8"?>
<TableLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:padding="20dp"
    android:background="#FFF3E0"
    android:stretchColumns="1">

    <TableRow>

        <TextView
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="USERNAME"
            android:textStyle="bold"
            android:textSize="20sp"
            android:padding="10dp"/>

        <EditText
            android:id="@+id/et1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Username"/>
    </TableRow>

    <TableRow>

        <TextView
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="PASSWORD"
            android:textStyle="bold"
            android:textSize="20sp"
            android:padding="10dp"/>

        <EditText
            android:id="@+id/et2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Password"
            android:inputType="textPassword"/>
    </TableRow>

    <TableRow>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="LOGIN"
            android:textStyle="bold"
            android:textSize="20sp"
            android:layout_span="2"
            android:layout_marginTop="20dp"/>

    </TableRow>

</TableLayout>
// Q.2 Java : 

<?xml version="1.0" encoding="utf-8"?>
<TableLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:padding="20dp"
    android:background="#FFF3E0"
    android:stretchColumns="1">

    <TableRow>

        <TextView
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="USERNAME"
            android:textStyle="bold"
            android:textSize="20sp"
            android:padding="10dp"/>

        <EditText
            android:id="@+id/et1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Username"/>
    </TableRow>

    <TableRow>

        <TextView
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="PASSWORD"
            android:textStyle="bold"
            android:textSize="20sp"
            android:padding="10dp"/>

        <EditText
            android:id="@+id/et2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Password"
            android:inputType="textPassword"/>
    </TableRow>

    <TableRow>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="LOGIN"
            android:textStyle="bold"
            android:textSize="20sp"
            android:layout_span="2"
            android:layout_marginTop="20dp"/>

    </TableRow>

</TableLayout>

// Q.2 Java : 

package com.example.tablelogin;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText et1, et2;
    Button b1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.et1);
        et2 = findViewById(R.id.et2);

        b1 = findViewById(R.id.b1);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String username =
                        et1.getText().toString();

                String password =
                        et2.getText().toString();

                if(username.equals(password)) {

                    Toast.makeText(
                            getApplicationContext(),
                            "Login Successful",
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