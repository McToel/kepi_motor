# kepi_motor
A Library used by the Kepler Gymnasium to run 5v Arduino Motors

## Usage
#### Include Library
```
#include <Motor.h>
```

#### Create motor object for a motor connected to pin 3 and 5
```
Motor motor(3, 5)
```

#### Attach motor
```
motor.attach()
```

#### Rotate motor clockwise at full speed
```
motor.set(255)
```

#### Rotate motor anticlockwise at full speed
```
motor.set(-254)
```

#### Stop motor
```
motor.set(0)
```
