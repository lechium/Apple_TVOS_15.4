//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RBSAppNapPreventTimerThrottleGrant
{
    unsigned char _tier;	// 8 = 0x8
}

+ (id)grantWithTier:(unsigned char)arg1;	// IMP=0x000000000000ed2f
@property(readonly, nonatomic) unsigned char tier; // @synthesize tier=_tier;
- (id)description;	// IMP=0x000000000000ef23
- (unsigned long long)hash;	// IMP=0x000000000000ef12
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000eea7
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000000ee2e
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000000edb0

@end

