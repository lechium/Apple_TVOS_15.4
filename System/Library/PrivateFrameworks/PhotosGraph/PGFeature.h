//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGFeature : NSObject
{
    id _typeSpecificIdentifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

+ (id)featuresForEncodedFeatures:(id)arg1;	// IMP=0x00000000004abd28
+ (id)stringForFeatureType:(unsigned long long)arg1;	// IMP=0x00000000004abb43
+ (id)nameForNode:(id)arg1;	// IMP=0x00000000004ab985
+ (id)noneFeatureWithType:(unsigned long long)arg1;	// IMP=0x00000000004ab965
+ (id)featureWithType:(unsigned long long)arg1 name:(id)arg2;	// IMP=0x00000000004ab903
+ (id)featureWithMeaningfulEvent:(id)arg1;	// IMP=0x00000000004ab893
+ (id)featureWithType:(unsigned long long)arg1 node:(id)arg2;	// IMP=0x00000000004ab7f4
+ (id)featureWithNode:(id)arg1;	// IMP=0x00000000004ab1c6
- (void).cxx_destruct;	// IMP=0x00000000004aafa2
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x00000000004aae89
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004aad92
- (unsigned long long)hash;	// IMP=0x00000000004aad88
- (id)nodeInGraph:(id)arg1;	// IMP=0x00000000004aa11e
@property(readonly) _Bool isNoneFeature;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)encodedFeature;	// IMP=0x00000000004a9f81
- (id)initWithEncodedFeature:(id)arg1;	// IMP=0x00000000004a9e8b

@end
