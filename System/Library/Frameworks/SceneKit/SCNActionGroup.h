//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SCNActionGroup
{
    void *_mycaction;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
}

+ (id)groupWithActions:(id)arg1;	// IMP=0x00000000002a86c7
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002a8388
- (_Bool)finished;	// IMP=0x00000000002a8d9e
- (id)reversedAction;	// IMP=0x00000000002a8c0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a8b55
- (void)setupWithActions:(id)arg1;	// IMP=0x00000000002a84b1
- (_Bool)isCustom;	// IMP=0x00000000002a8390
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a832e
- (void)dealloc;	// IMP=0x00000000002a82ec
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a807e
- (id)init;	// IMP=0x00000000002a7fa6

@end

