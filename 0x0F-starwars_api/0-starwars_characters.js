#!/usr/bin/node

/* Import module request to get info from an API */

const req = require('request');

const url = `https://swapi-api.hbtn.io/api/films/${process.argv[2]}`;

const charactersNames = () => {
  // Request asynchronously the characters of a StarWars film and print it

  req(url, async (error, response, body) => {
    if (error) {
      console.log(error);
    } else {
      const ch = JSON.parse(body).characters;
      for (const index in ch) {
        const resp = await reqName(ch[index]);
        console.log(resp);
      }
    }
  });
};

const reqName = (url) => {
  // Return a promise with the character's names

  return new Promise((resolve, reject) => {
    req(url, (err, resp, body) => {
      if (err) {
        reject(err);
      } else {
        resolve(JSON.parse(body).name);
      }
    });
  });
};

charactersNames();
