//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PNDUserNotificationView : NSObject
{
}

+ (void)showCFUserNotifcationWithSecureTextFieldOptionForState:(int)arg1;	// IMP=0x00400000000028e5
+ (void)beginPromptForChangePasscode;	// IMP=0x0010000000002829
+ (void)showPasscodePromptForMCPasscodeComplianceTypeMandatoryWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0010000000002510
+ (void)showPasscodePromptForMCPasscodeComplianceTypeAdvisoryWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x00100000000021d1
+ (void)showPasscodePromptForMCPasscodeComplianceTypeOptionalWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0010000000001e1e

@end

