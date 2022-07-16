//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNActionRotate
{
    struct SCNCActionRotate *_mycaction;	// 8 = 0x8
}

+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(_Bool)arg5;	// IMP=0x0000000000293e32
+ (id)rotateToAxisAngle:(struct SCNVector4)arg1 duration:(double)arg2;	// IMP=0x0000000000293db9
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3)arg2 duration:(double)arg3;	// IMP=0x0000000000293cf5
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x0000000000293cd7
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x0000000000293c3a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000293c32
- (id)parameters;	// IMP=0x0000000000294160
- (_Bool)isRelative;	// IMP=0x0000000000294149
- (id)reversedAction;	// IMP=0x0000000000294010
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000293f46
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029398a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029361d
- (id)init;	// IMP=0x00000000002934c4

@end

