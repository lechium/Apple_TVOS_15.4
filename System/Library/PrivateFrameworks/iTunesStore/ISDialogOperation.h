//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISDialog, ISDialogButton, NSArray;
@protocol ISDialogOperationDelegate;

@interface ISDialogOperation
{
    ISDialog *_dialog;	// 96 = 0x60
    _Bool _performDefaultActions;	// 104 = 0x68
    ISDialogButton *_selectedButton;	// 112 = 0x70
    NSArray *_textFieldValues;	// 120 = 0x78
    id _userNotification;	// 128 = 0x80
}

+ (id)operationWithError:(id)arg1;	// IMP=0x000000000003dbe0
+ (id)operationWithDialog:(id)arg1;	// IMP=0x000000000003dba7
@property(retain) id userNotification; // @synthesize userNotification=_userNotification;
@property(retain) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property _Bool performDefaultActions; // @synthesize performDefaultActions=_performDefaultActions;
@property(retain) ISDialog *dialog; // @synthesize dialog=_dialog;
- (void)_waitForUserNotificationResponse:(struct __CFUserNotification *)arg1;	// IMP=0x000000000003ed1c
- (void)_showUserNotification:(id)arg1;	// IMP=0x000000000003e9f5
- (void)_run;	// IMP=0x000000000003e2db
- (void)_handleResponseForNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long long)arg2;	// IMP=0x000000000003e214
- (void)run;	// IMP=0x000000000003deaf
- (void)cancel;	// IMP=0x000000000003de64
@property(readonly) NSArray *textFieldValues;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;	// IMP=0x000000000003dc40
- (void)dealloc;	// IMP=0x000000000003db13
- (id)init;	// IMP=0x000000000003dad4

// Remaining properties
@property id <ISDialogOperationDelegate> delegate; // @dynamic delegate;

@end

