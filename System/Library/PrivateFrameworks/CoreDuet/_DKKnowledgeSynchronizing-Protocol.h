//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, NSUUID, _DKObject;
@protocol OS_dispatch_queue;

@protocol _DKKnowledgeSynchronizing
- (NSUUID *)deviceUUID;
- (NSString *)sourceDeviceIdentityWithError:(id *)arg1;
- (NSString *)sourceDeviceIdentityFromObject:(_DKObject *)arg1 error:(id *)arg2;
- (_Bool)deleteRemoteState:(id *)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 responseQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSError *))arg4;
- (_Bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 error:(id *)arg3;
- (_Bool)synchronizeWithError:(id *)arg1;
@end

