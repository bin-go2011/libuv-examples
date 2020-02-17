### Event loops

```javascript
while there are still events to process:
    e = get the next event
    if there is a callback associated with e:
        call the callback
```