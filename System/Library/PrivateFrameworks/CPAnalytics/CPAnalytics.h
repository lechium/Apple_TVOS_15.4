//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPAnalyticsDestinationsRegistry, CPAnalyticsSystemProperties, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface CPAnalytics : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    CPAnalyticsDestinationsRegistry *_registry;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_eventsQueue;	// 24 = 0x18
    long long _signpostUniqueValue;	// 32 = 0x20
    CPAnalyticsSystemProperties *_systemProperties;	// 40 = 0x28
}

+ (id)creationDateForSignpost:(long long)arg1;	// IMP=0x000000000000b199
+ (id)systemPropertyForKey:(id)arg1;	// IMP=0x000000000000b0ea
+ (id)bucketNameForDouble:(double)arg1 bucketLimits:(id)arg2 numberFormatter:(id)arg3;	// IMP=0x000000000000add7
+ (id)bucketNameForInteger:(long long)arg1 bucketLimits:(long long)arg2;	// IMP=0x000000000000ac42
+ (void)removeDestination:(id)arg1;	// IMP=0x000000000000abcc
+ (void)addDestination:(id)arg1;	// IMP=0x000000000000ab56
+ (void)activateEventQueue;	// IMP=0x000000000000ab12
+ (void)startAppTracking;	// IMP=0x000000000000aaee
+ (void)startViewTracking;	// IMP=0x000000000000aaca
+ (void)endSignpost:(long long)arg1 forEventName:(id)arg2 withPayload:(id)arg3;	// IMP=0x000000000000aa38
+ (long long)startSignpost;	// IMP=0x000000000000a9ed
+ (void)sendEvent:(id)arg1 withPayload:(id)arg2;	// IMP=0x000000000000a963
+ (void)releasePhotoLibrary;	// IMP=0x000000000000a91f
+ (void)setupSystemPropertyProvidersForLibrary:(id)arg1;	// IMP=0x000000000000a8a9
+ (_Bool)isAllowed;	// IMP=0x000000000000a87e
+ (void)updateWithConfigurationFilename:(id)arg1 inBundle:(id)arg2;	// IMP=0x000000000000a7f4
+ (void)setupWithConfigurationFilename:(id)arg1 inBundle:(id)arg2;	// IMP=0x000000000000a779
+ (void)setupWithConfigurationAtURL:(id)arg1;	// IMP=0x000000000000a714
+ (id)_sharedInstance;	// IMP=0x000000000000a6de
- (void).cxx_destruct;	// IMP=0x000000000000a026
@property(readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties; // @synthesize systemProperties=_systemProperties;
@property(readonly) long long signpostUniqueValue; // @synthesize signpostUniqueValue=_signpostUniqueValue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *eventsQueue; // @synthesize eventsQueue=_eventsQueue;
@property(readonly, nonatomic) CPAnalyticsDestinationsRegistry *registry; // @synthesize registry=_registry;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (long long)_generateNextSignpostID;	// IMP=0x0000000000009ec6
- (void)removeDestination:(id)arg1;	// IMP=0x0000000000009e15
- (void)addDestination:(id)arg1;	// IMP=0x0000000000009d64
- (void)activateEventQueue;	// IMP=0x0000000000009d2f
- (void)releasePhotoLibrary;	// IMP=0x0000000000009cbe
- (void)setupSystemPropertyProvidersForLibrary:(id)arg1;	// IMP=0x0000000000009c0d
- (void)_setupSystemPropertyProviders;	// IMP=0x0000000000009b53
- (void)endSignpost:(long long)arg1 forEventName:(id)arg2 withPayload:(id)arg3;	// IMP=0x0000000000009a78
- (long long)startSignpost;	// IMP=0x0000000000009998
- (void)sendEvent:(id)arg1 withPayload:(id)arg2;	// IMP=0x0000000000009855
- (void)updateWithConfigurationFilename:(id)arg1 inBundle:(id)arg2;	// IMP=0x000000000000973e
- (void)setupWithConfigurationFilename:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000000009627
- (void)setupWithConfigurationAtURL:(id)arg1;	// IMP=0x0000000000009530
- (id)init;	// IMP=0x00000000000093ac

@end

