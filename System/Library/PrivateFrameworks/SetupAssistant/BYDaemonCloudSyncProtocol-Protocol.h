//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistant/NSObject-Protocol.h>

@class NSArray;

@protocol BYDaemonCloudSyncProtocol <NSObject>
- (void)cloudSyncProgressUpdate:(long long)arg1 completedClients:(long long)arg2 errors:(NSArray *)arg3 completion:(void (^)(void))arg4;
- (void)isSyncInProgress:(void (^)(_Bool, double))arg1;
- (void)cancelSync:(void (^)(void))arg1;
- (void)startSync:(void (^)(void))arg1;
- (void)needsToSync:(void (^)(unsigned long long))arg1;
@end

