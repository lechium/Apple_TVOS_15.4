//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAssistantAccessControlPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class MKFAssistantAccessControlDatabaseID, NSNumber, NSString;
@protocol MKFAccessory, MKFHome;

@protocol MKFAssistantAccessControl <MKFModel, MKFAssistantAccessControlPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFAssistantAccessControlDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFAccessory> accessory;
@property(copy, nonatomic) NSNumber *options;
@property(copy, nonatomic) NSNumber *enabled;
@property(copy, nonatomic) NSString *changeTag;
@end

