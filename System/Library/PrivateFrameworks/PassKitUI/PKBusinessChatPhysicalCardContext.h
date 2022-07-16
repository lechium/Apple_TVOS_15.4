//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class NSString, PKPaymentPass;

@interface PKBusinessChatPhysicalCardContext : NSObject <PKBusinessChatContext>
{
    PKPaymentPass *_paymentPass;	// 8 = 0x8
    long long _intent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057724
- (_Bool)requiresAuthorization;	// IMP=0x000000000005771c
- (id)bodyText;	// IMP=0x0000000000057670
- (id)groupParameters;	// IMP=0x0000000000057550
- (id)intentParameters;	// IMP=0x0000000000057424
- (id)businessIdentifier;	// IMP=0x000000000005740e
- (id)initWithPaymentPass:(id)arg1 intent:(long long)arg2;	// IMP=0x0000000000057398

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

