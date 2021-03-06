//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/SSXPCCoding-Protocol.h>

@class NSArray, NSLock, NSMutableDictionary, NSString, SSAuthenticationContext, SSPaymentSheet;

@interface ISDialog : NSObject <SSXPCCoding>
{
    _Bool _allowDuplicates;	// 8 = 0x8
    SSAuthenticationContext *_authenticationContext;	// 16 = 0x10
    _Bool _authorizationIsForced;	// 24 = 0x18
    NSArray *_buttons;	// 32 = 0x20
    long long _defaultButtonIndex;	// 40 = 0x28
    NSString *_displayCountKey;	// 48 = 0x30
    _Bool _dismissOnHomeButton;	// 56 = 0x38
    _Bool _dismissOnLock;	// 57 = 0x39
    _Bool _expectsResponse;	// 58 = 0x3a
    _Bool _groupsTextFields;	// 59 = 0x3b
    long long _kind;	// 64 = 0x40
    NSLock *_lock;	// 72 = 0x48
    long long _maxDisplayCount;	// 80 = 0x50
    NSString *_message;	// 88 = 0x58
    _Bool _noDefaultButton;	// 96 = 0x60
    _Bool _oneButtonPerLine;	// 97 = 0x61
    _Bool _shouldDismissAfterUnlock;	// 98 = 0x62
    _Bool _shouldDisplayAsTopMost;	// 99 = 0x63
    _Bool _shouldPendInSetupIfNotAllowed;	// 100 = 0x64
    NSArray *_textFields;	// 104 = 0x68
    NSString *_title;	// 112 = 0x70
    long long _unlockActionButtonIndex;	// 120 = 0x78
    NSMutableDictionary *_userInfo;	// 128 = 0x80
    struct __CFDictionary *_userNotificationValues;	// 136 = 0x88
    _Bool _displaysOnLockscreen;	// 144 = 0x90
    SSPaymentSheet *_paymentSheet;	// 152 = 0x98
    NSString *_touchIDContinueToken;	// 160 = 0xa0
}

+ (struct __CFString *)buttonTitleKeyForCFUserNotificationButtonTag:(unsigned long long)arg1;	// IMP=0x000000000004b633
+ (unsigned long long)buttonTagForCFUserNotificationButtonTitleKey:(struct __CFString *)arg1;	// IMP=0x000000000004b5b5
+ (void)_initializeStaticButtonTitleKeyAndTagMapping;	// IMP=0x000000000004b523
+ (long long)displayCountForKey:(id)arg1;	// IMP=0x000000000004a22b
- (void).cxx_destruct;	// IMP=0x000000000004c053
@property(copy) NSString *touchIDContinueToken; // @synthesize touchIDContinueToken=_touchIDContinueToken;
@property(readonly) SSPaymentSheet *paymentSheet; // @synthesize paymentSheet=_paymentSheet;
@property _Bool displaysOnLockscreen; // @synthesize displaysOnLockscreen=_displaysOnLockscreen;
@property long long unlockActionButtonIndex; // @synthesize unlockActionButtonIndex=_unlockActionButtonIndex;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSArray *textFields; // @synthesize textFields=_textFields;
@property _Bool shouldPendInSetupIfNotAllowed; // @synthesize shouldPendInSetupIfNotAllowed=_shouldPendInSetupIfNotAllowed;
@property _Bool shouldDisplayAsTopMost; // @synthesize shouldDisplayAsTopMost=_shouldDisplayAsTopMost;
@property _Bool shouldDismissAfterUnlock; // @synthesize shouldDismissAfterUnlock=_shouldDismissAfterUnlock;
@property _Bool oneButtonPerLine; // @synthesize oneButtonPerLine=_oneButtonPerLine;
@property _Bool noDefaultButton; // @synthesize noDefaultButton=_noDefaultButton;
@property(retain) NSString *message; // @synthesize message=_message;
@property long long kind; // @synthesize kind=_kind;
@property _Bool groupsTextFields; // @synthesize groupsTextFields=_groupsTextFields;
@property _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property _Bool dismissOnLock; // @synthesize dismissOnLock=_dismissOnLock;
@property _Bool dismissOnHomeButton; // @synthesize dismissOnHomeButton=_dismissOnHomeButton;
@property long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(retain) NSArray *buttons; // @synthesize buttons=_buttons;
@property _Bool authorizationIsForced; // @synthesize authorizationIsForced=_authorizationIsForced;
@property(copy) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property _Bool allowDuplicates; // @synthesize allowDuplicates=_allowDuplicates;
- (id)copyXPCEncoding;	// IMP=0x000000000004bc34
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000004b8a0
- (long long)_kindForString:(id)arg1;	// IMP=0x000000000004b841
- (id)buyParams;	// IMP=0x000000000004b682
- (id)orderedButtonTitleKeysForCFUserNotification;	// IMP=0x000000000004b42b
- (id)valueForUserInfoKey:(id)arg1;	// IMP=0x000000000004b3a7
- (void)setValue:(void *)arg1 forCFUserNotificationKey:(struct __CFString *)arg2;	// IMP=0x000000000004b31c
- (void)setValue:(id)arg1 forUserInfoKey:(id)arg2;	// IMP=0x000000000004b259
@property long long maximumDisplayCount;
@property(copy) NSString *displayCountKey;
- (void)setButtonsWithTitles:(id)arg1;	// IMP=0x000000000004afa6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004acbd
@property(readonly, getter=isDisplayable) _Bool displayable;
- (void)incrementDisplayCount;	// IMP=0x000000000004ab6b
- (void *)copyValueForCFUserNotificationKey:(struct __CFString *)arg1;	// IMP=0x000000000004aabc
- (id)copyUserNotification;	// IMP=0x000000000004a278
- (void)dealloc;	// IMP=0x000000000004a1a5
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000000004a022
- (id)initWithOfferDeviceError:(id)arg1;	// IMP=0x0000000000049cd6
- (id)initWithError:(id)arg1;	// IMP=0x000000000004990e
- (id)initWithDialogDictionary:(id)arg1;	// IMP=0x00000000000498fa
- (id)initWithDialogDictionary:(id)arg1 authenticationContext:(id)arg2;	// IMP=0x0000000000048ea2
- (id)init;	// IMP=0x0000000000048e2b
- (id)initWithAuthenticationChallege:(id)arg1;	// IMP=0x0000000000048abb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

