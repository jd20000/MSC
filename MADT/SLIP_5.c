// // What is Alert Dialog Box?

// // Alert Dialog Box is used to display warning messages, confirmation messages, or important information to the user.

// // Example:

// // Exit confirmation
// // Delete confirmation

// // Testing : 
// // Output
// // Clicking button opens Alert Dialog.
// // YES → closes application.
// // NO → displays Toast message.

// // Q.2 : 
// // Output

// // Input:

// // First Name : Jay
// // Last Name  : Deshmukh

// // Selected:

// // Color = Red
// // Style = Bold + Underline

// // Output Label:

// // Jay Deshmukh

// // Displayed in:

// // Red Color
// // Bold
// // Underlined

// // Q.1 : 

// <?xml version="1.0" encoding="utf-8"?>
// <androidx.constraintlayout.widget.ConstraintLayout
//     xmlns:android="http://schemas.android.com/apk/res/android"
//     xmlns:app="http://schemas.android.com/apk/res-auto"
//     xmlns:tools="http://schemas.android.com/tools"
//     android:layout_width="match_parent"
//     android:layout_height="match_parent"
//     android:background="#E8F5E9"
//     tools:context=".MainActivity">

//     <Button
//         android:id="@+id/b1"
//         android:layout_width="220dp"
//         android:layout_height="70dp"
//         android:text="Show Alert Dialog"
//         android:textSize="20sp"
//         android:textStyle="bold"
//         app:layout_constraintTop_toTopOf="parent"
//         app:layout_constraintBottom_toBottomOf="parent"
//         app:layout_constraintStart_toStartOf="parent"
//         app:layout_constraintEnd_toEndOf="parent"/>

// </androidx.constraintlayout.widget.ConstraintLayout>

// Q.1 Java : 
// package com.example.alertdialog;

// import androidx.appcompat.app.AlertDialog;
// import androidx.appcompat.app.AppCompatActivity;

// import android.content.DialogInterface;
// import android.os.Bundle;
// import android.view.View;
// import android.widget.Button;
// import android.widget.Toast;

// public class MainActivity extends AppCompatActivity {

//     Button b1;

//     @Override
//     protected void onCreate(Bundle savedInstanceState) {
//         super.onCreate(savedInstanceState);
//         setContentView(R.layout.activity_main);

//         b1 = findViewById(R.id.b1);

//         b1.setOnClickListener(new View.OnClickListener() {
//             @Override
//             public void onClick(View v) {

//                 AlertDialog.Builder builder =
//                         new AlertDialog.Builder(MainActivity.this);

//                 builder.setTitle("Alert Dialog");

//                 builder.setMessage("Do you want to Exit?");

//                 builder.setPositiveButton("YES",
//                         new DialogInterface.OnClickListener() {
//                             @Override
//                             public void onClick(DialogInterface dialog, int which) {

//                                 finish();
//                             }
//                         });

//                 builder.setNegativeButton("NO",
//                         new DialogInterface.OnClickListener() {
//                             @Override
//                             public void onClick(DialogInterface dialog, int which) {

//                                 Toast.makeText(getApplicationContext(),
//                                         "Cancelled",
//                                         Toast.LENGTH_SHORT).show();
//                             }
//                         });

//                 builder.show();
//             }
//         });
//     }
// }


// Q.2 : 
// <?xml version="1.0" encoding="utf-8"?>
// <ScrollView xmlns:android="http://schemas.android.com/apk/res/android"
//     android:layout_width="match_parent"
//     android:layout_height="match_parent">

//     <LinearLayout
//         android:layout_width="match_parent"
//         android:layout_height="wrap_content"
//         android:orientation="vertical"
//         android:padding="20dp">

//         <EditText
//             android:id="@+id/et1"
//             android:layout_width="match_parent"
//             android:layout_height="wrap_content"
//             android:hint="Enter First Name"/>

//         <EditText
//             android:id="@+id/et2"
//             android:layout_width="match_parent"
//             android:layout_height="wrap_content"
//             android:hint="Enter Last Name"
//             android:layout_marginTop="10dp"/>

//         <RadioGroup
//             android:id="@+id/radioGroup"
//             android:layout_width="wrap_content"
//             android:layout_height="wrap_content"
//             android:layout_marginTop="20dp">

//             <RadioButton
//                 android:id="@+id/r1"
//                 android:layout_width="wrap_content"
//                 android:layout_height="wrap_content"
//                 android:text="Red"/>

//             <RadioButton
//                 android:id="@+id/r2"
//                 android:layout_width="wrap_content"
//                 android:layout_height="wrap_content"
//                 android:text="Blue"/>

//             <RadioButton
//                 android:id="@+id/r3"
//                 android:layout_width="wrap_content"
//                 android:layout_height="wrap_content"
//                 android:text="Green"/>
//         </RadioGroup>

//         <CheckBox
//             android:id="@+id/c1"
//             android:layout_width="wrap_content"
//             android:layout_height="wrap_content"
//             android:text="Bold"/>

//         <CheckBox
//             android:id="@+id/c2"
//             android:layout_width="wrap_content"
//             android:layout_height="wrap_content"
//             android:text="Italic"/>

//         <CheckBox
//             android:id="@+id/c3"
//             android:layout_width="wrap_content"
//             android:layout_height="wrap_content"
//             android:text="Underline"/>

//         <Button
//             android:id="@+id/b1"
//             android:layout_width="match_parent"
//             android:layout_height="wrap_content"
//             android:text="Display Message"
//             android:layout_marginTop="20dp"/>

//         <Button
//             android:id="@+id/b2"
//             android:layout_width="match_parent"
//             android:layout_height="wrap_content"
//             android:text="Clear"/>

//         <Button
//             android:id="@+id/b3"
//             android:layout_width="match_parent"
//             android:layout_height="wrap_content"
//             android:text="Exit"/>

//         <TextView
//             android:id="@+id/t1"
//             android:layout_width="match_parent"
//             android:layout_height="wrap_content"
//             android:text="Result"
//             android:textSize="28sp"
//             android:gravity="center"
//             android:layout_marginTop="30dp"/>

//     </LinearLayout>

// </ScrollView>
// Q.2 Java : 
// package com.example.textformatting;

// import androidx.appcompat.app.AppCompatActivity;

// import android.graphics.Color;
// import android.graphics.Paint;
// import android.graphics.Typeface;
// import android.os.Bundle;
// import android.view.View;
// import android.widget.Button;
// import android.widget.CheckBox;
// import android.widget.EditText;
// import android.widget.RadioButton;
// import android.widget.TextView;

// public class MainActivity extends AppCompatActivity {

//     EditText et1, et2;
//     RadioButton r1, r2, r3;
//     CheckBox c1, c2, c3;
//     Button b1, b2, b3;
//     TextView t1;

//     @Override
//     protected void onCreate(Bundle savedInstanceState) {
//         super.onCreate(savedInstanceState);
//         setContentView(R.layout.activity_main);

//         et1 = findViewById(R.id.et1);
//         et2 = findViewById(R.id.et2);

//         r1 = findViewById(R.id.r1);
//         r2 = findViewById(R.id.r2);
//         r3 = findViewById(R.id.r3);

//         c1 = findViewById(R.id.c1);
//         c2 = findViewById(R.id.c2);
//         c3 = findViewById(R.id.c3);

//         b1 = findViewById(R.id.b1);
//         b2 = findViewById(R.id.b2);
//         b3 = findViewById(R.id.b3);

//         t1 = findViewById(R.id.t1);

//         b1.setOnClickListener(new View.OnClickListener() {
//             @Override
//             public void onClick(View v) {

//                 String msg =
//                         et1.getText().toString() + " " +
//                         et2.getText().toString();

//                 t1.setText(msg);

//                 if(r1.isChecked()) {
//                     t1.setTextColor(Color.RED);
//                 }

//                 if(r2.isChecked()) {
//                     t1.setTextColor(Color.BLUE);
//                 }

//                 if(r3.isChecked()) {
//                     t1.setTextColor(Color.GREEN);
//                 }

//                 if(c1.isChecked()) {
//                     t1.setTypeface(null, Typeface.BOLD);
//                 }

//                 if(c2.isChecked()) {
//                     t1.setTypeface(null, Typeface.ITALIC);
//                 }

//                 if(c3.isChecked()) {
//                     t1.setPaintFlags(
//                             t1.getPaintFlags() |
//                             Paint.UNDERLINE_TEXT_FLAG);
//                 }
//             }
//         });

//         b2.setOnClickListener(new View.OnClickListener() {
//             @Override
//             public void onClick(View v) {

//                 et1.setText("");
//                 et2.setText("");
//                 t1.setText("");
//             }
//         });

//         b3.setOnClickListener(new View.OnClickListener() {
//             @Override
//             public void onClick(View v) {

//                 finish();
//             }
//         });
//     }
// }