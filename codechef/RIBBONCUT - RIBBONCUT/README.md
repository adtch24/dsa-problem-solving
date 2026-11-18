<h2><a href="https://www.codechef.com/START265D/problems/RIBBONCUT" target="_blank" rel="noopener noreferrer">RIBBONCUT — RIBBONCUT</a></h2>

| | |
|---|---|
| **Difficulty** | Beginner |
| **Language** | C++​ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef RIBBONCUT](https://www.codechef.com/START265D/problems/RIBBONCUT) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33"><div class="_problemBodyContent_bh3c4_71"><h3 class="notranslate">Ribbon Cut</h3><p>You have a ribbon of length <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span>. You want to cut it into two pieces of positive integer lengths such that one piece is <strong>exactly twice as long</strong> as the other.</p>
<p>Determine whether this is possible.</p>
<div class="notranslate">
<h3>Input Format</h3>
<ul>
<li>The only line of input contains a single integer <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span>.</li>
</ul>
</div><div class="notranslate">
<h3>Output Format</h3>
<p>Output <code>YES</code> if it is possible, and <code>NO</code> otherwise.</p>
<p>Each letter of <code>YES</code> and <code>NO</code> may be printed in either uppercase or lowercase.</p>
</div>
<h3 class="notranslate">Constraints</h3>
<div class="_html_code__block_bh3c4_219 notranslate">
<ul>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>20</mn></mrow><annotation encoding="application/x-tex">1 \leq N \leq 20</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.7804em; vertical-align: -0.136em;"></span><span class="mord">1</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.136em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">20</span></span></span></span></span></li>
</ul>
</div>
<h3 class="notranslate">Sample 1:</h3>
<div class="_input_output__table_bh3c4_231 notranslate"><div class="_text_copy__container_bh3c4_235"><div class="_text_copy_bh3c4_235 _input_top__box_bh3c4_248"><span>Input</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div><div class="_text_copy_bh3c4_235 _ouput_top__box_bh3c4_251"><span>Output</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div></div><div class="_values__container_bh3c4_254"><div class="_values_bh3c4_254"><pre>6
</pre></div><div class="_values_bh3c4_254"><pre>YES
</pre></div></div></div>
<h3 class="notranslate">Explanation:</h3>
<div class="notranslate">
<p>Cut the ribbon into pieces of lengths <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">2</span></span></span></span></span> and <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>4</mn></mrow><annotation encoding="application/x-tex">4</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">4</span></span></span></span></span>.</p>
</div>
<h3 class="notranslate">Sample 2:</h3>
<div class="_input_output__table_bh3c4_231 notranslate"><div class="_text_copy__container_bh3c4_235"><div class="_text_copy_bh3c4_235 _input_top__box_bh3c4_248"><span>Input</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div><div class="_text_copy_bh3c4_235 _ouput_top__box_bh3c4_251"><span>Output</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div></div><div class="_values__container_bh3c4_254"><div class="_values_bh3c4_254"><pre>10
</pre></div><div class="_values_bh3c4_254"><pre>NO
</pre></div></div></div>
<h3 class="notranslate">Explanation:</h3>
<div class="notranslate">
<p>The possible size pairs after cutting are: <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mo stretchy="false">(</mo><mn>1</mn><mo separator="true">,</mo><mn>9</mn><mo stretchy="false">)</mo><mo separator="true">,</mo><mo stretchy="false">(</mo><mn>2</mn><mo separator="true">,</mo><mn>8</mn><mo stretchy="false">)</mo><mo separator="true">,</mo><mo stretchy="false">(</mo><mn>3</mn><mo separator="true">,</mo><mn>7</mn><mo stretchy="false">)</mo><mo separator="true">,</mo><mo stretchy="false">(</mo><mn>4</mn><mo separator="true">,</mo><mn>6</mn><mo stretchy="false">)</mo><mo separator="true">,</mo><mo stretchy="false">(</mo><mn>5</mn><mo separator="true">,</mo><mn>5</mn><mo stretchy="false">)</mo></mrow><annotation encoding="application/x-tex">(1, 9), (2, 8), (3, 7), (4, 6), (5, 5)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mopen">(</span><span class="mord">1</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.1667em;"></span><span class="mord">9</span><span class="mclose">)</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.1667em;"></span><span class="mopen">(</span><span class="mord">2</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.1667em;"></span><span class="mord">8</span><span class="mclose">)</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.1667em;"></span><span class="mopen">(</span><span class="mord">3</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.1667em;"></span><span class="mord">7</span><span class="mclose">)</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.1667em;"></span><span class="mopen">(</span><span class="mord">4</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.1667em;"></span><span class="mord">6</span><span class="mclose">)</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.1667em;"></span><span class="mopen">(</span><span class="mord">5</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.1667em;"></span><span class="mord">5</span><span class="mclose">)</span></span></span></span></span>. It can be verified that none of them work.</p>
</div>
<h3 class="notranslate">Sample 3:</h3>
<div class="_input_output__table_bh3c4_231 notranslate"><div class="_text_copy__container_bh3c4_235"><div class="_text_copy_bh3c4_235 _input_top__box_bh3c4_248"><span>Input</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div><div class="_text_copy_bh3c4_235 _ouput_top__box_bh3c4_251"><span>Output</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div></div><div class="_values__container_bh3c4_254"><div class="_values_bh3c4_254"><pre>9
</pre></div><div class="_values_bh3c4_254"><pre>YES
</pre></div></div></div><div></div></div></div>