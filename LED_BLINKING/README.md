<h1>🔴 LED Blinking on 8051 (AT89C51)</h1>

<p>This program demonstrates a simple LED blinking pattern using Port 2 of the 8051 microcontroller (AT89C51). It is a foundational embedded C example.</p>

<h2>💡 What It Does</h2>
<ul>
  <li>Continuously turns all LEDs ON and OFF on Port 2 with a basic delay loop.</li>
</ul>

<h2>🛠 Hardware Interface</h2>
<ul>
  <li><strong>Port 2 (P2.0 - P2.7)</strong> connected to 8 LEDs.</li>
  <li>Common cathode LEDs with 330Ω resistors to GND.</li>
</ul>

<h2>🧰 Tools Used</h2>
<ul>
  <li>Keil µVision5</li>
  <li>AT89C51 Microcontroller (8051 architecture)</li>
  <li>Embedded C</li>
</ul>

<h2>⚙️ How It Works</h2>
<pre><code>led = 0x00;  // All LEDs ON
delay();
led = 0xFF;  // All LEDs OFF
delay();
</code></pre>

<h2>📝 Delay Logic</h2>
<p>A simple <code>for</code> loop simulates the delay.</p>

<hr />
