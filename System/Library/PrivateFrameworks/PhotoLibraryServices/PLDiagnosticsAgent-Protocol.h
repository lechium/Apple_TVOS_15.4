//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@protocol PLDiagnosticsAgent
- (void)timelineForWidgetSize:(NSString *)arg1 jsonFormat:(_Bool)arg2 resultHandler:(void (^)(NSString *))arg3;
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(void (^)(NSString *))arg1;
- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(void (^)(NSString *))arg1;
- (void)captureDescriptionOfStatisticsWithResultHandler:(void (^)(NSString *))arg1;
- (void)dumpState:(long long)arg1 toDirectoryURL:(NSURL *)arg2 resultHandler:(void (^)(NSString *))arg3;
- (void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(void (^)(NSString *))arg2;
@end

