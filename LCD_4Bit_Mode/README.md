<h1>📺 16x2 LCD Interfacing (4-Bit Mode) - 8051</h1>

<p>This project demonstrates how to interface a 16x2 alphanumeric LCD in 4-bit mode with the 8051 microcontroller (AT89C51).</p>

<h2>💡 What It Does</h2>
<ul>
  <li>Displays "Hello" on the first line and "ESD" on the second line of the LCD.</li>
  <li>Uses only 4 data lines to reduce GPIO usage.</li>
</ul>

<h2>🛠 Hardware Interface</h2>
<ul>
  <li><strong>Data Pins (D4-D7)</strong>: Connected to upper nibble of Port 0</li>
  <li><strong>RS</strong>: P0.0</li>
  <li><strong>RW</strong>: P0.1</li>
  <li><strong>EN</strong>: P0.2</li>
</ul>

<h2>🧰 Tools Used</h2>
<ul>
  <li>Keil µVision5</li>
  <li>AT89C51 Microcontroller</li>
  <li>Embedded C</li>
</ul>

<h2>⚙️ How It Works</h2>
<p>The LCD is initialized in 4-bit mode, and data is sent in two nibbles (upper, then lower). Characters are written one at a time.</p>

<pre><code>lcd_cmd(0x28);  // Function Set: 4-bit, 2 lines
lcd_cmd(0x0C);  // Display ON, Cursor OFF
lcd_cmd(0x06);  // Increment cursor
lcd_cmd(0x01);  // Clear display

// Write "Hello" on line 1, then "ESD" on line 2
</code></pre>

<h2>📦 Output</h2>
<ul>
  <li>Line 1: <code>Hello</code></li>
  <li>Line 2: <code>ESD</code></li>
</ul>

<hr />
