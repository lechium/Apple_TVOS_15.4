//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeSharingKit/NSCopying-Protocol.h>

@class NSString;

@interface TVHKMediaServerDiscoveryConfiguration : NSObject <NSCopying>
{
    unsigned long long _discoveryMode;	// 8 = 0x8
    NSString *_homeSharingGroupIdentifier;	// 16 = 0x10
    NSString *_homeSharingAccountName;	// 24 = 0x18
}

+ (id)new;	// IMP=0x0000000000031643
+ (id)disabledMediaServerDiscoveryConfiguration;	// IMP=0x0000000000031613
- (void).cxx_destruct;	// IMP=0x0000000000031d84
@property(readonly, copy, nonatomic) NSString *homeSharingAccountName; // @synthesize homeSharingAccountName=_homeSharingAccountName;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupIdentifier; // @synthesize homeSharingGroupIdentifier=_homeSharingGroupIdentifier;
@property(readonly, nonatomic) unsigned long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000031cc1
- (id)description;	// IMP=0x0000000000031ba8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000031938
- (unsigned long long)hash;	// IMP=0x0000000000031844
@property(readonly, nonatomic, getter=isDiscoveringDAAPServers) _Bool discoveringDAAPServers;
@property(readonly, nonatomic, getter=isDiscoveringHomeShareServers) _Bool discoveringHomeShareServers;
@property(readonly, nonatomic, getter=isDiscoveringMediaServers) _Bool discoveringMediaServers;
- (id)initWithDiscoveryMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingGroupIdentifier:(id)arg3;	// IMP=0x00000000000316e1
- (id)init;	// IMP=0x0000000000031672

@end

