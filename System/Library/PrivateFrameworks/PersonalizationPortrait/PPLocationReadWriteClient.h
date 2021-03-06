//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPXPCClientHelper;

@interface PPLocationReadWriteClient : NSObject
{
    PPXPCClientHelper *_clientHelper;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000004e5d9
- (void).cxx_destruct;	// IMP=0x000000000004e483
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;	// IMP=0x000000000004e46a
- (_Bool)cloudSyncWithError:(id *)arg1;	// IMP=0x000000000004e451
- (_Bool)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(_Bool)arg5 decayRate:(double)arg6 error:(id *)arg7;	// IMP=0x000000000004e343
- (_Bool)_doDeletionSyncCallWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2 syncCall:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e0a5
- (_Bool)_doSyncCallWithError:(id *)arg1 syncCall:(CDUnknownBlockType)arg2;	// IMP=0x000000000004de4e
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004de38
- (id)init;	// IMP=0x000000000004dd69

@end

