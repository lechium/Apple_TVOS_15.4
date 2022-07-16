//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderConnectionServerProxy-Protocol.h>
#import <BulletinBoard/BBDataProviderStore-Protocol.h>
#import <BulletinBoard/BBRemoteDataProviderDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol BBRemoteDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBRemoteDataProviderConnection : NSObject <BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore>
{
    _Bool _connected;	// 8 = 0x8
    id <BBRemoteDataProviderStoreDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableDictionary *_dataProvidersBySectionID;	// 32 = 0x20
    NSMutableDictionary *_dataProvidersByUniversalSectionID;	// 40 = 0x28
    _Bool _clientReady;	// 48 = 0x30
    NSString *_serviceName;	// 56 = 0x38
    NSString *_bundleID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005672a
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056377
- (void)removeDataProvider:(id)arg1;	// IMP=0x000000000005624f
- (id)dataProvidersForUniversalSectionID:(id)arg1;	// IMP=0x000000000005610e
- (id)dataProviderForSectionID:(id)arg1;	// IMP=0x0000000000055fa8
- (void)loadAllDataProviders;	// IMP=0x0000000000055fa2
- (void)clientIsReady:(CDUnknownBlockType)arg1;	// IMP=0x0000000000055ef4
- (void)addParentSectionFactory:(id)arg1;	// IMP=0x0000000000055de1
- (void)removeDataProviderWithSectionID:(id)arg1;	// IMP=0x0000000000055d01
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;	// IMP=0x0000000000055ceb
- (void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005564f
- (void)_queue_removeDataProvider:(id)arg1;	// IMP=0x0000000000055472
- (void)setConnected:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000550a4
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;	// IMP=0x0000000000054cbc
- (id)initWithServiceName:(id)arg1 bundleID:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000054b05

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
