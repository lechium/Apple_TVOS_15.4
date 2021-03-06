//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKLinearCongruentialRandomSource
{
    unsigned long long _seed;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017428
- (_Bool)nextBool;	// IMP=0x0000000000017663
- (float)nextUniform;	// IMP=0x000000000001763c
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;	// IMP=0x00000000000175c1
- (long long)nextInt;	// IMP=0x00000000000175a7
- (unsigned long long)nextBits:(int)arg1;	// IMP=0x0000000000017562
@property(nonatomic) unsigned long long seed;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000174bd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017430
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000173f1
- (id)initWithSeed:(unsigned long long)arg1;	// IMP=0x00000000000173ad
- (id)init;	// IMP=0x000000000001730b

@end

