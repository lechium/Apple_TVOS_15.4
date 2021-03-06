//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001bc5aa
+ (Class)interfaceClass;	// IMP=0x00100000001bc599
- (oneway void)_getPerGameFriendsPlayerIDForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00200000001bf768
- (oneway void)resetTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bf4d5
- (oneway void)checkTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bf167
- (oneway void)getPerGameFriendsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001be88e
- (oneway void)setPerGameSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bdb19
- (oneway void)getPerGameSettingsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bd228
- (oneway void)getArcadeHighlightForAdamID:(id)arg1 count:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bc5b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

