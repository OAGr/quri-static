let str = React.string;

/* For a page of static text like this one, it would be easier to just use plain React
   components since we don't get to take advantage of Reason's type system */
[@react.component]
let make = () => {
  <div>
    <h1
      className=Css.(
        style([
          fontFamily("Merriweather"),
          fontWeight(`black),
          color(hex("223f63")),
        ])
      )>
      {"Team" |> str}
    </h1>
    <h2> {"Ben Goldhaber" |> str} </h2>
    <strong> {"Project Lead" |> str} </strong>
    <p> {"Text XYZ" |> str} </p>
    <h2> {"Ozzie Gooen" |> str} </h2>
    <strong> {"Affiliated Researcher" |> str} </strong>
    <p> {"Text XYZ" |> str} </p>
    <h2> {"Jacob Lagerros" |> str} </h2>
    <strong> {"Affiliated Researcher" |> str} </strong>
    <p> {"Text XYZ" |> str} </p>
  </div>;
};

let default = make;