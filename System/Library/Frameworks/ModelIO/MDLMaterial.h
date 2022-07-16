//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>
#import <ModelIO/NSFastEnumeration-Protocol.h>

@class MDLScatteringFunction, NSMutableArray, NSString;

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration>
{
    NSMutableArray *_userProperties;	// 8 = 0x8
    NSMutableArray *_builtinProperties;	// 16 = 0x10
    MDLScatteringFunction *_scatteringFunction;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    MDLMaterial *_baseMaterial;	// 40 = 0x28
    unsigned long long _materialFace;	// 48 = 0x30
}

+ (id)decodeMaterialWithCoder:(id)arg1 allocator:(id)arg2;	// IMP=0x00000000002e11e7
- (void).cxx_destruct;	// IMP=0x00000000002e1480
@property(nonatomic) unsigned long long materialFace; // @synthesize materialFace=_materialFace;
@property(retain, nonatomic) MDLMaterial *baseMaterial; // @synthesize baseMaterial=_baseMaterial;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeMaterialWithCoder:(id)arg1 allocator:(id)arg2;	// IMP=0x00000000002e0f8a
@property(readonly, nonatomic) unsigned long long count;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000002e0ee4
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000002e0e48
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000002e0ce5
- (struct BidirectionalScatteringDistributionFunction *)bsdf;	// IMP=0x00000000002e0cd7
- (void)removeAllProperties;	// IMP=0x00000000002e0cae
- (void)removeProperty:(id)arg1;	// IMP=0x00000000002e0c97
- (void)setProperty:(id)arg1;	// IMP=0x00000000002e0bc1
- (id)propertiesWithSemantic:(unsigned long long)arg1;	// IMP=0x00000000002e086d
- (id)propertyWithSemantic:(unsigned long long)arg1;	// IMP=0x00000000002e05af
- (id)propertyNamed:(id)arg1;	// IMP=0x00000000002e01cb
- (void)conformToMatProperties;	// IMP=0x00000000002e0137
- (id)initWithName:(id)arg1 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution *)arg2;	// IMP=0x00000000002dffa3
- (id)initWithName:(id)arg1 scatteringFunction:(id)arg2;	// IMP=0x00000000002dfe84
- (id)init;	// IMP=0x00000000002dfda2
- (void)loadTexturesUsingResolver:(id)arg1;	// IMP=0x00000000002dfd8d
- (void)loadTexturesUsingResolver:(id)arg1 cache:(id)arg2;	// IMP=0x00000000002df611
- (void)loadTexturesUsingArchiveAssetResolver:(id)arg1 cache:(id)arg2;	// IMP=0x00000000002dee40
- (void)resolveTexturesWithResolver:(id)arg1;	// IMP=0x00000000002de803
- (void)setScatteringFunction:(id)arg1;	// IMP=0x00000000002de51a
@property(readonly, retain, nonatomic) MDLScatteringFunction *scatteringFunction;

@end

