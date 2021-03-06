//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSFastEnumeration-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HKUserDomainConceptPropertyCollection : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
    NSArray *_properties;	// 8 = 0x8
}

+ (id)propertyCollectionByMergingCollection:(id)arg1 otherCollection:(id)arg2;	// IMP=0x0000000000159b5b
+ (id)propertyCollectionByMergingOntologyContentIntoCollection:(id)arg1 fromCollection:(id)arg2;	// IMP=0x0000000000159288
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000159097
- (void).cxx_destruct;	// IMP=0x000000000015a282
@property(readonly, copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
- (id)_propertiesByType;	// IMP=0x000000000015a011
- (id)propertyCollectionByMerging:(id)arg1;	// IMP=0x0000000000159bdd
- (id)propertyCollectionByMergingRefreshedOntologyContentPropertyCollection:(id)arg1;	// IMP=0x000000000015930a
- (id)firstPropertyWithType:(long long)arg1;	// IMP=0x00000000001591fc
- (id)collectionByAddingProperties:(id)arg1;	// IMP=0x00000000001591a1
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000015918b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001590c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015909f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015908c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015902b
- (unsigned long long)hash;	// IMP=0x0000000000159015
@property(readonly, nonatomic) long long count;
- (id)description;	// IMP=0x0000000000158f6b
- (id)initWithProperties:(id)arg1;	// IMP=0x0000000000158e7b
- (id)init;	// IMP=0x0000000000158e01

@end

