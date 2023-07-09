# 解題思路
利用摩爾投票算法
- 算法在局部變量中定義一個序列元素(m)和一個計數器(i)，初始化的情況下計數器為0；
- 算法依次掃描序列中的元素，當處理元素x的時候，如果計數器為0，那麼將x賦值給m，然後將計數器(i)設置為1；
- 如果計數器不為0，那麼將序列元素m和x比較，如果相等，那麼計數器加1，如果不等，那麼計數器減1。
- 處理之後，最後存儲的序列元素(m)，就是這個序列中最多的元素。（如果不確定是否存儲的元素m是最多的元素，還可以進行第二遍掃描判斷是否為最多的元素）

<h2><a href="https://leetcode.com/problems/majority-element">169. Majority Element</a></h2><h3>Easy</h3><hr><p>Given an array <code>nums</code> of size <code>n</code>, return <em>the majority element</em>.</p>

<p>The majority element is the element that appears more than <code>&lfloor;n / 2&rfloor;</code> times. You may assume that the majority element always exists in the array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [3,2,3]
<strong>Output:</strong> 3
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,1,1,1,2,2]
<strong>Output:</strong> 2
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow-up:</strong> Could you solve the problem in linear time and in <code>O(1)</code> space?
