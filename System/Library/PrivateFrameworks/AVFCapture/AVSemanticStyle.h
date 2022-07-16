//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVSemanticStyle : NSObject
{
    float _toneBias;	// 8 = 0x8
    float _warmthBias;	// 12 = 0xc
    unsigned long long _hash;	// 16 = 0x10
    float _subjectBias;	// 24 = 0x18
}

+ (id)identityStyle;	// IMP=0x000000000002fab7
+ (id)semanticStyleWithToneBias:(float)arg1 warmthBias:(float)arg2;	// IMP=0x000000000002fa71
@property(readonly, nonatomic) float subjectBias; // @synthesize subjectBias=_subjectBias;
- (unsigned long long)hash;	// IMP=0x000000000002fda5
@property(readonly, nonatomic) float warmthBias; // @synthesize warmthBias=_warmthBias;
@property(readonly, nonatomic) float toneBias; // @synthesize toneBias=_toneBias;
- (id)description;	// IMP=0x000000000002fd2c
- (id)debugDescription;	// IMP=0x000000000002fd00
@property(readonly, nonatomic) float sceneBias;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002fc56
- (id)_initWithToneBias:(float)arg1 warmthBias:(float)arg2;	// IMP=0x000000000002fae7

@end
