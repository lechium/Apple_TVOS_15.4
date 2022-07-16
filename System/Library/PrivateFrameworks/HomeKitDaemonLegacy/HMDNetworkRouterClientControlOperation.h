//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HMDNetworkRouterClientConfiguration, HMDNetworkRouterControlOperation, NSString;

@interface HMDNetworkRouterClientControlOperation : NSObject <NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterControlOperation *_operation;	// 8 = 0x8
    HMDNetworkRouterClientConfiguration *_configuration;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000047e6eb
- (void).cxx_destruct;	// IMP=0x000000000047e6c3
@property(retain, nonatomic) HMDNetworkRouterClientConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HMDNetworkRouterControlOperation *operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047e3d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047e347
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000047e077
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000047dc78
- (id)initWithOperation:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000047dbdf
- (id)init;	// IMP=0x000000000047dbb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

