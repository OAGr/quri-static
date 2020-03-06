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
      {"Quantified Uncertainty Research Institute" |> str}
    </h1>
    <p>
      {"We create advanced forecasting infrastructure to support globally-beneficial initiatives."
       |> str}
    </p>
  </div>;
};

let default = make;