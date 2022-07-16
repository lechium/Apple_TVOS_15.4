//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, OSVersion;

@interface VariantDescriptor : NSObject
{
    NSArray *_components;	// 8 = 0x8
    _Bool _universal;	// 16 = 0x10
    long long _version;	// 24 = 0x18
}

+ (id)_findCompatibleDescriptorForDevice:(id)arg1 fromVariants:(id)arg2;	// IMP=0x002000000006685c
+ (id)_findCompatibleDescriptor:(id)arg1;	// IMP=0x00100000000667cf
+ (id)_filterAndSortVariants:(id)arg1 compatibleWithDevice:(id)arg2;	// IMP=0x00100000000664dd
+ (_Bool)hasCompatibleDescriptorFromDictionary:(id)arg1 usingKeyProfile:(long long)arg2;	// IMP=0x0010000000066300
+ (_Bool)hasCompatibleDescriptorFromArray:(id)arg1;	// IMP=0x00100000000662c6
+ (id)findCompatibleDescriptorForDevice:(id)arg1 fromVariants:(id)arg2;	// IMP=0x00100000000662ad
+ (id)findCompatibleDescriptorFromDictionary:(id)arg1 usingKeyProfile:(long long)arg2;	// IMP=0x0010000000066247
+ (id)findCompatibleDescriptorFromArray:(id)arg1;	// IMP=0x001000000006622e
+ (id)descriptorForUniversal;	// IMP=0x0010000000065c98
+ (id)descriptorForString:(id)arg1;	// IMP=0x0010000000065c4b
+ (id)descriptorsForDictionary:(id)arg1 usingKeyProfile:(long long)arg2;	// IMP=0x001000000006586e
- (void).cxx_destruct;	// IMP=0x0020000000066dbf
@property(readonly, getter=isUniversal) _Bool universal; // @synthesize universal=_universal;
- (id)_valueForComponent:(CDStruct_4bcfbbae)arg1;	// IMP=0x0010000000066d5f
- (_Bool)_isValid;	// IMP=0x0010000000066d1e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006647a
- (unsigned long long)hash;	// IMP=0x0010000000066455
- (id)description;	// IMP=0x00100000000663e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000663d9
- (_Bool)isEqualToDescriptor:(id)arg1;	// IMP=0x0010000000066370
@property(readonly, copy) NSString *productType;
@property(readonly, copy) OSVersion *osVersion;
@property(readonly, copy) NSString *canonicalIdentifier;
- (id)_initWithComponents:(id)arg1;	// IMP=0x0010000000065eb3
- (id)initWithString:(id)arg1;	// IMP=0x0010000000065cb5

@end

