//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFModelPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFObject-Protocol.h>

@class MKFModelDatabaseID, NSDate, NSUUID;

@protocol MKFModel <MKFObject, MKFModelPublicExtensions>
@property(readonly, copy, nonatomic) MKFModelDatabaseID *databaseID;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@end
