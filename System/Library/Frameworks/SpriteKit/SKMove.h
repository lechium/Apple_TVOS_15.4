//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKMove
{
    struct SKCMove *_mycaction;	// 8 = 0x8
}

+ (id)moveByY:(double)arg1 duration:(double)arg2;	// IMP=0x000000000000fc1d
+ (id)moveToY:(double)arg1 duration:(double)arg2;	// IMP=0x000000000000fb82
+ (id)moveByX:(double)arg1 duration:(double)arg2;	// IMP=0x000000000000fae0
+ (id)moveToX:(double)arg1 duration:(double)arg2;	// IMP=0x000000000000fa45
+ (id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x000000000000f9b3
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x000000000000f99a
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x000000000000f8e9
+ (id)moveBy:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x000000000000f8d0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ee6a
- (id)reversedAction;	// IMP=0x000000000000fd6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000fcbf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f4cf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ef7f
- (id)init;	// IMP=0x000000000000ee72

@end

