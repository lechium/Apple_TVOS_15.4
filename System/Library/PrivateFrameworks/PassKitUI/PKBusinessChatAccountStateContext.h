//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class NSString, PKAccount, PKPaymentPass;

@interface PKBusinessChatAccountStateContext : NSObject <PKBusinessChatContext>
{
    PKAccount *_account;	// 8 = 0x8
    PKPaymentPass *_paymentPass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057a80
- (id)bodyText;	// IMP=0x0000000000057a00
- (_Bool)requiresAuthorization;	// IMP=0x00000000000579f8
- (id)groupParameters;	// IMP=0x00000000000578f8
- (id)intentParameters;	// IMP=0x00000000000577e3
- (id)businessIdentifier;	// IMP=0x00000000000577cd
- (id)initWithAccount:(id)arg1 paymentPass:(id)arg2;	// IMP=0x0000000000057734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

