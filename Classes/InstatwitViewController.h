//
//  InstatwitViewController.h
//  Instatwit
//
//  Created by Matt Bishop on 12/13/10.
//  Copyright 2010 iphone App development club. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InstatwitViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>{
	IBOutlet UIPickerView *tweetPicker;
	IBOutlet UITextField *notesField;
	NSArray* activities;
	NSArray* feelings;
}
@property (nonatomic, retain) UIPickerView* tweetPicker;
@property (nonatomic, retain) UITextField* notesField;

-(IBAction) sendButtonTapped: (id) sender;
-(IBAction) textFieldDoneEditing: (id) sender;

@end

