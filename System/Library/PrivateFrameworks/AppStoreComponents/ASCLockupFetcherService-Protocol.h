//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class ASCCollectionRequest, ASCLockupBatchRequest, ASCLockupRequest, NSString;

@protocol ASCLockupFetcherService <NSObject>
- (void)getLockupCollectionWithRequest:(ASCCollectionRequest *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getLockupForBundleID:(NSString *)arg1 withContext:(NSString *)arg2 withReplyHandler:(void (^)(ASCLockup *, NSError *))arg3;
- (void)getLockupsWithRequest:(ASCLockupBatchRequest *)arg1 withReplyHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getLockupWithRequest:(ASCLockupRequest *)arg1 withReplyHandler:(void (^)(ASCLockup *, NSError *))arg2;
@end
