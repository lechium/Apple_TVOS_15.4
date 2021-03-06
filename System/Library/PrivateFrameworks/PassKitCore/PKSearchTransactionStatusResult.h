//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKSearchAutocompleteToken-Protocol.h>

@class NSString;

@interface PKSearchTransactionStatusResult : NSObject <PKSearchAutocompleteToken>
{
    long long _transactionStatus;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ecba2
@property(nonatomic) long long transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eccd0
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ecbd8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ecbb5
- (unsigned long long)tokenType;	// IMP=0x00000000000ecbaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

