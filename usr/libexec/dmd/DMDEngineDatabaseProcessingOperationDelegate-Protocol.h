//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class DMDEngineDatabaseProcessingOperation, NSArray, NSString;
@protocol DMDRemoteAssetResolver;

@protocol DMDEngineDatabaseProcessingOperationDelegate <NSObject>
- (id <DMDRemoteAssetResolver>)engineProcessingOperation:(DMDEngineDatabaseProcessingOperation *)arg1 assetResolverForOrganizationWithIdentifier:(NSString *)arg2;
- (NSArray *)engineProcessingOperation:(DMDEngineDatabaseProcessingOperation *)arg1 enqueuedOperationsForOrganizationWithIdentifier:(NSString *)arg2;
@end

