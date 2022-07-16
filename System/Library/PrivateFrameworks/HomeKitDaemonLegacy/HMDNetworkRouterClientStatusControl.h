//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HMDNetworkRouterClientStatusControlOperation, HMDNetworkRouterClientStatusIdentifierList, NSString;

@interface HMDNetworkRouterClientStatusControl : NSObject <NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterClientStatusControlOperation *_operation;	// 8 = 0x8
    HMDNetworkRouterClientStatusIdentifierList *_clientStatusIdentifierList;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004844ae
- (void).cxx_destruct;	// IMP=0x0000000000482bc3
@property(retain, nonatomic) HMDNetworkRouterClientStatusIdentifierList *clientStatusIdentifierList; // @synthesize clientStatusIdentifierList=_clientStatusIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterClientStatusControlOperation *operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004828d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000482847
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000482577
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000482178
- (id)initWithOperation:(id)arg1 clientStatusIdentifierList:(id)arg2;	// IMP=0x00000000004820df
- (id)init;	// IMP=0x00000000004820b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
