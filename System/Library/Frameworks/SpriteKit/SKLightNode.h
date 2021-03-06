//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface SKLightNode
{
    void *_skcLightNode;	// 96 = 0x60
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;	// IMP=0x00000000000235e1
+ (id)debugHierarchyPropertyDescriptions;	// IMP=0x0000000000023204
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022231
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(retain, nonatomic) UIColor *shadowColor;
@property(retain, nonatomic) UIColor *ambientColor;
@property(retain, nonatomic) UIColor *lightColor;
@property(nonatomic) unsigned int categoryBitMask;
- (void)setLightCategoryBitMask:(unsigned int)arg1;	// IMP=0x0000000000022ffe
- (unsigned int)lightCategoryBitMask;	// IMP=0x0000000000022fec
- (void)setLightDecay:(double)arg1;	// IMP=0x0000000000022fda
- (double)lightDecay;	// IMP=0x0000000000022fc8
@property(nonatomic) double falloff;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022e23
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000022b28
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x00000000000227b3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002243e
- (id)init;	// IMP=0x000000000002229e
- (void)commonInit;	// IMP=0x0000000000022298
- (void)_didMakeBackingNode;	// IMP=0x0000000000022270
- (void *)_makeBackingNode;	// IMP=0x0000000000022239

@end

