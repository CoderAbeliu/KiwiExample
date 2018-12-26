//
//  SecondViewController.m
//  KiwiExample
//
//  Created by Abe_liu on 2018/12/22.
//  Copyright © 2018 Abe_liu. All rights reserved.
//

#import "SecondViewController.h"
#import "ThirdViewController.h"
@interface SecondViewController ()

@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    UITapGestureRecognizer *tapGes = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(jumpVC)];
    [self.view addGestureRecognizer:tapGes];
}

- (void)jumpVC {
    ThirdViewController *secondVC = [[ThirdViewController alloc]init];
    [self.navigationController pushViewController:secondVC animated:YES];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
