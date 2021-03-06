<url> := <STRING_LITERAL>
<url> := "http://" <host> ":" <port> <path> ["?" <query>]["#" <fragment-id>]
<host> := <hostName> | <hostAddress>
<hostName> := <STRING_LITERAL>
<hostAddress> := <ipV4> | <ipV6>
<ipV6> := <finishTheRule>
<ipV4AddressPart> := "0" | "1" | ... | "255"
<ipV4> := <ipV4AddressPart> "." <ipV4AddressPart> "." <ipV4AddressPart> "." <ipV4AddressPart>
<port> := <INTEGER_LITERAL> 
<path> := "/" <prefix> ["/" <serviceName> ["/" <pathStepList>]]
<prefix> ::= "ws"
<path-step-list> ::= <path-step-name> ["/" <path-step-list>]
<query> ::= <query-parameter-list>
<query-parameter-list> ::= <query-parameter> ["&" <query-parameter-list>]
<query-parameter> ::= <query-parameter-name> ["=" <query-parameter-value>]
