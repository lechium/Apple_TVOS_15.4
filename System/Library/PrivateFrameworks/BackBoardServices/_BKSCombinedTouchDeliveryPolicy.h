//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy
{
    NSArray *_policies;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016b69
- (void).cxx_destruct;	// IMP=0x0000000000015f21
@property(readonly, nonatomic) NSArray *policies; // @synthesize policies=_policies;
- (void)setAssertionEndpoint:(id)arg1;	// IMP=0x0000000000015ee9
- (id)assertionEndpoint;	// IMP=0x0000000000015ee1
- (id)matchSharingTouchesPolicy:(CDUnknownBlockType)arg1 orCancelTouchesPolicy:(CDUnknownBlockType)arg2 orCombinedPolicy:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015ec8
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0000000000015e53
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015de2
- (unsigned long long)hash;	// IMP=0x0000000000015d52
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015c6a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015aa9
- (id)initWithPolicies:(id)arg1;	// IMP=0x0000000000015a3b

@end
