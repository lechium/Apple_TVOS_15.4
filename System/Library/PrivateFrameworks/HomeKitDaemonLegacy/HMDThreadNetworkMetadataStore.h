//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDThreadNetworkMetadataStore-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDThreadNetworkMetadataStore : HMFObject <HMFLogging, HMDThreadNetworkMetadataStore>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
}

+ (id)defaultStore;	// IMP=0x0000000000788818
+ (id)logCategory;	// IMP=0x00000000007887e8
+ (id)new;	// IMP=0x0000000000788740
- (void).cxx_destruct;	// IMP=0x00000000007886aa
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)_retrieveMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000078854c
- (void)retrieveMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000078849b
- (id)initInternal;	// IMP=0x0000000000788402
- (id)init;	// IMP=0x000000000078835a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

