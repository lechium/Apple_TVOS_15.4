//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class NSString;

@interface ACAccount (SYDAccount)
- (_Bool)syd_useCellularForDataclass:(id)arg1;	// IMP=0x002000000000705e
@property(readonly, nonatomic) NSString *syd_authToken;
@property(readonly, nonatomic) _Bool syd_needsToVerifyTerms;
@property(readonly, nonatomic) _Bool syd_isPrimaryEmailVerified;
@property(readonly, nonatomic) _Bool syd_isPrimaryAccount;
@property(readonly, nonatomic) NSString *syd_primaryEmail;
@property(readonly, nonatomic) NSString *syd_personID;
@end

