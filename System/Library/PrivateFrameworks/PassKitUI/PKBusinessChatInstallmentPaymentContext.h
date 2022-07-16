//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class NSString, PKAccount, PKPaymentPass;

@interface PKBusinessChatInstallmentPaymentContext : NSObject <PKBusinessChatContext>
{
    PKAccount *_account;	// 8 = 0x8
    PKPaymentPass *_paymentPass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057d95
- (id)bodyText;	// IMP=0x0000000000057d84
- (_Bool)requiresAuthorization;	// IMP=0x0000000000057d7c
- (id)groupParameters;	// IMP=0x0000000000057cda
- (id)intentParameters;	// IMP=0x0000000000057bfa
- (id)businessIdentifier;	// IMP=0x0000000000057be4
- (id)initWithAccount:(id)arg1 paymentPass:(id)arg2;	// IMP=0x0000000000057b4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

