//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PBSRestrictionsSettings : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000000079c00
@property(nonatomic) _Bool allowsBackgroundAppRefreshModification;
@property(nonatomic) _Bool allowsLocationServicesUI;
@property(nonatomic) unsigned long long allowsConferenceRoomDisplaySettingsUI;
@property(nonatomic) unsigned long long allowsAirPlaySettingsUI;
@property(nonatomic) _Bool replayKitAllowed;
@property(nonatomic) _Bool addingGameCenterFriendsAllowed;
@property(nonatomic) _Bool multiplayerGamingAllowed;
@property(readonly, nonatomic) _Bool gameCenterEnabled;
@property(retain, nonatomic) NSNumber *maximumEffectiveAppRanking;
@property(retain, nonatomic) NSNumber *maximumEffectiveTVShowRanking;
@property(retain, nonatomic) NSNumber *maximumEffectiveMovieRanking;
@property(copy, nonatomic) NSString *contentRestrictionsCountryCode;
@property(nonatomic) _Bool allowsSiriExplicitLanaguage;
@property(nonatomic) _Bool allowsInAppPurchase;
@property(nonatomic) unsigned long long allowsPurchaseAndRental;
@property(nonatomic) unsigned long long allowsBookstoreErotica;
@property(nonatomic) unsigned long long allowsExplicitContent;
@property(readonly, nonatomic) _Bool restrictionsEnabled;
- (void)dealloc;	// IMP=0x0000000000079f00
- (void)resetRestrictionSettings;	// IMP=0x0000000000079d80
- (id)init;	// IMP=0x0000000000079cf0

@end

