// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");
var Post$ReactTemplate = require("./Post.bs.js");
var Settings$ReactTemplate = require("./Settings.bs.js");

function str(prim) {
  return prim;
}

function Blog(Props) {
  var posts = Props.posts;
  var renderPosts = $$Array.map((function (post) {
          return React.createElement(Post$ReactTemplate.make, {
                      post: post,
                      key: post.id
                    });
        }), posts);
  return React.createElement("div", undefined, React.createElement("h1", {
                  className: Settings$ReactTemplate.Header.defaults
                }, "Blog"), renderPosts);
}

var make = Blog;

var $$default = Blog;

exports.str = str;
exports.make = make;
exports.$$default = $$default;
exports.default = $$default;
exports.__esModule = true;
/* react Not a pure module */
