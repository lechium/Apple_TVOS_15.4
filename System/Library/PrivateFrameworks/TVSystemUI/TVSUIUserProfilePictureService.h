//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/PBSUserProfilePictureServiceDelegate-Protocol.h>

@class NSMutableDictionary, PBSUserProfilePictureService;
@protocol OS_dispatch_queue;

@interface TVSUIUserProfilePictureService : NSObject <PBSUserProfilePictureServiceDelegate>
{
    double _profilePictureDiameter;	// 8 = 0x8
    PBSUserProfilePictureService *_pbsService;	// 16 = 0x10
    NSMutableDictionary *_observersByIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003825c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *observersByIdentifier; // @synthesize observersByIdentifier=_observersByIdentifier;
@property(retain, nonatomic) PBSUserProfilePictureService *pbsService; // @synthesize pbsService=_pbsService;
@property(readonly, nonatomic) double profilePictureDiameter; // @synthesize profilePictureDiameter=_profilePictureDiameter;
- (void)userProfileService:(id)arg1 didUpdateUserProfilePicture:(id)arg2;	// IMP=0x00000000000381eb
- (id)_imageForUserProfilePicture:(id)arg1;	// IMP=0x0000000000037fbb
- (void)_notifyObserversOfUpdatedUserProfilePicture:(id)arg1;	// IMP=0x0000000000037bdd
- (void)_processUserProfilePicture:(id)arg1 forObserver:(id)arg2;	// IMP=0x0000000000037b65
- (id)profilePictureForUserWithIdentifier:(id)arg1;	// IMP=0x000000000003779b
- (id)initWithProfilePictureDiameter:(double)arg1;	// IMP=0x00000000000376e7

@end
