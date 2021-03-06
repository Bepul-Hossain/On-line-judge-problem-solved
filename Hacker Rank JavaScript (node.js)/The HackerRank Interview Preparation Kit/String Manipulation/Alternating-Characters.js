"use strict";

const fs = require("fs");

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .replace(/\s*$/, "")
    .split("\n")
    .map((str) => str.replace(/\s*$/, ""));

  main();
});

function readLine() {
  return inputString[currentLine++];
}

// Complete the alternatingCharacters function below.
function alternatingCharacters(s) {
  var sum = 0;
  for (let i = 0; i < s.length; i++) {
    if (s[i] == s[i + 1]) sum++;
  }

  //console.log(sum);
  return sum;
}

function main() {
  const ws = fs.createWriteStream("./output.txt");

  const q = parseInt(readLine(), 10);

  for (let qItr = 0; qItr < q; qItr++) {
    const s = readLine();

    let result = alternatingCharacters(s);

    ws.write(result + "\n");
  }

  ws.end();
}
