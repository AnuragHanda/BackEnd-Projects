const express = require('express'),
      app = express(),
       hand = require('express-handlebars'),
       port  = process.env.port  || 1024
app.engine('handlebars',hand({

defaultLayout :'main'

})       )


app.set('view engine','handlebars')