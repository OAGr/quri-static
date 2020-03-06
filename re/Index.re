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
      {"We are a technical nonprofit improving the state of the art of general purpose forecasting, with the purpose of maximizing sentient wellbeing."
       |> str}
    </p>
  </div>;
};

let default = make;