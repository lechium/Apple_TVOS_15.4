//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/TVSUIUserPickerViewControllerDataSource-Protocol.h>

@class NSDictionary, NSDiffableDataSourceSnapshot, NSMutableDictionary, NSPredicate, NSSet, NSString, PBSUserProfileManager, TVSUIUserProfilePictureService, _UserProfileServiceObserver;

@interface TVSUIUserPickerProfilesDataSource : NSObject <TVSUIUserPickerViewControllerDataSource>
{
    NSPredicate *_userProfileFilterPredicate;	// 8 = 0x8
    _UserProfileServiceObserver *_userProfileObserver;	// 16 = 0x10
    PBSUserProfileManager *_userProfileManager;	// 24 = 0x18
    TVSUIUserProfilePictureService *_pictureService;	// 32 = 0x20
    NSDictionary *_userProfilesByID;	// 40 = 0x28
    NSMutableDictionary *_shortNamesByID;	// 48 = 0x30
    NSDictionary *_pictureObserversByID;	// 56 = 0x38
    NSDiffableDataSourceSnapshot *_userPickerDiffableSnapshot;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000019980
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *userPickerDiffableSnapshot; // @synthesize userPickerDiffableSnapshot=_userPickerDiffableSnapshot;
@property(retain, nonatomic) NSDictionary *pictureObserversByID; // @synthesize pictureObserversByID=_pictureObserversByID;
@property(retain, nonatomic) NSMutableDictionary *shortNamesByID; // @synthesize shortNamesByID=_shortNamesByID;
@property(retain, nonatomic) NSDictionary *userProfilesByID; // @synthesize userProfilesByID=_userProfilesByID;
@property(retain, nonatomic) TVSUIUserProfilePictureService *pictureService; // @synthesize pictureService=_pictureService;
@property(retain, nonatomic) PBSUserProfileManager *userProfileManager; // @synthesize userProfileManager=_userProfileManager;
@property(retain, nonatomic) _UserProfileServiceObserver *userProfileObserver; // @synthesize userProfileObserver=_userProfileObserver;
@property(retain, nonatomic) NSPredicate *userProfileFilterPredicate; // @synthesize userProfileFilterPredicate=_userProfileFilterPredicate;
- (id)_profileInfoWithIdentifier:(id)arg1;	// IMP=0x0000000000019855
- (id)userPickerModelWithIdentifier:(id)arg1;	// IMP=0x0000000000019686
- (void)_fetchProfilePhotosForAllUsers;	// IMP=0x000000000001923e
- (void)_updateSnapshot;	// IMP=0x0000000000018dc3
- (id)shortNameForUserWithIdentifier:(id)arg1;	// IMP=0x0000000000018d0f
@property(readonly, nonatomic) NSSet *userPickerSelectedUserIdentifiers;
- (void)dealloc;	// IMP=0x0000000000018ba2
- (id)init;	// IMP=0x0000000000018a9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

