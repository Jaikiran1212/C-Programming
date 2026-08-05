# Scenario-Based Call by Value Practice (C)

15 real-world scenario programs in C, each built using **multiple functions** and **call by value** parameter passing. Every problem comes with its own design constraint ("twist") — such as avoiding `if-else`, avoiding `&&`/`||`, or restricting where printing/logic can happen — to practice writing modular, single-responsibility functions.

## Concept

Each program splits its logic across dedicated functions:
- Functions that **validate/compute** and return a value (usually `1`/`0` or a status code)
- Functions that **decide/combine** results
- Functions that **display** the final output

All values are passed **by value** — copies are passed into each function, and no function modifies the caller's original variable.

Each file is self-contained with its own `main()` and can be compiled/run independently.

## Problems & constraints

| File | Scenario | Key constraint ("twist") |
|------|----------|---------------------------|
| `q1_airport_luggage_scanner.c` | Luggage weight check | Return values passed between functions |
| `q2_smart_water_dispenser.c` | Temperature-based water mode | Decision not printed in the middle function |
| `q3_exam_result_generator.c` | Pass/Fail from 3 marks | Logic split across all functions |
| `q4_smart_electricity_billing.c` | Tiered electricity billing | No I/O inside `calculateBill()` |
| `q5_car_speed_warning.c` | Speed alert system | No `if-else` in `main()` or `displayWarning()` |
| `q6_health_risk_prediction.c` | BMI-based health risk | No `if` in `main()` or `calculateBMI()` |
| `q7_secure_door_lock.c` | PIN + expiry door lock | No `&&`/`||` in any function |
| `q8_auto_loan_eligibility.c` | Car loan eligibility | Each condition in its own function, no combined condition |
| `q9_smart_elevator_controller.c` | Elevator floor/load check | No more than one `if` per function |
| `q10_student_cgpa_classifier.c` | CGPA classification | No message printing in `main()` or `classify()` |
| `q11_smart_irrigation_controller.c` | Soil moisture irrigation | No single combined `if` condition anywhere |
| `q12_exam_control_system.c` | Exam hall entry check | Each condition isolated, no `&&`/combined logic |
| `q13_vehicle_service_suggestion.c` | Vehicle service suggestion | Printing only allowed in the final decision function |
| `q14_hotel_room_booking.c` | Hotel booking eligibility | Helper functions return only 0/1; text only in final function |
| `q15_college_admission_eligibility.c` | College admission eligibility | Total score calculated only inside `admissionDecision()`, no arrays/structs |

## How to compile and run

Compile a single file:

```bash
gcc q1_airport_luggage_scanner.c -o q1
./q1
```

Compile and run all of them:

```bash
for f in q*.c; do
  echo "=== $f ==="
  gcc "$f" -o "${f%.c}" && ./"${f%.c}"
  echo
done
```
## Notes

- Where a "twist" forbids certain constructs (like `if-else` or `&&`), the solution uses alternatives such as `switch`, array lookups, or arithmetic (e.g. multiplying/summing boolean flags) instead.
- Some scenarios (e.g. Q9, Q13) restrict *where* printing can occur — helper/check functions strictly return `0`/`1`, and only the designated final function prints output.
- All programs read input via `scanf()`; feel free to hardcode test values instead for quick experimentation.

## Possible improvements

- Add input validation (e.g., reject negative weights, out-of-range CGPA)
- Add a `Makefile` to build all 15 programs with a single command
- Write a small test harness that feeds sample inputs and checks expected outputs automatically

## License

MIT — free to use and modify.