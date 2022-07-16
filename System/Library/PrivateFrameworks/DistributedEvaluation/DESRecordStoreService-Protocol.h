//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DistributedEvaluation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSUUID, _DKEvent;

@protocol DESRecordStoreService <NSObject>
- (void)fetchNativeRecordDataForRecordUUID:(NSUUID *)arg1 bundleId:(NSString *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)saveCoreDuetEvent:(_DKEvent *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteSavedRecordForBundleId:(NSString *)arg1 identfier:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteAllSavedRecordsForBundleId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchSavedRecordInfoForRecordType:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)saveRecordForBundleId:(NSString *)arg1 data:(NSData *)arg2 recordInfo:(NSDictionary *)arg3 completion:(void (^)(NSUUID *, NSError *))arg4;
- (void)fetchInstalledBundlesIdsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

