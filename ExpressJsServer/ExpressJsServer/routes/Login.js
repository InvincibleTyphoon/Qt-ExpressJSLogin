﻿'use strict';
var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function (req, res) {
    res.render('index', { title: 'This page is not supposed to be accessed' });
});

// for login check
router.post('/requestLogin', function (req, res) {
    console.log("Login requested id: " + req.body.id + "Password: " + req.body.password);
    res.send(JSON.stringify({ id: req.body.id, password: req.body.password }));
})

module.exports = router;
