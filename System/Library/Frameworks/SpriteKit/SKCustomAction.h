//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKCustomAction
{
    struct SKCCustomAction *_mycaction;	// 8 = 0x8
}

+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000941a9
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000093f32
- (id)reversedAction;	// IMP=0x00000000000942df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000094246
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000094096
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000094027
- (id)init;	// IMP=0x0000000000093f3a

@end

