'use strict';
var express = require('express');
var router = express.Router();
var REQUEST_LOGIN = 1;
var RESPONSE_LOGIN_RESULT = 2;

/* GET home page. */
router.get('/', function (req, res) {
    res.render('index', { title: 'This page is not supposed to be accessed' });
});

// for login check
router.post('/requestLogin', function (req, res) {
    console.log("Login requested id: " + req.body.id + "Password: " + req.body.password);

    var respondJson = {
        msgId : RESPONSE_LOGIN_RESULT,
        success : false
    };
    if (req.body.id === "hello" && req.body.password === "world")
        respondJson['success'] = true;
    else
        respondJson['success'] = false;
    res.send(respondJson);
})

module.exports = router;
