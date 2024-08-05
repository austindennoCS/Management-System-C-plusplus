<h1 id="top">Secure Password Generator - PowerShell Script</h1>

<h2>Table of Contents</h2>

- [Overview](#overview)
- [Purpose and Use Cases](#purpose-and-use-cases)
- [Why It’s a Great Program](#why-its-a-great-program)
- [Code Explanation](#code-explanation)
  - [Documentation Header](#documentation-header)
  - [Function Definition](#function-definition)
  - [Character Sets](#character-sets)
  - [Conditional Inclusion](#conditional-inclusion)
  - [Password Generation Loop](#password-generation-loop)
  - [Password Length Input](#password-length-input)
  - [Symbol and Number Inclusion](#symbol-and-number-inclusion)
  - [Password Count Input](#password-count-input)
  - [Password Generation Call](#password-generation-call)
  
<h2 id="overview">Overview</h2>
<b>This project covered key programming fundamentals starting with basic coding principles and advancing through essential concepts like variables, control structures, arrays, and pointers. It emphasized practical applications like data management and modular coding, culminating in object-oriented programming to equip students with the skills to build sophisticated, maintainable software projects.</b>

<h2 id="purpose-and-use-cases">Purpose and Use Cases</h2>
<b>Purpose:</b>
<ul>
    <li>To generate secure passwords that can protect against unauthorized access and security breaches.</li>
    <li>To provide customizable options for password generation, meeting diverse security requirements.</li>
</ul>
<b>Use Cases:</b>
<ul>
    <li><b>Personal Use:</b> Individuals can use the script to create strong passwords for their personal accounts, ensuring their online security.</li>
    <li><b>Corporate Use:</b> IT departments can utilize the script to generate passwords for employees, ensuring compliance with security policies.</li>
    <li><b>Development:</b> Developers can integrate the script into larger applications requiring secure password generation.</li>
</ul>

<h2 id="why-its-a-great-program">Why It’s a Great Program</h2>
<ul>
    <li><b>Customizable:</b> Users can specify password length, inclusion of symbols, and the number of passwords, catering to different security needs.</li>
    <li><b>User-Friendly:</b> The script prompts users for inputs and provides clear instructions, making it easy to use even for those with limited technical expertise.</li>
    <li><b>Secure:</b> By including a mix of uppercase, lowercase, numbers, and special characters, the generated passwords are highly secure and resistant to brute force attacks.</li>
    <li><b>Scalable:</b> Users can generate up to 1000 passwords in one go, making it suitable for both individual and large-scale use.</li>
</ul>

<h2 id="code-explanation">Code Explanation</h2>
<h3 id="documentation-header">Documentation Header</h3>
<p>Provides an overview of the script, describing its purpose, parameters, and usage examples. This makes the script easy to understand and use.</p>

<h3 id="function-definition">Function Definition</h3>
<p>The function definition includes parameters that allow users to customize the password generation process. These parameters include the desired length of the password, whether to include symbols and numbers, and the number of passwords to generate. Customization is crucial for meeting various security requirements.</p>

<h3 id="character-sets">Character Sets</h3>
<p>Defines the sets of characters (lowercase, uppercase, numbers, and symbols) that can be used in password generation. By default, it includes both lowercase and uppercase letters. This ensures a robust combination of characters, enhancing the password's strength and complexity.</p>

<h3 id="conditional-inclusion">Conditional Inclusion</h3>
<p>Modifies the character set based on user inputs, including numbers and/or symbols if specified. This feature allows users to tailor the password complexity to meet specific security policies, making the passwords more resistant to various types of attacks.</p>

<h3 id="password-generation-loop">Password Generation Loop</h3>
<p>Generates the specified number of passwords. Each password is created by randomly selecting characters from the combined set. This randomness ensures that the passwords are unpredictable and secure.</p>

<h3 id="password-length-input">Password Length Input</h3>
<p>Prompts the user for the password length and validates that it is between 10 and 16 characters. Setting constraints on the length ensures that the passwords are neither too short (and therefore insecure) nor unnecessarily long (which might be impractical).</p>

<h3 id="symbol-and-number-inclusion">Symbol and Number Inclusion</h3>
<p>Asks the user whether to include symbols and numbers in the passwords, setting the corresponding flags based on the input. Including symbols and numbers significantly increases password complexity, making them more secure against brute-force and dictionary attacks.</p>

<h3 id="password-count-input">Password Count Input</h3>
<p>Prompts the user for the number of passwords to generate, ensuring the input is between 1 and 1000. Limiting the number of passwords prevents misuse and ensures practical use of the script.</p>

<h3 id="password-generation-call">Password Generation Call</h3>
<p>Calls the function with the user-specified parameters to generate and display the passwords. This step consolidates all the user inputs and executes the password generation process, providing the final output.</p>
