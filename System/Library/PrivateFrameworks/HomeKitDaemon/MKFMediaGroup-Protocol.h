//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFMediaGroupPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class MKFMediaGroupDatabaseID, NSArray, NSString;
@protocol MKFHome;

@protocol MKFMediaGroup <MKFModel, MKFMediaGroupPublicExtensions>
@property(readonly, copy, nonatomic) MKFMediaGroupDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(readonly, retain, nonatomic) NSArray *destinations;
@property(copy, nonatomic) NSString *name;
@end

