//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMBLocalZoneID-Protocol.h>

@class NSArray, NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject <HMBLocalZoneID>
{
    NSData *_token;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000622fd1
- (void).cxx_destruct;	// IMP=0x0000000000622fbe
@property(readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *labels;
- (id)attributeDescriptions;	// IMP=0x0000000000622ddc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000622dd1
- (id)initWithToken:(id)arg1;	// IMP=0x0000000000622d50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

