//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCReportingIdentityPropertiesLoading-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCReportingDeviceIdentityPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading>
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialWorkQueue;	// 16 = 0x10
}

+ (id)sharedLoader;	// IMP=0x000000000006dc77
- (void).cxx_destruct;	// IMP=0x000000000006d928
- (void)loadReportingIdentityPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006d89d
- (id)init;	// IMP=0x000000000006d824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
