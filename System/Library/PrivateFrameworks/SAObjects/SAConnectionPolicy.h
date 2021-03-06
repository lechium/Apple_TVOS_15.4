//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAConnectionPolicy <SAAceSerializable>
{
}

+ (id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000d447
+ (id)connectionPolicy;	// IMP=0x000000000000d435
@property(copy, nonatomic) NSNumber *timeToLive;
@property(copy, nonatomic) NSArray *routes;
@property(copy, nonatomic) NSString *policyId;
@property(copy, nonatomic) NSNumber *mptcpFallbackPort;
@property(copy, nonatomic) NSNumber *globalTimeout;
@property(nonatomic) _Bool enabled;
@property(copy, nonatomic) NSNumber *enableTcpFastOpen;
@property(copy, nonatomic) NSNumber *enableTLS13ZeroRTT;
@property(copy, nonatomic) NSNumber *enableTLS13;
@property(copy, nonatomic) NSNumber *enableOptimisticDNS;
@property(copy, nonatomic) NSNumber *disableMPTCP;
- (id)encodedClassName;	// IMP=0x000000000000d428
- (id)groupIdentifier;	// IMP=0x000000000000d414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

