var a11, a12, a13, a14, a1s, a1d;
var a21, a22, a23, a24, a2s, a2d;
var a31, a32, a33, a34, a3s, a3d;
var a41, a42, a43, a44, a4s, a4d;
var Alphabet = new Array("A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z");
var Maps2Name = new Array("I","II","III","IV","V","VI","VII","VIII","IX","X",
                          "XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX",
						  "XXI","XXII","XXIII","XXIV","XXV","XXVI","XXVII","XXVIII","XXIX","XXX",
						  "XXXI","XXXII","XXXIII","XXXIV","XXXV","XXXVI");

function ViewResult()
{
 var st = "";
 if( a11 == false && a12 == false && a1s == false && a1d == false && 
     a21 == false && a22 == false && a2s == false && a2d == false && 
     a31 == false && a32 == false && a3s == false && a3d == false )
	 {
         st += "";
	 }
 else st += "На границе номенклатурных листов ";
 if( a11 != false && a12 != false && a1s != false && a1d != false )
 {
  st += a11 + "-" + a12.toString(10);
  if( a13 != false )
  {
   st += "-" + a13;
   if( a14 != false ) st += "-" + a14;  
  }  
  if( a1s == "ю" ) st += "(ю.п.)";
  st += ", ";
 }
 if( a21 != false && a22 != false && a2s != false && a2d != false )
 {
  st += a21 + "-" + a22.toString(10);
  if( a23 != false )
  {
   st += "-" + a23;
   if( a24 != false ) st += "-" + a24;  
  }  
  if( a2s == "ю" ) st += "(ю.п.)";
  st += ", ";
 }
 if( a31 != false && a32 != false && a3s != false && a3d != false )
 {
  st += a31 + "-" + a32.toString(10);
  if( a33 != false )
  {
   st += "-" + a33;
   if( a34 != false ) st += "-" + a34;  
  }  
  if( a3s == "ю" ) st += "(ю.п.)";
  st += " и ";
 }
 st += a41 + "-" + a42.toString(10);
 if( a43 != false )
 {
  st += "-" + a43;
  if( a44 != false ) st += "-" + a44;  
 }  
 if( a4s == "ю" ) st += "(ю.п.)";
 document.getElementById('result_text').innerHTML = st;
}

function FourMaps10(obj,d1n,d2n,d3n,s1n,s2n,s3n)
{
 var i;

 if( obj.s4.value == 0 ) { a1s = a2s = a3s = a4s = "с"; } else { a1s = a2s = a3s = a4s = "ю"; };
 if( obj.d4.value == 0 ) { a1d = a2d = a3d = a4d = "в"; } else { a1d = a2d = a3d = a4d = "з"; };

 if( s1n == 0 ) { a11 = a21 = a31 = a41 = "A"; a1s = a2s = "с"; a3s = a4s = "ю"; } 
 for( i = 4; i < 90; i += 4 )
  if( s1n == i ) { a11 = a21 = Alphabet[i/4]; a31 = a41 = Alphabet[i/4-1]; } 
 
 for( i = 1; i < 30; i++ )
  if( d1n == i*6 ) { a12 = a32 = i+30; a22 = a42 = i+31; }

 if( d1n == 0 ) { a12 = a32 = 30; a22 = a42 = 31; a1d = a3d = "з"; a2d = a4d = "в"; }
 if( d1n == 180 ) { a12 = a32 = 60; a22 = a42 = 1; a1d = a3d = "в"; a2d = a4d = "з"; }

 if( obj.s4.value != 0 ) { var a = a11; a11 = a21 = a31; a31 = a41 = a; }
 if( obj.d4.value != 0 ) { var a = a12; a12 = a32 = a22; a22 = a42 = a; }
 
 if( obj.m1.value == 4 ) { a13 = a23 = a33 = a43 = false; }
 if( obj.m1.value == 3 ) { a13 = "Г"; a23 = "В"; a33 = "Б"; a43 = "А"; }
 if( obj.m1.value == 2 ) { a13 = "XXXVI"; a23 = "XXXI"; a33 = "VI"; a43 = "I"; }
 if( obj.m1.value == 1 ) { a13 = "144"; a23 = "133"; a33 = "12"; a43 = "1"; }
 if( obj.m1.value == 0 ) { a13 = "144"; a14 = "Г"; a23 = "133"; a24 = "В"; a33 = "12"; a34 = "Б"; a43 = "1"; a44 = "А"; }
}

function TwoMapsS10(obj,d1n,d2n,d3n,s1n,s2n,s3n)
{
 var i;

 if( obj.s4.value == 0 ) { a3s = a4s = "с"; } else { a3s = a4s = "ю"; };
 if( obj.d4.value == 0 ) { a3d = a4d = "в"; } else { a3d = a4d = "з"; };
 
 if( s1n == 0 ) { a31 = a41 = "A"; a3s = "с"; a4s = "ю"; } 
 for( i = 4; i < 90; i += 4 )
  if( s1n == i ) { a31 = Alphabet[i/4]; a41 = Alphabet[i/4-1]; } 

 for( i = 0; i < 30; i++ )
 {
  if( d1n >= i*6 && d1n < (i+1)*6 ) { a32 = a42 = i+31; }
 }
 
 if( obj.s4.value != 0 ) { var a = a31; a31 = a41; a41 = a; }
 
 if( obj.m1.value == 4 ) { a33 = a43 = false; }
 if( obj.m1.value == 3 )
 {
  if( d1n % 6 >= 0 && d1n % 6 < 3 ) { if( obj.d4.value == 0 ) { a33 = "В"; a43 = "А"; } else { a33 = "Г"; a43 = "Б"; } }
  else if( d1n % 6 == 3 && d2n == 0 && d3n == 0 )
  {
   a11 = a21 = a31; a12 = a22 = a32; a1s = a2s = a3s; a1d = a2d = a3d;
   a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
   a13 = "В"; a23 = "Г"; a33 = "А"; a43 = "Б";
  }
  else { if( obj.d4.value == 0 ) { a33 = "Г"; a43 = "Б"; } else { a33 = "В"; a43 = "А"; } }
 }
 if( obj.m1.value == 2 )
 {
  for( i = 0; i < 6; i++ )
   if( d1n % 6 == i )
   {
    if( d2n > 0 || d3n > 0 )
    {
	 if( obj.d4.value == 0 ) { a33 = Maps2Name[i+30]; a43 = Maps2Name[i]; }
	 else { a33 = Maps2Name[(6-i)+29]; a43 = Maps2Name[(6-i)-1]; }
	}
    else
    {
     a11 = a21 = a31; a12 = a22 = a32; a1s = a2s = a3s; a1d = a2d = a3d;
     a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
	 if( obj.d4.value == 0 ) { a13 = Maps2Name[i+29]; a23 = Maps2Name[i+30]; a33 = Maps2Name[i-1]; a43 = Maps2Name[i]; }
	 else { a13 = Maps2Name[(6-i)+29]; a23 = Maps2Name[(6-i)+30]; a33 = Maps2Name[(6-i)-1]; a43 = Maps2Name[6-i]; }
    }
   }
 }
 if( obj.m1.value == 1 || obj.m1.value == 0 )
 {
  var k = ( d1n % 6 ) * 60 + d2n;
  var a;
  for( i = 0; i < 360; i += 30 )
  {
   var k1;
   if( obj.d4.value == 0 ) k1 = i / 30;
   else k1 = 12 - ( i / 30 );
   if( ( k > i && k < i + 30 ) || ( k == i && d3n > 0 ) )
   {
    if( obj.d4.value == 0 ) { a = k1 + 133; a33 = a.toString(10); a = k1 + 1; a43 = a.toString(10); }
	else { a = k1 + 132; a33 = a.toString(10); a = k1; a43 = a.toString(10); }
	
    if( obj.m1.value == 0 )
	{
     if( k % 30 >= 0 && k % 30 < 15 ) { if( obj.d4.value == 0 ) { a34 = "В"; a44 = "А"; } else { a34 = "Г"; a44 = "Б"; } } 
     else if( k % 30 == 15 && d3n == 0 )
	 {
      a11 = a21 = a31; a12 = a22 = a32; a13 = a23 = a33; a1s = a2s = a3s; a1d = a2d = a3d;
      a31 = a41; a32 = a42; a33 = a43; a3s = a4s; a3d = a4d;
	  a14 = "В"; a24 = "Г"; a34 = "А"; a44 = "Б";
	 }
	 else { if( obj.d4.value == 0 ) { a34 = "Г"; a44 = "Б"; } else { a34 = "В"; a44 = "А"; } }
	}
   }
   if( i > 0 && k == i && d3n == 0 )
   {
    a11 = a21 = a31; a12 = a22 = a32; a1s = a2s = a3s; a1d = a2d = a3d;
    a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
    a = k1 + 132; a13 = a.toString(10); a = k1 + 133; a23 = a.toString(10);
    a = k1 + 0; a33 = a.toString(10); a = k1 + 1; a43 = a.toString(10);
    if( obj.m1.value == 0 ) { a14 = "Г"; a24 = "В"; a34 = "Б"; a44 = "А"; }
   }
  }
 }
}

function TwoMapsD10(obj,d1n,d2n,d3n,s1n,s2n,s3n)
{
 var i;

 if( obj.s4.value == 0 ) { a3s = a4s = "с"; } else { a3s = a4s = "ю"; };
 if( obj.d4.value == 0 ) { a3d = a4d = "в"; } else { a3d = a4d = "з"; };

 for( i = 0; i < 88; i += 4 )
  if( s1n >= i && s1n < i + 4 ) { a31 = a41 = Alphabet[i/4]; } 
 if( s1n >= 88 && s1n < 90 ) { a31 = a41 = "W"; }

 for( i = 1; i < 30; i++ )
 {
  if( d1n == i*6 ) { a32 = i+30; a42 = i+31; }
 }
 if( d1n == 0 ) { a32 = 30; a42 = 31; a3d = "з"; a4d = "в"; }
 if( d1n == 180 ) { a32 = 60; a42 = 1; a3d = "в"; a4d = "з"; }
 
 if( obj.d4.value != 0 ) { var a = a32; a32 = a42; a42 = a; }

 if( obj.m1.value == 4 ) { a33 = a43 = false; }
 if( obj.m1.value == 3 )
 {
  if( s1n % 4 >= 0 && s1n % 4 < 2 )
  {
   if( obj.s4.value == 0 ) { a33 = "Г"; a43 = "В"; }
   else { a33 = "Б"; a43 = "А"; }
  }
  else if( s1n % 4 == 2 && s2n == 0 && s3n == 0 )
  {
   a11 = a31; a12 = a32; a1s = a3s; a1d = a3d;
   a21 = a41; a22 = a42; a2s = a4s; a2d = a4d;
   a13 = "Б"; a23 = "А"; a33 = "Г"; a43 = "В";
  }
  else
  {
   if( obj.s4.value == 0 ) { a33 = "Б"; a43 = "А"; }
   else { a33 = "Г"; a43 = "В"; }
  }
 }
 if( obj.m1.value == 2 )
 {
  var k = ( s1n % 4 ) * 60 + s2n;
  for( i = 0; i < 240; i += 40 )
  {
   var k1;
   if( obj.s4.value == 0 ) k1 = ((240-i)/40)*6;
   else k1 = (i/40)*6;
   if( ( k > i && k < i + 40 ) || ( k == i && s3n > 0 ) )
   {
    if( obj.s4.value == 0 ) { a33 = Maps2Name[k1-1]; a43 = Maps2Name[k1-6]; }
	else { a33 = Maps2Name[k1+5]; a43 = Maps2Name[k1]; }
   }
   if( i > 0 && k == i && s3n == 0 )
   {
    a11 = a31; a12 = a32; a1s = a3s; a1d = a3d;
    a21 = a41; a22 = a42; a2s = a4s; a2d = a4d;
    a13 = Maps2Name[k1-1]; a23 = Maps2Name[k1-6];
    a33 = Maps2Name[k1+5]; a43 = Maps2Name[k1];
   }
  }
 }
 if( obj.m1.value == 1 || obj.m1.value == 0 )
 {
  var k = ( s1n % 4 ) * 60 + s2n;
  var a;
  for( i = 0; i < 240; i += 20 )
  {
   var k1;
   if( obj.s4.value == 0 ) k1 = ( ( 240 - i ) / 20 - 1 ) * 12;
   else k1 = ( i / 20 ) * 12;
   if( ( k > i && k < i + 20 ) || ( k == i && s3n > 0 ) )
   {
    a = k1 + 12; a33 = a.toString(10);
	a = k1 + 1; a43 = a.toString(10);
    if( obj.m1.value == 0 )
	{
     if( k % 20 >= 0 && k % 20 < 10 )
	 {
	  if( obj.s4.value == 0 ) { a34 = "Г"; a44 = "В"; }
	  else { a34 = "Б"; a44 = "А"; }
	 }
     else if( k % 20 == 10 && s3n == 0 )
	 {
      a11 = a31; a12 = a32; a13 = a33; a1s = a3s; a1d = a3d;
      a21 = a41; a22 = a42; a23 = a43; a2s = a4s; a2d = a4d;
	  a14 = "Б"; a24 = "А"; a34 = "Г"; a44 = "В";
	 }
	 else
	 {
	  if( obj.s4.value == 0 ) { a34 = "Б"; a44 = "А"; }
	  else { a34 = "Г"; a44 = "В"; }
	 }
	}
   }
   if( i > 0 && k == i && s3n == 0 )
   {
    a11 = a31; a12 = a32; a1s = a3s; a1d = a3d;
    a21 = a41; a22 = a42; a2s = a4s; a2d = a4d;
	if( obj.s4.value != 0 ) k1 -= 12;
    a = k1 + 12; a13 = a.toString(10);
	a = k1 + 1; a23 = a.toString(10);
    a = k1 + 24; a33 = a.toString(10);
	a = k1 + 13; a43 = a.toString(10);
    if( obj.m1.value == 0 ) { a14 = "Г"; a24 = "В"; a34 = "Б"; a44 = "А"; }
   }
  }
 }
}

function Maps5(obj,d1n,d2n,d3n,s1n,s2n,s3n)
{
 if( d1n % 6 >= 0 && d1n % 6 < 3 )
 {
  if( s1n % 4 >= 0 && s1n % 4 < 2 )
  {
   if( obj.d4.value == 0 ) { if( obj.s4.value == 0 ) a43 = "В"; else a43 = "А"; }
   else { if( obj.s4.value == 0 ) a43 = "Г"; else a43 = "Б"; }
  }
  else if( s1n % 4 == 2 && s2n == 0 && s3n == 0 )
  {
   a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
   if( obj.d4.value == 0 ) { a33 = "А"; a43 = "В"; }
   else { a33 = "Б"; a43 = "Г"; }
  }
  else
  {
   if( obj.d4.value == 0 ) { if( obj.s4.value == 0 ) a43 = "А"; else a43 = "В"; }
   else { if( obj.s4.value == 0 ) a43 = "Б"; else a43 = "Г"; }
  }
 }
 else if( d1n % 6 == 3 && d2n == 0 && d3n == 0 )
 {
  if( s1n % 4 >= 0 && s1n % 4 < 2 )
  {
   a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
   if( obj.s4.value == 0 ) { a33 = "В"; a43 = "Г"; }
   else { a33 = "А"; a43 = "Б"; }
  }
  else if( s1n % 4 == 2 && s2n == 0 && s3n == 0 )
  {
   a11 = a21 = a31 = a41; a12 = a22 = a32 = a42; a1s = a2s = a3s = a4s; a1d = a2d = a3d = a4d;
   a13 = "А"; a23 = "Б"; a33 = "В"; a43 = "Г";
  }
  else
  {
   a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
   if( obj.s4.value == 0 ) { a33 = "А"; a43 = "Б"; }
   else { a33 = "В"; a43 = "Г"; }
  }
 }
 else
 {
  if( s1n % 4 >= 0 && s1n % 4 < 2 )
  {
   if( obj.d4.value == 0 ) { if( obj.s4.value == 0 ) a43 = "Г"; else a43 = "Б"; }
   else { if( obj.s4.value == 0 ) a43 = "В"; else a43 = "А"; }
  }
  else if( s1n % 4 == 2 && s2n == 0 && s3n == 0 )
  {
   a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
   if( obj.d4.value == 0 ) { a33 = "Б"; a43 = "Г"; }
   else { a33 = "А"; a43 = "В"; }
  }
  else
  {
   if( obj.d4.value == 0 ) { if( obj.s4.value == 0 ) a43 = "Б"; else a43 = "Г"; }
   else { if( obj.s4.value == 0 ) a43 = "А"; else a43 = "В"; }
  }
 }
}

function Maps2(obj,d1n,d2n,d3n,s1n,s2n,s3n)
{
 var i, j;
 var k = ( s1n % 4 ) * 60 + s2n;

 for( i = 0; i < 6; i++ )
 {
  for( j = 0; j < 240; j += 40 )
  {
   var k1, k2;
   if( obj.s4.value == 0 ) k1 = ((240-j)/40)*6; else k1 = (j/40)*6;
   if( obj.d4.value == 0 ) k2 = i; else k2 = ( 6 - i );
   if( d1n % 6 == i )
   {
    if( d2n > 0 || d3n > 0 )
    {
     if( obj.d4.value != 0 ) k2 -=1;
     if( ( k > j && k < j + 40 ) || ( k == j && s3n > 0 ) )
     {
      if( obj.s4.value == 0 ) k1 -=6;
	  a43 = Maps2Name[k2+k1];
     }
     if( j > 0 && k == j && s3n == 0 )
     {
      a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
      a33 = Maps2Name[k2+k1-6]; a43 = Maps2Name[k2+k1];
     }
    }
    else
    {
     a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
     if( ( k > j && k < j + 40 ) || ( k == j && s3n > 0 ) )
     {
      if( obj.s4.value == 0 ) { a33 = Maps2Name[k2+k1-7]; a43 = Maps2Name[k2+k1-6]; }
      else { a33 = Maps2Name[k2+k1-1]; a43 = Maps2Name[k2+k1]; }
     }
     if( j > 0 && k == j && s3n == 0 )
     {
      a11 = a21 = a31; a12 = a22 = a32; a1s = a2s = a3s; a1d = a2d = a3d;
      a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
      a13 = Maps2Name[k2+k1-7]; a23 = Maps2Name[k2+k1-6];
      a33 = Maps2Name[k2+k1-1]; a43 = Maps2Name[k2+k1];
     }
    }
   }
  }
 }
}

function Maps1(obj,d1n,d2n,d3n,s1n,s2n,s3n)
{
 var kd = ( d1n % 6 ) * 60 + d2n;
 var ks = ( s1n % 4 ) * 60 + s2n;
 var a, i, j;
 for( i = 0; i < 360; i += 30 )
 {
  for( j = 0; j < 240; j += 20 )
  {
   var k1, k2;
   if( obj.s4.value == 0 ) k1 = ( ( 240 - j ) / 20 - 1 ) * 12;
   else k1 = ( j / 20 ) * 12;
   if( obj.d4.value == 0 ) k2 = i / 30;
   else k2 = 12 - ( i / 30 ) - 1;
   if( ( kd > i && kd < i + 30 ) || ( kd == i && d3n > 0 ) )
   {
    if( ( ks > j && ks < j + 20 ) || ( ks == j && s3n > 0 ) )
    {
     a = k2 + k1 + 1; a43 = a.toString(10);
     if( obj.m1.value == 0 )
	 {
      if( kd % 30 >= 0 && kd % 30 < 15 )
	  {
       if( ks % 20 >= 0 && ks % 20 < 10 )
	   {
        if( obj.d4.value == 0 ) { if( obj.s4.value == 0 ) a44 = "В"; else a44 = "А"; }
        else { if( obj.s4.value == 0 ) a44 = "Г"; else a44 = "Б"; }
       }
       else if( ks % 20 == 10 && s3n == 0 )
	   {
        a31 = a41; a32 = a42; a33 = a43; a3s = a4s; a3d = a4d;
        if( obj.d4.value == 0 ) { a34 = "А"; a44 = "В"; }
        else { a34 = "Б"; a44 = "Г"; }
       }
       else
	   {
        if( obj.d4.value == 0 ) { if( obj.s4.value == 0 ) a44 = "А"; else a44 = "В"; }
        else { if( obj.s4.value == 0 ) a44 = "Б"; else a44 = "Г"; }
	   }
	  }
      else if( kd % 30 == 15 && d3n == 0 )
	  {
       a31 = a41; a32 = a42; a33 = a43; a3s = a4s; a3d = a4d;
       if( ks % 20 >= 0 && ks % 20 < 10 ) { if( obj.s4.value == 0 ) { a34 = "В"; a44 = "Г"; } else { a34 = "А"; a44 = "Б"; } }
       else if( ks % 20 == 10 && s3n == 0 )
	   {
        a11 = a21 = a31; a12 = a22 = a32; a13 = a23 = a33; a1s = a2s = a3s; a1d = a2d = a3d;
        a14 = "А"; a24 = "Б"; a34 = "В"; a44 = "Г";
       }
       else { if( obj.s4.value == 0 ) { a34 = "А"; a44 = "Б"; } else { a34 = "В"; a44 = "Г"; } }
	  }
	  else
	  {
       if( ks % 20 >= 0 && ks % 20 < 10 )
	   {
        if( obj.d4.value == 0 ) { if( obj.s4.value == 0 ) a44 = "Г"; else a44 = "Б"; }
        else { if( obj.s4.value == 0 ) a44 = "В"; else a44 = "А"; }
       }
       else if( ks % 20 == 10 && s3n == 0 )
	   {
        a31 = a41; a32 = a42; a33 = a43; a3s = a4s; a3d = a4d;
        if( obj.d4.value == 0 ) { a34 = "Б"; a44 = "Г"; }
        else { a34 = "А"; a44 = "В"; }
       }
       else
	   {
        if( obj.d4.value == 0 ) { if( obj.s4.value == 0 ) a44 = "Б"; else a44 = "Г"; }
        else { if( obj.s4.value == 0 ) a44 = "А"; else a44 = "В"; }
	   }
	  }
     }
    }
    if( j > 0 && ks == j && s3n == 0 )
    {
	 if( obj.s4.value != 0 ) k1 -= 12;
     a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
     a = k2 + k1 + 1; a33 = a.toString(10);
     a = k2 + k1 + 13; a43 = a.toString(10);
     if( obj.m1.value == 0 )
	 {
      if( kd % 30 >= 0 && kd % 30 < 15 ) { if( obj.d4.value == 0 ) { a34 = "В"; a44 = "А"; } else { a34 = "Г"; a44 = "Б"; } }
      else if( kd % 30 == 15 && d3n == 0 )
	  {
       a11 = a21 = a31; a12 = a22 = a32; a13 = a23 = a33; a1s = a2s = a3s; a1d = a2d = a3d;
       a31 = a41; a32 = a42; a33 = a43; a3s = a4s; a3d = a4d;
	   a14 = "В"; a24 = "Г"; a34 = "А"; a44 = "Б";
	  }
	  else { if( obj.d4.value == 0 ) { a34 = "Г"; a44 = "Б"; } else { a34 = "В"; a44 = "А"; } }
	 }
    }
   }
   if( i > 0 && kd == i && d3n == 0 )
   {
    a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
	if( obj.d4.value != 0 ) k2 += 1;
    if( ( ks > j && ks < j + 20 ) || ( ks == j && s3n > 0 ) )
    {
     a = k2 + k1; a33 = a.toString(10);
     a = k2 + k1 + 1; a43 = a.toString(10);
     if( obj.m1.value == 0 )
	 {
      if( ks % 20 >= 0 && ks % 20 < 10 ) { if( obj.s4.value == 0 ) { a34 = "Г"; a44 = "В"; } else { a34 = "Б"; a44 = "А"; } }
      else if( ks % 20 == 10 && s3n == 0 )
	  {
       a11 = a31; a12 = a32; a13 = a33; a1s = a3s; a1d = a3d;
       a21 = a41; a22 = a42; a23 = a43; a2s = a4s; a2d = a4d;
       a14 = "Б"; a24 = "А"; a34 = "Г"; a44 = "В";
      }
      else { if( obj.s4.value == 0 ) { a34 = "Б"; a44 = "А"; } else { a34 = "Г"; a44 = "В"; } }
	 }
    }
    if( j > 0 && ks == j && s3n == 0 )
    {
     if( obj.s4.value != 0 ) k1 -= 12;
     a11 = a21 = a31; a12 = a22 = a32; a1s = a2s = a3s; a1d = a2d = a3d;
     a31 = a41; a32 = a42; a3s = a4s; a3d = a4d;
     a = k2 + k1; a13 = a.toString(10);
     a = k2 + k1 + 1; a23 = a.toString(10);
     a = k2 + k1 + 12; a33 = a.toString(10);
     a = k2 + k1 + 13; a43 = a.toString(10);
     if( obj.m1.value == 0 ) { a14 = "Г"; a24 = "В"; a34 = "Б"; a44 = "А"; }
	}
   }
  }
 }
}

function SearchClick(obj)
{
 var i;
 var d1n, d2n, d3n, s1n, s2n, s3n;

 a11 = a12 = a13 = a14 = a1s = a1d = false; 
 a21 = a22 = a23 = a24 = a2s = a2d = false;
 a31 = a32 = a33 = a34 = a3s = a3d = false; 
 a41 = a42 = a43 = a44 = a4s = a4d = false;

 if( obj.d1.value == "" || obj.d1.value == "-0" || obj.d1.value == "-00" || obj.d1.value == "+0" || obj.d1.value == "+00" ) obj.d1.value = "0";
 if( obj.d2.value == "" || obj.d2.value == "-0" || obj.d2.value == "+0" ) obj.d2.value = "00";
 if( obj.d3.value == "" || obj.d3.value == "-0" || obj.d3.value == "+0" ) obj.d3.value = "00";
 if( obj.s1.value == "" || obj.s1.value == "-0" || obj.s1.value == "+0" ) obj.s1.value = "0";
 if( obj.s2.value == "" || obj.s2.value == "-0" || obj.s2.value == "+0" ) obj.s2.value = "00";
 if( obj.s3.value == "" || obj.s3.value == "-0" || obj.s3.value == "+0" ) obj.s3.value = "00";
 if( obj.d2.value.length == 1 ) obj.d2.value = "0" + obj.d2.value;
 if( obj.d3.value.length == 1 ) obj.d3.value = "0" + obj.d3.value;
 if( obj.s2.value.length == 1 ) obj.s2.value = "0" + obj.s2.value;
 if( obj.s3.value.length == 1 ) obj.s3.value = "0" + obj.s3.value;
 d1n = obj.d1.value*1;
 d2n = obj.d2.value*1;
 d3n = obj.d3.value*1;
 s1n = obj.s1.value*1;
 s2n = obj.s2.value*1;
 s3n = obj.s3.value*1;
 
 if( ( isNaN(d1n) == true ) || ( isNaN(d2n) == true ) || ( isNaN(d3n) == true ) || 
     ( isNaN(s1n) == true ) || ( isNaN(s2n) == true ) || ( isNaN(s3n) == true ) 
	    ||
     ( s1n == 90 && ( s2n > 0 || s3n > 0 ) ) || ( s1n > 90 ) ||
     ( d1n == 180 && ( d2n > 0 || d3n > 0 ) ) || ( d1n > 180 )
	    ||
	 ( s2n > 59 ) || ( s3n > 59 ) || ( d2n > 59 ) || ( d3n > 59 )
	    ||
     ( s1n < 0 ) || ( s2n < 0 ) || ( s3n < 0 ) || ( d1n < 0 ) || ( d2n < 0 ) || ( d3n < 0 ) )
	    { document.getElementById('result_text').innerHTML = "Неправильно введены координаты"; return; }

 for( i = 0; i < 88; i += 4 )
  if( ( s1n > i && s1n < i + 4 ) || ( s1n == i && ( s2n > 0 || s3n > 0 ) ) ) a41 = Alphabet[i/4]; 
 if( ( s1n > 88 && s1n < 90 ) || ( s1n == 88 && ( s2n > 0 || s3n > 0 ) ) ) a41 = "W";

 for( i = 0; i < 30; i++ )
 {
  if( ( d1n > i*6 && d1n < (i+1)*6 ) || ( d1n == i*6 && ( d2n > 0 || d3n > 0 ) ) ) a42 = i+31;
 }

 if( s1n == 90 )
 {
  if( obj.s4.value == 0 ) document.getElementById('result_text').innerHTML = "Северный полюс";
  else document.getElementById('result_text').innerHTML = "Южный полюс";
  return;
 }
 else if( a41 == false && a42 == false ) FourMaps10(obj,d1n,d2n,d3n,s1n,s2n,s3n);
 else if( a41 == false ) TwoMapsS10(obj,d1n,d2n,d3n,s1n,s2n,s3n);
 else if( a42 == false ) TwoMapsD10(obj,d1n,d2n,d3n,s1n,s2n,s3n);
 else
 {
  if( obj.s4.value == 0 ) a4s = "с"; else a4s = "ю";
  if( obj.d4.value == 0 ) a4d = "в"; else a4d = "з";
  
  if( obj.m1.value == 3 ) Maps5(obj,d1n,d2n,d3n,s1n,s2n,s3n);
  if( obj.m1.value == 2 ) Maps2(obj,d1n,d2n,d3n,s1n,s2n,s3n);
  if( obj.m1.value == 1 || obj.m1.value == 0 ) Maps1(obj,d1n,d2n,d3n,s1n,s2n,s3n);
 }
 ViewResult(obj);
}