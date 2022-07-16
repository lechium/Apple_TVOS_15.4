//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKPaymentTransaction;

@interface PKSearchTransactionResult : NSObject <NSSecureCoding>
{
    PKPaymentTransaction *_transaction;	// 8 = 0x8
    NSString *_passUniqueIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ebbe6
- (void).cxx_destruct;	// IMP=0x00000000000ebef8
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (unsigned long long)hash;	// IMP=0x00000000000ebe58
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ebdd9
- (id)description;	// IMP=0x00000000000ebd25
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ebc5c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ebbee

@end
