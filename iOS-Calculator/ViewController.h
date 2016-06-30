//
//  ViewController.h
//  iOS-Calculator
//
//  Created by almodad on 6/30/16.
//  Copyright © 2016 almodad. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum{Divide, Multiply, Add, Subtract} CalculatorOptions;

@interface ViewController : UIViewController{

    IBOutlet UITextField *txtDisplay;
    NSString *storage;
    CalculatorOptions option;
}
- (IBAction)btnZero;
- (IBAction)btnOne;
- (IBAction)btnTwo;
- (IBAction)btnThree;
- (IBAction)btnFour;
- (IBAction)btnFive;
- (IBAction)btnSix;
- (IBAction)btnSeven;
- (IBAction)btnEight;
- (IBAction)btnNine;


- (IBAction)btnDivide;
- (IBAction)btnMultiply;
- (IBAction)btnAdd;
- (IBAction)btnSubtract;
- (IBAction)btnEquals;
- (IBAction)btnDecimal;
- (IBAction)btnClear;
- (IBAction)btnClearExisting;


@end

