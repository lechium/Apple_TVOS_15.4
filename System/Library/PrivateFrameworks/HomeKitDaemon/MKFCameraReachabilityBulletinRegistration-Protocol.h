//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFBulletinRegistration-Protocol.h>
#import <HomeKitDaemon/MKFCameraReachabilityBulletinRegistrationPublicExtensions-Protocol.h>

@class MKFCameraReachabilityBulletinRegistrationDatabaseID;
@protocol MKFAccessory;

@protocol MKFCameraReachabilityBulletinRegistration <MKFBulletinRegistration, MKFCameraReachabilityBulletinRegistrationPublicExtensions>
@property(readonly, copy, nonatomic) MKFCameraReachabilityBulletinRegistrationDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFAccessory> accessory;
@end

