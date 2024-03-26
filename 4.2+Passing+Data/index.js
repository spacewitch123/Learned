import express from "express";
import bodyParser from "body-parser";

const app = express();
const port = 3000;

app.use(bodyParser.urlencoded({ extended: true }));

app.get("/", (req, res) => {
  res.render("index.ejs");
});

app.post("/submit", (req, res) => {
  const firstName = req.body.fName; // Corrected the syntax for accessing form data
  const lastName = req.body.lName; // Corrected the variable name

  const numletters = firstName.length + lastName.length;

  res.render("index.ejs", { numberOfLetters: numletters });
});

app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});
