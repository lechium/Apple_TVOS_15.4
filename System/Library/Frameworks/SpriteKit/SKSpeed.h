//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKSpeed
{
    struct SKCSpeed *_mycaction;	// 8 = 0x8
}

+ (id)speedTo:(double)arg1 duration:(double)arg2;	// IMP=0x000000000005a1d6
+ (id)speedBy:(double)arg1 duration:(double)arg2;	// IMP=0x000000000005a130
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000059a56
- (id)reversedAction;	// IMP=0x000000000005a2dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a257
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059ebe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059b59
- (id)init;	// IMP=0x0000000000059a5e

@end

