//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>

@class SKADatabaseChannel;
@protocol SKADatabaseManaging;

@protocol SKADatabaseManagingDelegate <NSObject>
- (void)databaseManager:(id <SKADatabaseManaging>)arg1 didCreateChannel:(SKADatabaseChannel *)arg2;
@end

