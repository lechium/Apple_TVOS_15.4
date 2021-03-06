//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _count;	// 8 = 0x8
    NSMutableArray *_values;	// 16 = 0x10
    NSMutableArray *_times;	// 24 = 0x18
    long long _interpolationMode;	// 32 = 0x20
    long long _repeatMode;	// 40 = 0x28
    struct SKCKeyframeSequence *_cKeyframeSequence;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e35db
- (void).cxx_destruct;	// IMP=0x00000000000e48c8
- (double)getKeyframeTimeForIndex:(unsigned long long)arg1;	// IMP=0x00000000000e4860
- (id)sampleAtTime:(double)arg1;	// IMP=0x00000000000e4737
- (void)_dirtySKCKeyframeSequence;	// IMP=0x00000000000e4707
- (struct SKCKeyframeSequence *)_createSKCKeyframeSequence;	// IMP=0x00000000000e411a
- (Class)_valueClass;	// IMP=0x00000000000e405a
- (id)getKeyframeValueForIndex:(unsigned long long)arg1;	// IMP=0x00000000000e3fe3
- (void)setKeyframeValue:(id)arg1 time:(double)arg2 forIndex:(unsigned long long)arg3;	// IMP=0x00000000000e3f5d
- (void)setKeyframeTime:(double)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x00000000000e3ed4
- (void)setKeyframeValue:(id)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x00000000000e3e44
- (void)removeKeyframeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e3df3
- (void)removeAllKeyframes;	// IMP=0x00000000000e3da7
- (void)removeLastKeyframe;	// IMP=0x00000000000e3d5b
- (void)addKeyframeValue:(id)arg1 time:(double)arg2;	// IMP=0x00000000000e3c69
@property(nonatomic) long long repeatMode;
@property(nonatomic) long long interpolationMode;
- (unsigned long long)count;	// IMP=0x00000000000e3c1f
- (id)initWithKeyframeValues:(id)arg1 times:(id)arg2;	// IMP=0x00000000000e3abe
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000e3a02
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e393a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e3652
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e361f
- (id)copy;	// IMP=0x00000000000e35f8
- (id)init;	// IMP=0x00000000000e35e3
- (_Bool)isEqualToSequence:(id)arg1;	// IMP=0x00000000000e4a78
- (id)initWithCount:(unsigned long long)arg1;	// IMP=0x00000000000e48f0

@end

