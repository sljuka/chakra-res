// [@bs.module "@chakra-ui/react"]
// [@react.component]
// external make: (~children: React.element, ~margin: int) => React.element = "Box";

[@bs.obj]
external makeProps: (~children: React.element, ~margin: int, ~key: string=?, unit) => {. "children": 'a, "margin": 'b, "key": 'd } = "";

[@bs.module "@chakra-ui/react"]
external make: ({. "children": React.element, "margin": int, "key": string }) => React.element = "Box";
