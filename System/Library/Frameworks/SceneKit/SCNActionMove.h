//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNActionMove
{
    struct SCNCActionMove *_mycaction;	// 8 = 0x8
}

+ (id)moveToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x000000000027d087
+ (id)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;	// IMP=0x000000000027d052
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x000000000027cf7b
+ (id)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;	// IMP=0x000000000027cf46
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000027cf3e
- (id)parameters;	// IMP=0x000000000027d2ca
- (_Bool)isRelative;	// IMP=0x000000000027d2b3
- (id)reversedAction;	// IMP=0x000000000027d1f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027d14c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000027cc6d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000027c8b9
- (id)init;	// IMP=0x000000000027c7e8

@end

