# kepi_motor
A Library used by the Kepler Gymnasium to run 5v Arduino Motors

## Usage
#### Include Library
```
#include <Motor.h>
```

#### Make Motor object for a motor connected to pin 3 and 5
```
Motor mot(3, 5);
```

#### Attach Motor
```
mot.attach();
```

#### Rotate Motor clockwise at full speed
```
mot.set(255)
```

#### Rotate Motor anticlockwise at full speed
```
mot.set(-254)
```

#### Stop Motor
```
mot.set(0)
```
