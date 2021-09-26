<h1 class="code-line" data-line-start=0 data-line-end=1 ><a id="Intel_x86_assembler_0"></a>Intel x86 assembler</h1>
<p class="has-line-data" data-line-start="1" data-line-end="2"><a href="mailto:the-scientist@rootstorm.com">the-scientist@rootstorm.com</a></p>
<h3 class="code-line" data-line-start=3 data-line-end=4 ><a id="syntax_3"></a>syntax:</h3>
<p class="has-line-data" data-line-start="5" data-line-end="9">Decimal “integers begin with a non-zero digit followed by zero or more decimal digits (0–9)”<br>
Binary “integers begin with “0b” or “0B” followed by zero or more binary digits (0, 1)”<br>
Octal “integers begin with zero (0) followed by zero or more octal digits (0–7)”<br>
Hexadecimal “integers begin with “0x” or “0X” followed by one or more hexadecimal digits (0–9, A–F)”</p>
<p class="has-line-data" data-line-start="10" data-line-end="13">mov BYTE  PTR [ebx], 2  “Move 2 into the single byte at the address stored in EBX”<br>
mov WORD  PTR [ebx], 2  “Move the 16-bit integer representation of 2 into the 2 bytes starting at the address in EBX”<br>
mov DWORD PTR [ebx], 2  “Move the 32-bit integer representation of 2 into the 4 bytes starting at the address in EBX”</p>
<p class="has-line-data" data-line-start="14" data-line-end="23">&lt;reg32&gt; “Any 32-bit register (EAX, EBX, ECX, EDX, ESI, EDI, ESP, or EBP)”<br>
&lt;reg16&gt; “Any 16-bit register (AX, BX, CX, or DX)”<br>
&lt;reg8&gt; “Any 8-bit register (AH, BH, CH, DH, AL, BL, CL, or DL)”<br>
&lt;reg&gt; “Any register”<br>
&lt;mem&gt; “A memory address (e.g., [eax], [var + 4], or dword ptr [eax+ebx])”<br>
&lt;con32&gt; “Any 32-bit constant”<br>
&lt;con16&gt; “Any 16-bit constant”<br>
&lt;con8&gt; “Any 8-bit constant”<br>
&lt;con&gt;, &lt;const&gt; “Any 8-, 16-, or 32-bit constant”</p>







