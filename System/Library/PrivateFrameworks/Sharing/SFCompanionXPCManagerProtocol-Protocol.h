//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>

@class NSDictionary, NSString, SFRemoteHotspotCellularBearerParams;
@protocol SFCompanionServiceManagerClient;

@protocol SFCompanionXPCManagerProtocol <NSObject>
- (void)removeDedicatedCellularBearerWithCompletion:(void (^)(NSError *))arg1;
- (void)addDedicatedCellularBearer:(SFRemoteHotspotCellularBearerParams *)arg1 completion:(void (^)(NSError *))arg2;
- (void)appleAccountSignedOut;
- (void)appleAccountSignedIn;
- (void)createUnlockManagerWithReply:(void (^)(id <SFUnlockProtocol>, NSError *))arg1;
- (void)createStreamsForMessage:(NSDictionary *)arg1 reply:(void (^)(NSFileHandle *, NSError *))arg2;
- (void)createCompanionServiceManagerWithIdentifier:(NSString *)arg1 clientProxy:(id <SFCompanionServiceManagerClient>)arg2 reply:(void (^)(id <SFCompanionServiceManagerProtocol>, NSString *, NSString *, NSString *, NSError *))arg3;
@end

