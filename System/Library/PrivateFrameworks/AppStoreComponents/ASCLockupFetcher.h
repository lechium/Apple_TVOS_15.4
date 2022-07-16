//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCLazy, ASCPendingPromises, ASCTaskCoordinator;
@protocol ASCServices;

__attribute__((visibility("hidden")))
@interface ASCLockupFetcher : NSObject
{
    id <ASCServices> _connection;	// 8 = 0x8
    ASCPendingPromises *_pendingRequests;	// 16 = 0x10
    ASCTaskCoordinator *_requestCoordinator;	// 24 = 0x18
    ASCLazy *_bundleCoordinator;	// 32 = 0x20
}

+ (id)sharedFetcher;	// IMP=0x0000000000001c80
- (void).cxx_destruct;	// IMP=0x0000000000003bc8
@property(readonly, nonatomic) ASCLazy *bundleCoordinator; // @synthesize bundleCoordinator=_bundleCoordinator;
@property(readonly, nonatomic) ASCTaskCoordinator *requestCoordinator; // @synthesize requestCoordinator=_requestCoordinator;
@property(readonly, nonatomic) ASCPendingPromises *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) id <ASCServices> connection; // @synthesize connection=_connection;
- (id)collectionWithRequest:(id)arg1;	// IMP=0x000000000000354e
- (id)lockupForBundleID:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000002f1a
- (void)submitBatchRequest:(id)arg1;	// IMP=0x0000000000002518
- (id)lockupWithRequest:(id)arg1;	// IMP=0x00000000000021b0
- (id)loadedLockupWithRequest:(id)arg1;	// IMP=0x00000000000020fa
- (void)daemonDidRebootstrap:(id)arg1;	// IMP=0x00000000000020bd
- (void)daemonConnectionWasLost:(id)arg1;	// IMP=0x0000000000001fc0
- (void)dealloc;	// IMP=0x0000000000001f4b
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000001d26

@end

