//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface PKFelicaAppletHistoryRecord <NSCopying>
{
    NSNumber *_transactionType;	// 8 = 0x8
    NSNumber *_sectorCombination;	// 16 = 0x10
    NSNumber *_amountType;	// 24 = 0x18
    NSString *_transactionID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000437c88
- (void).cxx_destruct;	// IMP=0x00000000004380c0
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(copy, nonatomic) NSNumber *amountType; // @synthesize amountType=_amountType;
@property(copy, nonatomic) NSNumber *sectorCombination; // @synthesize sectorCombination=_sectorCombination;
@property(copy, nonatomic) NSNumber *transactionType; // @synthesize transactionType=_transactionType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000437f63
- (void)dealloc;	// IMP=0x0000000000437f34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000437e53
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000437cf2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000437cc1
- (id)init;	// IMP=0x0000000000437c90

@end

