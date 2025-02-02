//
//  AppDelegate.h
//  ModernKey
//
//  Created by Tuyen on 1/18/19.
//  Copyright © 2019 Tuyen Mai. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ViewController.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>

-(void)onInputMethodSelected;
- (void)onInputTypeSelectedIndex:(int)index;
- (void)onCodeTableChanged:(int)index;
- (void)onSwitchKeySelectedIndex:(int)index;

-(void)setRunOnStartup:(BOOL)val;
-(void)loadDefaultConfig;
@end

