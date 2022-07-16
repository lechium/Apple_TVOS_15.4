//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDFMFHandler : HMFObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000006dd46a
+ (id)sharedHandler;	// IMP=0x00000000006dd462
- (void).cxx_destruct;	// IMP=0x00000000006dd4e8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)queryFMFStatusWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006dd4d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
