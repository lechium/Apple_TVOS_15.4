//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDContactHandle, DNDModeConfiguration, DNDRequestDetails, NSString;

@protocol DNDRemoteServiceServerModeConfigurationProtocol <NSObject>
- (void)publishStatusKitAvailabilityWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)getUserAvailabilityInActiveModeForContactHandle:(DNDContactHandle *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)getAllowedModesForContactHandle:(DNDContactHandle *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSArray<__NSString__> *, NSError *))arg3;
- (void)syncModeConfigurationsWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)getAvailableModesWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSArray<__DNDMode__> *, NSError *))arg2;
- (void)getAllModesWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSArray<__DNDMode__> *, NSError *))arg2;
- (void)getModeConfigurationForModeIdentifier:(NSString *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(DNDModeConfiguration *, NSError *))arg3;
- (void)getModeConfigurationsWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSArray<__DNDModeConfiguration__> *, NSError *))arg2;
- (void)removeModeConfigurationForModeIdentifier:(NSString *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)setModeConfiguration:(DNDModeConfiguration *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
@end

