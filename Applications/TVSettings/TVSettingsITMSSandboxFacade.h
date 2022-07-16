//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount;

@interface TVSettingsITMSSandboxFacade : NSObject
{
    _Bool _isSandboxUIEnabled;	// 8 = 0x8
    _Bool _isAuthenticationInProgress;	// 9 = 0x9
    _Bool _isSignOutInProgress;	// 10 = 0xa
    ACAccount *_sandboxAccount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000178e60
@property(retain, nonatomic) ACAccount *sandboxAccount; // @synthesize sandboxAccount=_sandboxAccount;
@property(nonatomic) _Bool isSignOutInProgress; // @synthesize isSignOutInProgress=_isSignOutInProgress;
@property(nonatomic) _Bool isAuthenticationInProgress; // @synthesize isAuthenticationInProgress=_isAuthenticationInProgress;
@property(nonatomic) _Bool isSandboxUIEnabled; // @synthesize isSandboxUIEnabled=_isSandboxUIEnabled;
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x0010000000178b50
- (void)signOut;	// IMP=0x00100000001786e0
- (void)signInSandboxAccountWithPresentingViewController:(id)arg1;	// IMP=0x00100000001783a0
- (void)updateSandboxAccountState;	// IMP=0x00100000001782d0
- (id)_getSandboxAccount;	// IMP=0x0010000000178230
- (void)dealloc;	// IMP=0x00100000001781b0
- (id)init;	// IMP=0x00100000001780c0

@end
