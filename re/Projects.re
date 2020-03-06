let str = React.string;

/* For a page of static text like this one, it would be easier to just use plain React
   components since we don't get to take advantage of Reason's type system */
[@react.component]
let make = () => {
  <div>
    <h1 className=Settings.Header.defaults> {"Projects" |> str} </h1>
    <div>
      <strong> {"Foretold" |> str} </strong>
      <p>
        {"Foretold is a prediction tournament, similar to that discussed in Superforecasting."
         |> str}
      </p>
      <a href="https://www.foretold.io/"> {"Website" |> str} </a>
      <a href="https://github.com/foretold-app/foretold">
        {"Github" |> str}
      </a>
    </div>
    <div>
      <strong> {"Ken (Alpha)" |> str} </strong>
      <a href="https://kenstandard.com/"> {"Website" |> str} </a>
      <a href="https://github.com/kenstandard/ken-js"> {"Github" |> str} </a>
    </div>
    <div>
      <strong> {"DistPlus (Alpha)" |> str} </strong>
      <a href="https://github.com/foretold-app/estiband">
        {"Github" |> str}
      </a>
    </div>
  </div>;
};

let default = make;