const express = require('express'),
    bodyParser = require("body-parser");
    path = require("path"),
    app = express(),
    fs = require("fs");

let users= require("./students.json");

app.set("views",path.join(__dirname,"views"));
app.set("view engine","ejs");

app.get("/",(request,response)=>{
response.sendFile(path.join(__dirname + '/public/form.html'));
});   

app.get("/form1",(request,response)=>{
response.sendFile(path.join(__dirname + '/public/form1.html'));
});   

app.use(bodyParser.urlencoded({extended:true}));


app.use(bodyParser.json());

app.post("/",(req,res)=>{

    let avg =
    (parseInt(req.body.maths) +
      parseInt(req.body.science) +
      parseInt(req.body.english) +
      parseInt(req.body.hindi) +
      parseInt(req.body.sst)) /
    5;
  let grade = "";

  if (avg > 90) {
    grade = "A";
  } else if (avg > 80) {
    grade = "B";
  } else if (avg > 70) {
    grade = "C";
  } else if (avg > 60) {
    grade = "D";
  } else if (avg > 33) {
    grade = "E";
  } else if (avg < 33) {
    grade = "F";
  }

  let formData = {
    roll: req.body.roll,
    name: req.body.name,
    add: req.body.address,
    maths: req.body.maths,
    science: req.body.science,
    hindi: req.body.hindi,
    english: req.body.english,
    sst: req.body.sst,
    grade: grade,
    avg: avg,
  };

  res.send(`<h1>Registered successfully</h1>`);

  users.push(formData);
 

  fs.writeFile("./students.json", JSON.stringify(users), (err) => {
    if (err) throw err;

  




// console.log(request.body);
response.send("Request sent successfully!");

})
});

app.post("/form1",(req,res)=>{
  let roll = req.body.roll;

  users.forEach((item) => {
    if (item.roll == roll) {
      res.render("result",{item:item})
      res.end();
     }
  });

  res.send(`<h1>Student Not found</h1>`);






})

app.listen(3000);