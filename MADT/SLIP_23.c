// Testing : 

// Q.1 :
// Output

// When button is clicked:

// Google website opens in browser

// Q.2 : 
// Input:

// Jay

// Selected:

// Bold
// Blue Color
// Underline

// Output:

// Hello Jay

// (Text appears blue, bold and underlined)


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
        android:text="Implicit Intent Demo"
        android:textSize="28sp"
        android:textStyle="bold"
        android:textColor="#FFFFFF"
        android:gravity="center"
        android:background="#1565C0"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="50dp"/>

    <Button
        android:id="@+id/b1"
        android:layout_width="220dp"
        android:layout_height="60dp"
        android:text="Open Browser"
        android:textStyle="bold"
        android:textSize="20sp"
        app:layout_constraintTop_toBottomOf="@id/t1"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_marginTop="140dp"/>

</androidx.constraintlayout.widget.ConstraintLayout>

// Q.1 Java : : 
package com.example.implicitintent;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    Button b1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        b1 = findViewById(R.id.b1);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                Intent intent =
                        new Intent(
                                Intent.ACTION_VIEW,
                                Uri.parse(
                                        "https://www.google.com"));

                startActivity(intent);
            }
        });
    }
}

Q.2 : 
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
            android:text="Text Formatting App"
            android:textSize="26sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#F57F17"/>

        <EditText
            android:id="@+id/et1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Your Name"
            android:layout_marginTop="30dp"/>

        <RadioGroup
            android:id="@+id/rg1"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_marginTop="20dp">

            <RadioButton
                android:id="@+id/r1"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:text="Red Color"/>

            <RadioButton
                android:id="@+id/r2"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:text="Blue Color"/>
        </RadioGroup>

        <CheckBox
            android:id="@+id/c1"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="Bold"/>

        <CheckBox
            android:id="@+id/c2"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="Italic"/>

        <CheckBox
            android:id="@+id/c3"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="Underline"/>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="DISPLAY"
            android:textStyle="bold"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="CLEAR"/>

        <Button
            android:id="@+id/b3"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="EXIT"/>

        <TextView
            android:id="@+id/t2"
            android:layout_width="match_parent"
            android:layout_height="80dp"
            android:text="Output"
            android:textSize="28sp"
            android:textStyle="bold"
            android:gravity="center"
            android:background="#FFFFFF"
            android:layout_marginTop="30dp"/>

    </LinearLayout>

</ScrollView>

// Q.2 

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
            android:text="Text Formatting App"
            android:textSize="26sp"
            android:textStyle="bold"
            android:textColor="#FFFFFF"
            android:gravity="center"
            android:background="#F57F17"/>

        <EditText
            android:id="@+id/et1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Enter Your Name"
            android:layout_marginTop="30dp"/>

        <RadioGroup
            android:id="@+id/rg1"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_marginTop="20dp">

            <RadioButton
                android:id="@+id/r1"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:text="Red Color"/>

            <RadioButton
                android:id="@+id/r2"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:text="Blue Color"/>
        </RadioGroup>

        <CheckBox
            android:id="@+id/c1"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="Bold"/>

        <CheckBox
            android:id="@+id/c2"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="Italic"/>

        <CheckBox
            android:id="@+id/c3"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="Underline"/>

        <Button
            android:id="@+id/b1"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="DISPLAY"
            android:textStyle="bold"
            android:layout_marginTop="20dp"/>

        <Button
            android:id="@+id/b2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="CLEAR"/>

        <Button
            android:id="@+id/b3"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="EXIT"/>

        <TextView
            android:id="@+id/t2"
            android:layout_width="match_parent"
            android:layout_height="80dp"
            android:text="Output"
            android:textSize="28sp"
            android:textStyle="bold"
            android:gravity="center"
            android:background="#FFFFFF"
            android:layout_marginTop="30dp"/>

    </LinearLayout>

</ScrollView>

// Q.2 Java : 

package com.example.textformat;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText et1;

    RadioButton r1, r2;

    CheckBox c1, c2, c3;

    Button b1, b2, b3;

    TextView t2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.et1);

        r1 = findViewById(R.id.r1);
        r2 = findViewById(R.id.r2);

        c1 = findViewById(R.id.c1);
        c2 = findViewById(R.id.c2);
        c3 = findViewById(R.id.c3);

        b1 = findViewById(R.id.b1);
        b2 = findViewById(R.id.b2);
        b3 = findViewById(R.id.b3);

        t2 = findViewById(R.id.t2);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String name =
                        et1.getText().toString();

                t2.setText("Hello " + name);

                // Color
                if(r1.isChecked()) {

                    t2.setTextColor(Color.RED);
                }

                if(r2.isChecked()) {

                    t2.setTextColor(Color.BLUE);
                }

                // Bold
                if(c1.isChecked()) {

                    t2.setTypeface(
                            null,
                            Typeface.BOLD);
                }

                // Italic
                if(c2.isChecked()) {

                    t2.setTypeface(
                            null,
                            Typeface.ITALIC);
                }

                // Underline
                if(c3.isChecked()) {

                    t2.setPaintFlags(
                            t2.getPaintFlags()
                                    | Paint.UNDERLINE_TEXT_FLAG);
                }
            }
        });

        // Clear Button
        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                et1.setText("");
                t2.setText("");

                c1.setChecked(false);
                c2.setChecked(false);
                c3.setChecked(false);

                r1.setChecked(false);
                r2.setChecked(false);
            }
        });

        // Exit Button
        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                finish();
            }
        });
    }
}