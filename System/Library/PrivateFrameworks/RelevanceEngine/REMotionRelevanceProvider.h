//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface REMotionRelevanceProvider
{
    unsigned long long _motionTypes;	// 8 = 0x8
}

+ (id)relevanceSimulatorID;	// IMP=0x0000000000071439
@property(readonly, nonatomic) unsigned long long motionTypes; // @synthesize motionTypes=_motionTypes;
- (id)description;	// IMP=0x000000000007168b
- (unsigned long long)_hash;	// IMP=0x000000000007167a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000715e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071599
- (id)initWithMotionTypes:(unsigned long long)arg1;	// IMP=0x0000000000071555
- (id)dictionaryEncoding;	// IMP=0x00000000000714b3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000071446

@end

