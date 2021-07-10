"use strict";
const axiosBase = require("axios");
const baseUrl = "http://dummy/url/";
const axios = axiosBase.create({
  baseURL: baseUrl
});

async function main(argv) {
  if (argv.length != 2 || isNaN(argv[1])) {
    console.log("error! invalid args");
    process.exitCode = 1;
  }
  const n = argv[1];
  console.log(await f(n));
  return;
}

async function f(n) {
  if (n == 0) {
    return 1;
  }
  if (n == 2) {
    return 2;
  }
  if (n % 2 != 0) {
    return await ask(n);
  }
  let results = [];
  results[0] = 1;
  results[1] = await ask(1);
  results[2] = 2;
  results[3] = await ask(3);

  let cnt = 4;
  while(cnt < n) {
    if (cnt % 2 == 0) {
      results.push(sum(results));
      results.shift();
    } else {
      results.push(await ask(cnt));
      results.shift();
    }
    cnt++;
  }
  return sum(results);
}

async function ask(n) {
  try {
    const seed = process.argv.slice(2)[0];
    const res = await axios.get("/api/v1/", {
      params: {
        seed: seed,
        n: n,
      },
    });
    return res.data.result;
  } catch (error) {
    console.log("error! ", error);
  }
}

function sum(arr) {
  let sum = 0;
  arr.forEach(n => sum += n);
  return sum;
}

main(process.argv.slice(2));
