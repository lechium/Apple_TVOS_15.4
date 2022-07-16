//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSServerDataCacheService : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (_Bool)_serverDataCacheFeatureEnabled;	// IMP=0x00000000001f1a41
- (void).cxx_destruct;	// IMP=0x00000000001f1a8f
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)updateCacheForAccountDSID:(id)arg1 withCacheTypeIDs:(id)arg2;	// IMP=0x00000000001f1764
- (id)updateCacheForAccountDSID:(id)arg1 withCachePayload:(id)arg2;	// IMP=0x00000000001f1495
- (id)tearDownCacheForAccountDSID:(id)arg1;	// IMP=0x00000000001f11f5
- (id)setUpCacheForAccountDSID:(id)arg1;	// IMP=0x00000000001f0f55
- (id)setUpCacheForAccount:(id)arg1;	// IMP=0x00000000001f0c80
- (id)dataForAccountDSID:(id)arg1 cacheTypeID:(id)arg2 networkPolicy:(long long)arg3;	// IMP=0x00000000001f0975
- (id)granularNotificationSettingsForAccountDSID:(id)arg1 bundleID:(id)arg2 networkPolicy:(long long)arg3;	// IMP=0x00000000001f068f
- (void)_removeRemoteConnection;	// IMP=0x00000000001f0635
- (id)_newRemoteConnection;	// IMP=0x00000000001f0407
- (id)_makeRemoteConnectionInterface;	// IMP=0x00000000001f03a1
- (void)dealloc;	// IMP=0x00000000001f0363
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001effc2
- (id)init;	// IMP=0x00000000001eff41

@end
