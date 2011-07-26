//
//  NodeViewController.h
//  DIOSExample
//
//  Created by Kyle Browning on 10/8/10.
//  Copyright 2010 Grasscove. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DIOSConnect.h"
#import "DIOSExampleAppDelegate.h"
@interface NodeViewController : UIViewController {
  IBOutlet UITextField *titleSaveField;
  IBOutlet UITextField *bodySaveField;
  IBOutlet UITextField *nidSaveField;
  IBOutlet UITextField *typeSaveField;
  IBOutlet UITextField *nidDeleteField;
  IBOutlet UITextField *nidGetField;
  IBOutlet UITextField *subjectCommentAddField;
  IBOutlet UITextField *bodyCommentAddField;
  IBOutlet UITextField *nidCommentAddField;
  IBOutlet UITextField *nidCommentGetField;  
  IBOutlet UITextField *nidCommentCountField;
  IBOutlet UITextField *ipadBodyField;
  IBOutlet UILabel *responseStatus;
  IBOutlet UITextView *responseView;
  IBOutlet UILabel *urlLabel;
  IBOutlet UITextField *titleCCKSaveField;
  IBOutlet UITextField *typeCCKSaveField;
  IBOutlet UITextField *nidCCKSaveField;
  IBOutlet UIImageView *imageView;
  IBOutlet UIImageView *imageViewGet;
  UIPopoverController *popover;
  IBOutlet UIButton *uploadButton;
  NSData *imageData;
  DIOSExampleAppDelegate *delegate;
}
@property (nonatomic, retain) NSData *imageData;

- (IBAction) saveNode;
- (IBAction) saveCCKNode:(id)sender;
- (IBAction) deleteNode;
- (IBAction) getNode;

- (IBAction) addComment;
- (IBAction) getComment;
- (IBAction) getCommentCount;
- (IBAction) getCommentCountNew;
- (void) displayDebugDIOS:(id)aDIOSConnect;
@end
