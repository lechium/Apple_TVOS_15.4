//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KGElementIdentifierSet, NSArray, NSSet;
@protocol KGElement, KGGraphImplementation;

@interface KGElementCollection : NSObject
{
    KGElementIdentifierSet *_identifiers;	// 8 = 0x8
    id <KGGraphImplementation> _implementation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012dbb9
@property(readonly, nonatomic) id <KGGraphImplementation> implementation; // @synthesize implementation=_implementation;
@property(readonly, nonatomic) KGElementIdentifierSet *identifiers; // @synthesize identifiers=_identifiers;
- (unsigned long long)hash;	// IMP=0x000000000012db8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012db16
- (_Bool)isEqualToCollection:(id)arg1;	// IMP=0x000000000012da60
- (id)description;	// IMP=0x000000000012da10
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012d9c0
- (void)enumerateDoublePropertyValuesForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012d970
- (void)enumerateStringPropertyValuesForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012d920
- (void)enumerateIntegerPropertyValuesForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012d8d0
- (void)enumerateElementsWithBatchSize:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012d88a
- (void)enumerateElementIdentifierBatchesWithBatchSize:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012d78d
@property(readonly) NSArray *allObjects;
@property(readonly) id <KGElement> anyObject;
@property(readonly) unsigned long long count;
@property(readonly) NSSet *set;
- (id)initWithIdentifiers:(id)arg1 graphImplementation:(id)arg2;	// IMP=0x000000000012d51f

@end

