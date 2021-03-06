//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol PLPhotoAnalysisJobServiceProtocol
- (void)reportTurboEnabledWithContext:(NSDictionary *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)setJobProcessingConstraintsWithValues:(NSString *)arg1 mask:(NSString *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSError *))arg4;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(NSString *)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSError *))arg5;
@end

