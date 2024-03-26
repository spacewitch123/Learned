const fs = require("fs");

// fs.writeFile("message.txt", "Hello world", (err) => {

//     if (err) throw err
//     console.log("File Written Successfully");


// });

fs.readFile("./message.txt", "utf8", (err, data) => {

    if (err) throw err;
    console.log(data);
});


