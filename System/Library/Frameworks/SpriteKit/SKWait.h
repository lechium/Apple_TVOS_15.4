//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKWait
{
    struct SKCWait *_mycaction;	// 8 = 0x8
}

+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;	// IMP=0x000000000002a0c1
+ (id)waitForDuration:(double)arg1;	// IMP=0x000000000002a069
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029e5e
- (id)reversedAction;	// IMP=0x000000000002a136
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a03a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029f3d
- (id)init;	// IMP=0x0000000000029e66

@end
