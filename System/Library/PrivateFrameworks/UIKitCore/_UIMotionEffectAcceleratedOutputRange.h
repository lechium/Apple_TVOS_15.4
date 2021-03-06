//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying>
{
    struct UIOffset _referenceOffset;	// 8 = 0x8
    struct CGPoint _referenceAcceleration;	// 24 = 0x18
    struct CGPoint _acceleration;	// 40 = 0x28
}

@property(readonly, nonatomic) struct CGPoint acceleration; // @synthesize acceleration=_acceleration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a6bd6b
- (unsigned long long)hash;	// IMP=0x0000000000a6bb49
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a6ba81
- (id)description;	// IMP=0x0000000000a6b98c
- (void)reset;	// IMP=0x0000000000a6b96d
- (struct UIOffset)acceleratedOutputForViewerOffset:(struct UIOffset)arg1 accelerationBoostFactor:(struct CGPoint)arg2;	// IMP=0x0000000000a6b8b6
- (void)setAcceleration:(struct CGPoint)arg1 fixingOutputForViewerOffset:(struct UIOffset)arg2;	// IMP=0x0000000000a6b76a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a6b6c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a6b5e3
- (id)init;	// IMP=0x0000000000a6b585

@end

