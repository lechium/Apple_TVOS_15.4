//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString;
@protocol _UIInputSwitcherSplitMenu;

@protocol UIKeyboardSplitControlMenuItem <NSObject>
@property(readonly) _Bool visible;
@property(readonly, retain) NSString *label;
- (void)actionForMenu:(id <_UIInputSwitcherSplitMenu>)arg1;
@end
