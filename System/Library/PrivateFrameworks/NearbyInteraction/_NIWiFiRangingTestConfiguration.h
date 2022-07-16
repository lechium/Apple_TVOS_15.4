//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NIDiscoveryToken, NSArray, NSDictionary;

@interface _NIWiFiRangingTestConfiguration
{
    NIDiscoveryToken *_peerDiscoveryToken;	// 24 = 0x18
    NSDictionary *_parameters;	// 32 = 0x20
    NSArray *_monitoredRegions;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000bcbc
- (void).cxx_destruct;	// IMP=0x000000000000c3b6
@property(copy) NSArray *monitoredRegions; // @synthesize monitoredRegions=_monitoredRegions;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken; // @synthesize peerDiscoveryToken=_peerDiscoveryToken;
- (id)descriptionInternal;	// IMP=0x000000000000c257
- (id)description;	// IMP=0x000000000000c19d
- (unsigned long long)hash;	// IMP=0x000000000000c150
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bfad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000bcc4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000bbf6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bba0
- (id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2 regions:(id)arg3;	// IMP=0x000000000000bab6

@end

