//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/TVCKDataClient.h>

@class NSObject, TVLAppliance, TVLLegacyJSContext;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TVLJSDataClient : TVCKDataClient
{
    TVLLegacyJSContext *_jsContext;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_jsContextAccessQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_jsContextPurgeTimer;	// 24 = 0x18
    TVLAppliance *_appliance;	// 32 = 0x20
}

+ (id)_dataTypeToFeedType:(id)arg1;	// IMP=0x00000000000bd440
+ (id)dataPropertyToFeedProperty:(id)arg1;	// IMP=0x00000000000bd313
+ (id)dataTypeFromFeedType:(id)arg1;	// IMP=0x00000000000bd21e
- (void).cxx_destruct;	// IMP=0x00000000000be449
@property(readonly, nonatomic) TVLAppliance *appliance; // @synthesize appliance=_appliance;
- (void)cancelLoad:(id)arg1;	// IMP=0x00000000000be3c2
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000be256
- (id)imageKeyForObject:(id)arg1;	// IMP=0x00000000000be173
- (id)_queryDictionaryForQuery:(id)arg1;	// IMP=0x00000000000bdb3a
- (id)_makeJSContext;	// IMP=0x00000000000bd930
- (void)_accessJSContextWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bd598
- (_Bool)processQueryAsync:(id)arg1;	// IMP=0x00000000000bd216
- (void)executeQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bc6e3
- (void)concreteDataClientDisconnect;	// IMP=0x00000000000bc620
- (void)concreteDataClientConnect;	// IMP=0x00000000000bc609
- (id)imageURLWithAsset:(id)arg1 size:(struct CGSize)arg2 crop:(_Bool)arg3;	// IMP=0x00000000000bc02e
- (id)initWithAppliance:(id)arg1;	// IMP=0x00000000000bbef7

@end

