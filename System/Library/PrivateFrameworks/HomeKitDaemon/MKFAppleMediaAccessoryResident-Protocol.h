//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAppleMediaAccessoryResidentPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFResident-Protocol.h>

@class MKFAppleMediaAccessoryResidentDatabaseID;
@protocol MKFAppleMediaAccessory;

@protocol MKFAppleMediaAccessoryResident <MKFResident, MKFAppleMediaAccessoryResidentPublicExtensions>
@property(readonly, copy, nonatomic) MKFAppleMediaAccessoryResidentDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFAppleMediaAccessory> accessory;
@end
