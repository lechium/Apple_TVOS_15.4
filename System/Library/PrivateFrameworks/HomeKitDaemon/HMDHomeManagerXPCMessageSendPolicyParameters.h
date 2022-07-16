//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSMutableCopying-Protocol.h>

@interface HMDHomeManagerXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying>
{
    _Bool _active;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
}

@property(readonly, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)attributeDescriptions;	// IMP=0x000000000047d35a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047d2cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047d2c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047d1a8
- (id)signature;	// IMP=0x000000000047d0f1
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000047d0ad

@end

