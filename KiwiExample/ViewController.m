//
//  ViewController.m
//  KiwiExample
//
//  Created by Abe_liu on 2018/12/21.
//  Copyright © 2018 Abe_liu. All rights reserved.
//

#import "ViewController.h"
#import "SecondViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = [UIColor whiteColor];
    UITapGestureRecognizer *tapGes = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(jumpVC)];
    [self.view addGestureRecognizer:tapGes];
}

- (void)jumpVC {
    SecondViewController *secondVC = [[SecondViewController alloc]init];
    [self.navigationController pushViewController:secondVC animated:YES];
}

- (NSInteger)addA:(NSInteger)a andB:(NSInteger)b {
    return a+b;
}


@end
