var express = require("express")
var path = require("path");

var app = express();

app.use("/css", express.static(__dirname + "/css"));
app.use("/assets", express.static(__dirname + "/assets"));
app.use("/js", express.static(__dirname + "/js"));
app.use("/lib", express.static(__dirname + "/lib"));
app.use("/plugin", express.static(__dirname + "/plugin"));

app.get("/*", function (req, res) {
    res.sendFile(path.join(__dirname, "/index.html"))
});

app.listen(80);