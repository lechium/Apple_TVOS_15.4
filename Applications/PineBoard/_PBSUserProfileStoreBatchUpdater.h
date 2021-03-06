//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PBUserProfileStore;

@interface _PBSUserProfileStoreBatchUpdater : NSObject
{
    PBUserProfileStore *_userProfileStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000a1c90
@property(nonatomic) __weak PBUserProfileStore *userProfileStore; // @synthesize userProfileStore=_userProfileStore;
- (id)userProfileIdentifierForHomeUserIdentifier:(id)arg1 inHomeIdentifier:(id)arg2 homeOwnerIdentifier:(id)arg3;	// IMP=0x00100000000a1b50
- (id)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a1a90
- (id)updateUserProfileWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00100000000a19d0
- (id)createUserProfileWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a1930
- (_Bool)addUserProfile:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a18a0
- (void)updateUserProfileWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a17f0
- (void)removeUserProfileWithIdentifier:(id)arg1;	// IMP=0x00100000000a1730
- (void)addUserProfile:(id)arg1;	// IMP=0x00100000000a16b0
@property(readonly, nonatomic) NSString *selectedUserProfileIdentifier;
@property(readonly, nonatomic) NSString *primaryUserProfileIdentifier;
@property(readonly, nonatomic) NSDictionary *userProfiles;

@end

