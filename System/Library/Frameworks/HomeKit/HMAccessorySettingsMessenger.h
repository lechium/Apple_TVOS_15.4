//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>

@class HMAccessorySettingsMetricsDispatcher, HMFMessageDispatcher, NSArray, NSString, NSUUID;

@interface HMAccessorySettingsMessenger : NSObject <HMFLogging, HMFObject>
{
    HMFMessageDispatcher *_messageDispatcher;	// 8 = 0x8
    HMAccessorySettingsMetricsDispatcher *_metricsDispatcher;	// 16 = 0x10
    NSUUID *_messageTargetUUID;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000001f61f9
+ (id)shortDescription;	// IMP=0x00000000001f61e7
+ (id)legacyMessageTargetUUIDWithHomeUUID:(id)arg1;	// IMP=0x00000000001f610c
+ (id)messageTargetUUIDWithHomeUUID:(id)arg1;	// IMP=0x00000000001f60f6
- (void).cxx_destruct;	// IMP=0x00000000001f5ace
@property(readonly, copy) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
@property(readonly) HMAccessorySettingsMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;	// IMP=0x00000000001f5a38
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)submitMetricEventWithMessage:(id)arg1 error:(id)arg2;	// IMP=0x00000000001f57fb
- (void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)arg1 keyPath:(id)arg2 settingValue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001f54b2
- (void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)arg1 keyPaths:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f519c
- (id)initWithMessageDispatcher:(id)arg1 messageTargetUUID:(id)arg2 metricsDispatcher:(id)arg3;	// IMP=0x00000000001f5093

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
