<h1>🔘 Switch Controlled LED Output - 8051</h1>

<p>This program reads the state of switches connected to Port 0 and mirrors the status to LEDs on Port 2 in real-time.</p>

<h2>💡 What It Does</h2>
<ul>
  <li>Reads 8 switches on Port 0.</li>
  <li>Displays their ON/OFF state through 8 LEDs on Port 2.</li>
</ul>

<h2>🛠 Hardware Interface</h2>
<ul>
  <li><strong>P0.0 - P0.7</strong>: Connected to 8 switches (pull-up configuration)</li>
  <li><strong>P2.0 - P2.7</strong>: Connected to 8 LEDs (with current limiting resistors)</li>
</ul>

<h2>🧰 Tools Used</h2>
<ul>
  <li>Keil µVision5</li>
  <li>AT89C51 Microcontroller</li>
  <li>Embedded C</li>
</ul>

<h2>⚙️ How It Works</h2>
<p>Switch inputs on Port 0 are directly written to Port 2 to control the LED state:</p>
<pre><code>led = sw;</code></pre>

<hr />
