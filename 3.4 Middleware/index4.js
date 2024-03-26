import express from "express";
import { dirname } from "path";
import { fileURLToPath } from "url";
import bodyParser from "body-parser";
const __dirname = dirname(fileURLToPath(import.meta.url));

const app = express();
const port = 3000;
var bandname = "";

app.use(bodyParser.urlencoded({ extended: true }));

app.get("/", (req, res) => {
  res.sendFile(__dirname + "/public/index.html");
});

function Bandname(req, res, next) {
  console.log(req.body);
  bandname = req.body["street"] + req.body["pet"];
  next();
}

app.use(Bandname);

app.post("/submit", (req, res) => {
  res.send(`Your Band Name Is ${bandname}`);
})

app.listen(port, () => {
  console.log(`Listening on port ${port}`);
});
