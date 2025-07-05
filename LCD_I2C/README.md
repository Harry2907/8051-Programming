<h1>📟 Interfacing LCD 16x2 Using I2C EEPROM with 8051</h1>

<p>This project demonstrates how to interface a 16x2 alphanumeric LCD with the 8051 microcontroller using the I2C protocol via an external EEPROM (AT24C02-style). The project writes the string <code>8051</code> to the EEPROM and reads it back for display using serial terminal output.</p>

<h2>💡 Features</h2>
<ul>
  <li>Implements basic I2C communication with start, stop, read, and write operations.</li>
  <li>Writes 4 bytes to EEPROM and reads them back.</li>
  <li>Displays received data via UART (serial terminal).</li>
</ul>

<h2>🔌 Pin Connections</h2>
<table>
  <thead><tr><th>Signal</th><th>8051 Pin</th><th>Description</th></tr></thead>
  <tbody>
    <tr><td>SDA</td><td>P2.1</td><td>Serial Data Line (I2C)</td></tr>
    <tr><td>SCL</td><td>P2.0</td><td>Serial Clock Line (I2C)</td></tr>
    <tr><td>UART TX</td><td>P3.1</td><td>Connected to serial terminal (e.g., via USB-UART module)</td></tr>
  </tbody>
</table>

<h2>🧰 Tools Used</h2>
<ul>
  <li>Keil µVision5 (for development)</li>
  <li>AT89C51 Microcontroller (8051 architecture)</li>
  <li>Embedded C (Keil C Compiler)</li>
  <li>Serial Monitor (HyperTerminal, TeraTerm, or PuTTY)</li>
</ul>

<h2>🧠 Core Concepts Covered</h2>
<ul>
  <li>Bit-banging I2C protocol (manual clock and data control)</li>
  <li>EEPROM byte addressable read/write</li>
  <li>Serial communication using UART (9600 baud)</li>
</ul>

<h2>⚙️ Program Flow</h2>
<ol>
  <li>Initialize UART using Timer1 for 9600 baud.</li>
  <li>Use I2C functions to write the characters '8', '0', '5', '1' to EEPROM.</li>
  <li>Read the same bytes back using I2C read commands.</li>
  <li>Send the read characters over serial to display in terminal.</li>
</ol>

<h2>📦 Folder Contents</h2>
<ul>
  <li><code>LCD_I2C.c</code> – Main code with I2C and UART logic</li>
  <li><code>LCD_I2C.uvprojx</code> – Keil project file</li>
  <li><code>README.md</code> – This file</li>
</ul>

<hr>
<p><strong>📌 Note:</strong> Ensure pull-up resistors (~4.7kΩ) are used on SDA and SCL lines when using I2C in hardware.</p>
