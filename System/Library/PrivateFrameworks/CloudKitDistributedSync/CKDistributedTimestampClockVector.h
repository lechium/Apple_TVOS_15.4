//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/NSCopying-Protocol.h>
#import <CloudKitDistributedSync/NSSecureCoding-Protocol.h>

@class CKDistributedTimestampAttributedVector;

@interface CKDistributedTimestampClockVector : NSObject <NSSecureCoding, NSCopying>
{
    CKDistributedTimestampAttributedVector *_backingVector;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e7e27
- (void).cxx_destruct;	// IMP=0x00000000000eac78
@property(retain, nonatomic) CKDistributedTimestampAttributedVector *backingVector; // @synthesize backingVector=_backingVector;
- (id)description;	// IMP=0x00000000000eac49
- (id)descriptionWithStringSiteIdentifiers;	// IMP=0x00000000000eac32
- (id)descriptionWithStringSiteIdentifiers:(_Bool)arg1;	// IMP=0x00000000000eab2c
- (id)clockVector;	// IMP=0x00000000000eaa63
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)arg1;	// IMP=0x00000000000ea9b8
- (id)vectorFilteredByClockType:(unsigned char)arg1;	// IMP=0x00000000000ea8f7
- (id)vectorFilteredByModifier:(id)arg1;	// IMP=0x00000000000ea80e
- (id)vectorFilteredBySiteIdentifiers:(id)arg1;	// IMP=0x00000000000ea725
- (void)enumerateAllClockValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ea5da
- (void)enumerateClockValuesForSiteIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ea4b3
- (id)clockValuesForSiteIdentifier:(id)arg1;	// IMP=0x00000000000ea41b
- (void)_maintainInvariants;	// IMP=0x00000000000e9f6f
- (void)_checkInvariantsAgainstClockValues:(id)arg1 withSiteIdentifier:(id)arg2 ofType:(unsigned char)arg3;	// IMP=0x00000000000e9e67
- (void)_checkInvariantsAgainstVector:(id)arg1;	// IMP=0x00000000000e9a17
- (void)removeClockValuesInIndexSet:(id)arg1 forSiteIdentifier:(id)arg2;	// IMP=0x00000000000e995d
- (void)addClockValuesInIndexSet:(id)arg1 withClockType:(unsigned char)arg2 forSiteIdentifier:(id)arg3;	// IMP=0x00000000000e9861
- (void)addClockValuesInIndexSet:(id)arg1 forSiteIdentifier:(id)arg2;	// IMP=0x00000000000e9847
- (void)unionVector:(id)arg1;	// IMP=0x00000000000e9765
- (void)minusVector:(id)arg1;	// IMP=0x00000000000e9549
- (void)intersectVector:(id)arg1;	// IMP=0x00000000000e932d
- (unsigned char)vectorExpansionState;	// IMP=0x00000000000e9325
- (_Bool)hasTimestampsNotInVector:(id)arg1;	// IMP=0x00000000000e928d
- (_Bool)isGreaterThanOrEqualToVector:(id)arg1;	// IMP=0x00000000000e9273
- (long long)compareToVector:(id)arg1;	// IMP=0x00000000000e91da
- (_Bool)includesTimestamp:(id)arg1;	// IMP=0x00000000000e8e22
- (unsigned long long)timestampCountForSiteIdentifier:(id)arg1;	// IMP=0x00000000000e8d96
- (unsigned long long)timestampCount;	// IMP=0x00000000000e8d3e
- (id)clockTypesForAllModifiers;	// IMP=0x00000000000e88b5
- (unsigned char)clockTypeForModifier:(id)arg1;	// IMP=0x00000000000e8552
- (id)allModifiers;	// IMP=0x00000000000e835c
- (id)allSiteIdentifiers;	// IMP=0x00000000000e82f8
- (unsigned long long)hash;	// IMP=0x00000000000e82a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e80f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e802f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e7f98
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e7ea3
- (id)init;	// IMP=0x00000000000e7e2f

@end

