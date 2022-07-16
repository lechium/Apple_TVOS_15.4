//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/MSSearchDelegate-Protocol.h>

@class ACAccount, MSSearch, NSOperationQueue, NSString;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate>
{
    MSSearch *_search;	// 8 = 0x8
    NSOperationQueue *_requesterQueue;	// 16 = 0x10
    ACAccount *_account;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
    int _attempts;	// 40 = 0x28
    _Bool _canceled;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000000399cb
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x00000000000397ac
- (_Bool)search:(id)arg1 didFindResults:(id)arg2;	// IMP=0x0000000000039233
- (void)_resendVerificationEmailForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039105
- (void)_validateToken:(id)arg1;	// IMP=0x0000000000038dd1
- (void)_verify;	// IMP=0x00000000000385d1
- (void)cancel;	// IMP=0x0000000000038520
- (void)verifyWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038471
- (void)sendVerificationEmail;	// IMP=0x0000000000038352
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000000382f8
- (id)init;	// IMP=0x0000000000038297

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
