//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, TVAppProfileDescriptor;

@protocol TVProfileServiceFromThirdParty
- (void)presentDefaultMappingPanel:(TVAppProfileDescriptor *)arg1 completion:(void (^)(_Bool))arg2;
- (void)presentMappingPanel:(NSDictionary *)arg1 allProfiles:(NSArray *)arg2 completion:(void (^)(NSDictionary *))arg3;
- (void)thirdPartySetUserIdentifiersForCurrentProfile:(NSArray *)arg1;
- (void)fetchCurrentUserIdentifier:(void (^)(NSString *))arg1;
@end

