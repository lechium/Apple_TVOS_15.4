//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;
@protocol SecuritydXPCCallbackProtocol;

@protocol SecuritydXPCProtocol <NSObject>
- (void)secItemPersistKeychainWritesAtHighPerformanceCost:(void (^)(int, NSError *))arg1;
- (void)secItemPromoteItemsForAppClip:(NSString *)arg1 toParentApp:(NSString *)arg2 completion:(void (^)(int))arg3;
- (void)secItemDeleteForAppClipApplicationIdentifier:(NSString *)arg1 completion:(void (^)(int))arg2;
- (void)secItemVerifyBackupIntegrity:(_Bool)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)secKeychainDeleteMultiuser:(NSData *)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)secItemDigest:(NSString *)arg1 accessGroup:(NSString *)arg2 complete:(void (^)(NSArray *, NSError *))arg3;
- (void)secItemFetchCurrentItemAcrossAllDevices:(NSString *)arg1 identifier:(NSString *)arg2 viewHint:(NSString *)arg3 fetchCloudValue:(_Bool)arg4 complete:(void (^)(NSData *, NSError *))arg5;
- (void)secItemSetCurrentItemAcrossAllDevices:(NSData *)arg1 newCurrentItemHash:(NSData *)arg2 accessGroup:(NSString *)arg3 identifier:(NSString *)arg4 viewHint:(NSString *)arg5 oldCurrentItemReference:(NSData *)arg6 oldCurrentItemHash:(NSData *)arg7 complete:(void (^)(NSError *))arg8;
- (void)SecItemAddAndNotifyOnSync:(NSDictionary *)arg1 syncCallback:(id <SecuritydXPCCallbackProtocol>)arg2 complete:(void (^)(NSDictionary *, NSArray *, NSError *))arg3;
@end

