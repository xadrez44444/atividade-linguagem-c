
<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame()<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-siz<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.st<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.text<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.s<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } els<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>
<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumb<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>er = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>
<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function <!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInpu<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo de Adivinhação</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f0f2f5;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            text-align: center;
            max-width: 400px;
            width: 100%;
        }
        h1 {
            color: #333;
            margin-bottom: 10px;
        }
        p {
            color: #666;
        }
        input[type="number"] {
            padding: 10px;
            width: 80px;
            font-size: 16px;
            border: 2px solid #ddd;
            border-radius: 6px;
            text-align: center;
            margin-bottom: 15px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 6px;
            cursor: pointer;
            transition: background 0.2s;
        }
        button:hover {
            background-color: #0056b3;
        }
        .message {
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>t.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>e {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>tyle.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>Content = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>yle.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html> = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>e: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html> {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>
            margin-top: 20px;
            font-weight: bold;
            font-size: 18px;
        }
        .reset-btn {
            background-color: #28a745;
            display: none;
            margin: 15px auto 0 auto;
        }
        .reset-btn:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>Adivinhe o Número!</h1>
    <p>Eu escolhi um número entre <b>1 e 100</b>. Consegue acertar?</p>
    
    <input type="number" id="guessInput" min="1" max="100" placeholder="0">
    <br>
    <button onclick="checkGuess()" id="submitBtn">Palpitar</button>
    <button onclick="resetGame()" id="resetBtn" class="reset-btn">Jogar Novamente</button>

    <div class="message" id="message"></div>
</div>

<script>
    // Configuração inicial do jogo
    let randomNumber = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;

    const guessInput = document.getElementById('guessInput');
    const message = document.getElementById('message');
    const submitBtn = document.getElementById('submitBtn');
    const resetBtn = document.getElementById('resetBtn');

    function checkGuess() {
        const userGuess = parseInt(guessInput.value);

        // Validação simples
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.style.color = "red";
            message.textContent = "Por favor, digite um número válido entre 1 e 100.";
            return;
        }

        attempts++;

        // Lógica do jogo
        if (userGuess === randomNumber) {
            message.style.color = "green";
            message.textContent = `🎉 Parabéns! Você acertou em ${attempts} tentativas!`;
            endGame();
        } else if (userGuess < randomNumber) {
            message.style.color = "#ff9800";
            message.textContent = "Muito baixo! Tente um número maior.";
        } else {
            message.style.color = "#ff9800";
            message.textContent = "Muito alto! Tente um número menor.";
        }

        // Limpa o campo de input para a próxima tentativa
        guessInput.value = '';
        guessInput.focus();
    }

    function endGame() {
        guessInput.disabled = true;
        submitBtn.style.display = "none";
        resetBtn.style.display = "block";
    }

    function resetGame() {
        randomNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = '';
        guessInput.disabled = false;
        guessInput.value = '';
        submitBtn.style.display = "inline-block";
        resetBtn.style.display = "none";
    }

    // Permite apertar "Enter" para enviar o palpite
    guessInput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            checkGuess();
        }
    });
</script>

</body>
</html>





