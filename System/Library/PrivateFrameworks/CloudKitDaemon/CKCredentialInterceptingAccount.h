//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class CKDBackingFakeAccount;

@interface CKCredentialInterceptingAccount : ACAccount
{
    CKDBackingFakeAccount *_backingFakeAccount;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000203b31
@property(nonatomic) __weak CKDBackingFakeAccount *backingFakeAccount; // @synthesize backingFakeAccount=_backingFakeAccount;
- (_Bool)aa_updateTokensWithProvisioningResponse:(id)arg1;	// IMP=0x000000000020394a

@end
