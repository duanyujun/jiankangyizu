//
//  UIPlaceHolderTextView.h
//  ViewDeckExample
//
//  Created by wang kevin on 13-1-9.
//  Copyright (c) 2013年 Adriaenssen BVBA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIPlaceHolderTextView : UITextView {
    NSString *placeholder;
    UIColor *placeholderColor;
    
@private
    UILabel *placeHolderLabel;
}

@property (nonatomic, retain) UILabel *placeHolderLabel;
@property (nonatomic, retain) NSString *placeholder;
@property (nonatomic, retain) UIColor *placeholderColor;

-(void)textChanged:(NSNotification*)notification;

@end