//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageFilter.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDUserMessageFilter : HMFMessageFilter <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x000000000093a91e
+ (_Bool)canInitWithMessage:(id)arg1;	// IMP=0x000000000093a8bc
- (_Bool)acceptWithPolicies:(id)arg1 error:(id *)arg2;	// IMP=0x000000000093a985

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
