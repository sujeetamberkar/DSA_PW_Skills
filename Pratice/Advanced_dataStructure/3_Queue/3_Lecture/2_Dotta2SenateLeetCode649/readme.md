# Senate Battle Algorithm Summary

## Algorithm Steps
- **Banning Phase**:
  - If senator is Radiant and Dire queue not empty, ban first in Dire queue.
  - If senator is Dire and Radiant queue not empty, ban first in Radiant queue.

- **Queue Management**:
  - Move current senator to back of their party's queue.
  - Remove banned senators from main queue.

- **Victory Check**:
  - If one party's queue is empty, the other party wins.

- **Termination**:
  - Continue until one party has no senators left.
  - Declare the party with remaining senators as the winner.


# Dry Run 

- Initialize `q`, `r`, and `d` based on the initial senate configuration.
- Begin iterating through the rounds of bans:

### Round 1: Senate Configuration = `RDRDDDR`
- Queues: 
  - `q`: `[0, 1, 2, 3, 4, 5, 6]`
  - `r`: `[0, 2, 6]`
  - `d`: `[1, 3, 4, 5]`
- Senator at index `0` (Radiant) bans the first Dire senator (index `1`).
- Senator at index `2` (Radiant) bans the next Dire senator (index `3`).
- Senate becomes: `RXRXDDR`

### Round 2: Senate Configuration = `RXRXDDR`
- Queues: 
  - `q`: `[2, 4, 5, 6, 0]`
  - `r`: `[2, 6, 0]`
  - `d`: `[4, 5]`
- Senator at index `4` (Dire) bans the next Radiant senator (index `6`).
- Senator at index `5` (Dire) bans the next Radiant senator (index `0`).
- Senate becomes: `XXRXXDR`

### Round 3: Senate Configuration = `XXRXXDR`
- Queues: 
  - `q`: `[2, 4, 5]`
  - `r`: `[2]`
  - `d`: `[4, 5]`
- Senator at index `2` (Radiant) bans the first Dire senator (index `4`).
- Senate becomes: `XXRXXXR`

### Round 4: Senate Configuration = `XXRXXXR`
- Queues: 
  - `q`: `[5, 2]`
  - `r`: `[2]`
  - `d`: `[5]`
- Senator at index `5` (Dire) bans the next Radiant senator (index `2`).
- Senate becomes: `XXXXXXR`


---