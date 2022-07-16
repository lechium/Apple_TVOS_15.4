//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface PLLocalVideoKeyFrameJobQueue : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableOrderedSet *_queuedJobs;	// 16 = 0x10
    NSMutableDictionary *_jobsByAssetObjectID;	// 24 = 0x18
    unsigned long long _inflightCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000032b434
- (_Bool)removeJob:(id)arg1;	// IMP=0x000000000032b31d
- (id)popNextJobToRun;	// IMP=0x000000000032b2a6
- (_Bool)addJobWithAssetObjectID:(id)arg1 networkAccessAllowed:(_Bool)arg2 libraryID:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000032af55
- (id)init;	// IMP=0x000000000032aed9

@end
