//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OTSOSMissingAdapter : NSObject
{
    _Bool sosEnabled;	// 8 = 0x8
    _Bool _essential;	// 9 = 0x9
    NSString *_providerID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008d71c
@property _Bool essential; // @synthesize essential=_essential;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
@property _Bool sosEnabled; // @synthesize sosEnabled;
- (_Bool)resetToOffering:(id *)arg1;	// IMP=0x001000000008d68a
- (_Bool)joinAfterRestore:(id *)arg1;	// IMP=0x001000000008d634
- (_Bool)preloadOctagonKeySetOnAccount:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008d5de
- (_Bool)safariViewSyncingEnabled:(id *)arg1;	// IMP=0x001000000008d5d6
- (id)currentState;	// IMP=0x001000000008d50a
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x001000000008d504
- (void)sendSelfPeerChangedUpdate;	// IMP=0x001000000008d4fe
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x001000000008d4f8
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x001000000008d4a2
- (_Bool)updateCKKS4AllStatus:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000008d44c
- (_Bool)updateOctagonKeySetWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008d3f6
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x001000000008d3a0
- (id)currentSOSSelf:(id *)arg1;	// IMP=0x001000000008d34a
- (int);	// IMP=0x001000000008d33f
- (id)init;	// IMP=0x001000000008d2d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

