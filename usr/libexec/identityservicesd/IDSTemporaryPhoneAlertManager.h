//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSTemporaryPhoneAlertManager : NSObject
{
}

+ (id)serviceString;	// IMP=0x004000000013cf90
+ (void)clearNonExpirationFollowUps;	// IMP=0x001000000013cf80
+ (void)retractLockscreenAlerts;	// IMP=0x001000000013cf70
+ (void)attemptPresentationOfExpirationAlertForUser:(id)arg1;	// IMP=0x001000000013cf30
+ (void)attemptPresentationOfNearExpirationAlertForUser:(id)arg1;	// IMP=0x001000000013cef0
+ (void)presentSuccessAlertForUser:(id)arg1;	// IMP=0x001000000013ceb0

@end
