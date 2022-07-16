//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRAVRoutingDiscoverySessionConfiguration, NSArray;

@interface MRDiscoveryUpdateEndpointsMessage
{
    NSArray *_endpoints;	// 8 = 0x8
    MRAVRoutingDiscoverySessionConfiguration *_configuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a4c56
@property(readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
- (unsigned long long)type;	// IMP=0x00000000000a4c29
- (id)initWithEndpoints:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000a4a9a
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;	// IMP=0x00000000000a493e

@end
