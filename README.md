### Handles and requests
libuv provides users with 2 abstractions to work with, in combination with the event loop: handles and requests.

Handles represent long-lived objects capable of performing certain operations while active. Some examples:

A prepare handle gets its callback called once every loop iteration when active.
A TCP server handle that gets its connection callback called every time there is a new connection.
Requests represent (typically) short-lived operations. These operations can be performed over a handle: write requests are used to write data on a handle; or standalone: getaddrinfo requests don’t need a handle they run directly on the loop.

### Event loops
```javascript
while there are still events to process:
    e = get the next event
    if there is a callback associated with e:
        call the callback
```

![The I/O loop](http://docs.libuv.org/en/latest/_images/loop_iteration.png)