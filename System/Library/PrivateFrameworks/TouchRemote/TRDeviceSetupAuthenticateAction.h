//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface TRDeviceSetupAuthenticateAction
{
}

+ (id)actionForCancelledRequestWithOriginalAction:(id)arg1;	// IMP=0x0000000000016d89
+ (id)actionForFinishedRequestWithOriginalAction:(id)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4;	// IMP=0x0000000000016ca4
+ (id)actionForFailedAttemptWithOriginalAction:(id)arg1 requestMessage:(id)arg2 failureMessage:(id)arg3;	// IMP=0x0000000000016b93
+ (id)actionForInitialAttemptWithAccountType:(unsigned long long)arg1 requestMessage:(id)arg2;	// IMP=0x0000000000016b28
@property(readonly, copy, nonatomic) NSString *failureMessage;
@property(readonly, copy, nonatomic) NSString *requestMessage;
@property(readonly, nonatomic) unsigned long long attemptCount;
@property(readonly, copy, nonatomic) NSArray *accountTypesWithSharedCredentials;
@property(readonly, copy, nonatomic) NSString *accountPassword;
@property(readonly, copy, nonatomic) NSString *accountID;
@property(readonly, nonatomic) unsigned long long accountType;
- (id)_initWithAccountType:(unsigned long long)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4 attemptCount:(unsigned long long)arg5 requestMessage:(id)arg6 failureMessage:(id)arg7;	// IMP=0x0000000000016617
- (id)init;	// IMP=0x00000000000165df

@end

