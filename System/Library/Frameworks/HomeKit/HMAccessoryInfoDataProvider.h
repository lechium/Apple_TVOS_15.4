//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMEEventConsumer-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>

@class NSString, _HMContext;
@protocol HMAccessoryInfoDataProviderDataSource, HMAccessoryInfoDataProviderDelegate, HMESubscriptionProviding, OS_dispatch_queue;

@interface HMAccessoryInfoDataProvider : NSObject <HMEEventConsumer, HMFLogging>
{
    id <HMAccessoryInfoDataProviderDelegate> _delegate;	// 8 = 0x8
    id <HMESubscriptionProviding> _eventSubscriptionProvider;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    _HMContext *_context;	// 32 = 0x20
    id <HMAccessoryInfoDataProviderDataSource> _dataSource;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00000000000d15cf
- (void).cxx_destruct;	// IMP=0x00000000000d0e57
@property __weak id <HMAccessoryInfoDataProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) _HMContext *context; // @synthesize context=_context;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) id <HMESubscriptionProviding> eventSubscriptionProvider; // @synthesize eventSubscriptionProvider=_eventSubscriptionProvider;
@property __weak id <HMAccessoryInfoDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dataSourceHomeWithHomeIdentifier:(id)arg1;	// IMP=0x00000000000d0c8d
- (void)notifyDelegateDidReceiveWifiNetworkInfoUpdatesForAccessoryWithIdentifier:(id)arg1 wifiNetworkInfo:(id)arg2;	// IMP=0x00000000000d0a6a
- (void)_didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00000000000d05fb
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;	// IMP=0x00000000000d051f
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00000000000d0443
- (void)unsubscribeToAccessoryInfoWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 accessoryInfoTypes:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cfde6
- (void)subscribeToAccessoryInfoWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 accessoryInfoTypes:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cf789
- (id)accessoryUUIDForIdentifier:(id)arg1 homeIdentifier:(id)arg2;	// IMP=0x00000000000cf6d5
- (id)homeUUIDForIdentifier:(id)arg1;	// IMP=0x00000000000cf67c
- (id)initWithContext:(id)arg1 subscriptionProvider:(id)arg2;	// IMP=0x00000000000cf5bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

