//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKProfileServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001b6071
+ (Class)interfaceClass;	// IMP=0x00100000001b6060
- (void)loadProfileForPlayer:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00200000001ba4b2
- (oneway void)getProfilePrivacyWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ba22c
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ba08c
- (oneway void)setProfileSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b9cf2
- (oneway void)setProfilePrivacy:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b9701
- (oneway void)setGlobalFriendListAccess:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b9258
- (oneway void)getTermsAndConditionsURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b8c4a
- (oneway void)getSuggestionsForNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b85ed
- (oneway void)setPlayerNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b7c4a
- (oneway void)setFindable:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b7787
- (oneway void)deletePhotoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b72e2
- (oneway void)setPhotoData:(id)arg1 avatarType:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b6c7d
- (oneway void)cachePhotos:(id)arg1 avatarType:(id)arg2 fileNames:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b663d
- (oneway void)setStatus:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b607c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

