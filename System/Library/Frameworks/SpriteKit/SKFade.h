//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKFade
{
    struct SKCFade *_mycaction;	// 8 = 0x8
}

+ (id)fadeOutWithDuration:(double)arg1;	// IMP=0x0000000000009b05
+ (id)fadeInWithDuration:(double)arg1;	// IMP=0x0000000000009a96
+ (id)fadeAlphaTo:(double)arg1 duration:(double)arg2;	// IMP=0x0000000000009a18
+ (id)fadeAlphaBy:(double)arg1 duration:(double)arg2;	// IMP=0x0000000000009981
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000940a
- (id)reversedAction;	// IMP=0x0000000000009c12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009b7a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000097bd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009511
- (id)init;	// IMP=0x0000000000009412

@end

