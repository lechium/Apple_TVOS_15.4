//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVKit/NSObject-Protocol.h>

@class NSString, TVPasscodeDigitView;

@protocol TVPasscodeDigitViewDelegate <NSObject>

@optional
- (void)passcodeDigitView:(TVPasscodeDigitView *)arg1 didChangeText:(NSString *)arg2;
- (void)passcodeDigitViewDidResignFocus:(TVPasscodeDigitView *)arg1;
- (void)passcodeDigitViewDidBecomeFocused:(TVPasscodeDigitView *)arg1;
@end

