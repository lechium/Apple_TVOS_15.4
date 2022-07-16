//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HMDNetworkRouterAccessViolationControlOperation, HMDNetworkRouterClientIdentifierList, NSString;

@interface HMDNetworkRouterAccessViolationControl : NSObject <NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterAccessViolationControlOperation *_operation;	// 8 = 0x8
    HMDNetworkRouterClientIdentifierList *_clientIdentifierList;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000046b661
- (void).cxx_destruct;	// IMP=0x000000000046ac51
@property(retain, nonatomic) HMDNetworkRouterClientIdentifierList *clientIdentifierList; // @synthesize clientIdentifierList=_clientIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterAccessViolationControlOperation *operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046a963
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046a8d5
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000046a605
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000046a206
- (id)initWithOperation:(id)arg1 clientIdentifierList:(id)arg2;	// IMP=0x000000000046a16d
- (id)init;	// IMP=0x000000000046a13e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

