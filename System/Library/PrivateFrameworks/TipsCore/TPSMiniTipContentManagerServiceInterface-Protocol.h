//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/TPSAnalyticsXPCServerInterface-Protocol.h>
#import <TipsCore/TPSRecordXPCServerInterface-Protocol.h>

@class NSArray, NSString;

@protocol TPSMiniTipContentManagerServiceInterface <TPSAnalyticsXPCServerInterface, TPSRecordXPCServerInterface>
- (oneway void)restartTrackingForContentIdentifiers:(NSArray *)arg1;
- (oneway void)hintDismissedForIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3 reason:(long long)arg4;
- (oneway void)hintDisplayedForIdentifier:(NSString *)arg1 correlationID:(NSString *)arg2 context:(NSString *)arg3;
- (oneway void)personalizationFailedForContentID:(NSString *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3;
- (void)validateAndPrepareContentForDisplay:(id)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3 skipUsageCheck:(_Bool)arg4 completionHandler:(void (^)(_Bool, id, NSError *))arg5;
- (void)contentWithContentIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
@end

