//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AAUIDeviceLocatorConfirmationUtilities : NSObject
{
}

+ (id)_messageForError:(id)arg1 account:(id)arg2;	// IMP=0x0000000000009832
+ (id)_titleForError:(id)arg1 account:(id)arg2;	// IMP=0x000000000000978b
+ (void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000924d
+ (void)_performFMIPAuthenticationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000902d
+ (void)showDisableAlertForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000087a8
+ (void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000085f5
+ (void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000085d3
+ (void)showDisableAlertForAccount:(id)arg1 presentingViewController:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008434
+ (void)showDisableAlertForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000841d
+ (void)checkIfWatchHasAppleIDAccount:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008405
+ (void)showEnableAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000083ef

@end
