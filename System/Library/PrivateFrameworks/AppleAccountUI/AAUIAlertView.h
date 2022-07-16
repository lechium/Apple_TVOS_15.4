//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertView.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AAUIAlertView : UIAlertView
{
    NSObject<OS_dispatch_semaphore> *_buttonChosenSemaphore;	// 8 = 0x8
    long long _chosenButtonIndex;	// 16 = 0x10
    CDUnknownBlockType _action;	// 24 = 0x18
    CDUnknownBlockType _actionWithText;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001a9fb
@property(readonly) long long chosenButtonIndex;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x000000000001a8f5
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 action:(CDUnknownBlockType)arg6;	// IMP=0x000000000001a7ef
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 action:(CDUnknownBlockType)arg5;	// IMP=0x000000000001a71d
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 action:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a654
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;	// IMP=0x000000000001a5c0

@end

