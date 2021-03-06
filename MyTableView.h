//
//  myTableView.h
//  QuollEyeTree
//
//  Created by Ian Binnie on 18/07/11.
//  Copyright 2011-2013 Ian Binnie. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol MyTableViewDelegate
@optional
- (void)copyFile:(id)sender;
- (BOOL)keyPressedInTableView:(unichar)character;
- (BOOL)keyCmdPressedInTableView:(unichar)character;
- (BOOL)keyCtlPressedInTableView:(unichar)character;
- (BOOL)keyAltPressedInTableView:(unichar)character;
- (void)mouseDownInTableView;
- (void)validateTableContextMenu:(NSMenu *)menu;
- (id)validRequestorForSendType:(NSString *)sendType returnType:(NSString *)returnType;
@end

@interface MyTableView: NSTableView {
}
@property (assign) IBOutlet NSObject <MyTableViewDelegate> *keyDelegate;

@end
