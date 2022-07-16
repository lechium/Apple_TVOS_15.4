//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RBSLegacyAttribute
{
    unsigned long long _reason;	// 8 = 0x8
    unsigned long long _requestedReason;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
}

+ (id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000015264
@property(readonly, nonatomic) unsigned long long flags;
@property(readonly, nonatomic) unsigned long long requestedReason;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000001555b
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000015492
- (id)description;	// IMP=0x0000000000015395
- (unsigned long long)hash;	// IMP=0x000000000001536e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000152e0

@end
