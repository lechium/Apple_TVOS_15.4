//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDSiriEndpointOnboardingManager, HMDSiriEndpointProfileMessageHandler, NSArray, NSUUID;

@protocol HMDSiriEndpointProfileMessageHandlerDataSource
- (NSArray *)hubAccessoriesWithHomeUUID:(NSUUID *)arg1 forSiriEndpointProfileMessageHandler:(HMDSiriEndpointProfileMessageHandler *)arg2;
- (HMDSiriEndpointOnboardingManager *)siriEndpointOnboardingManagerForSiriEndpointProfileMessageHandler:(HMDSiriEndpointProfileMessageHandler *)arg1;
@end
