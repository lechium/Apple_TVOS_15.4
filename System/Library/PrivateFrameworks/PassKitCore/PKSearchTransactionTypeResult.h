//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKSearchAutocompleteToken-Protocol.h>

@class NSString;

@interface PKSearchTransactionTypeResult : NSObject <PKSearchAutocompleteToken>
{
    long long _transactionType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000eca02
@property(nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ecb30
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000eca38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000eca15
- (unsigned long long)tokenType;	// IMP=0x00000000000eca0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
