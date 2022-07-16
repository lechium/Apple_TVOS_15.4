//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface HBFolder
{
    _Bool _recentlyCreatedWhileEditing;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    NSString *_folderIdentifier;	// 32 = 0x20
    NSArray *_applicationIdentifiers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000004f786
@property(copy, nonatomic) NSArray *applicationIdentifiers; // @synthesize applicationIdentifiers=_applicationIdentifiers;
@property(nonatomic) _Bool recentlyCreatedWhileEditing; // @synthesize recentlyCreatedWhileEditing=_recentlyCreatedWhileEditing;
@property(copy, nonatomic) NSString *folderIdentifier; // @synthesize folderIdentifier=_folderIdentifier;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)_enumerateRecursiveItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004f53f
- (void)_setItems:(id)arg1 save:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x001000000004f16a
- (void)_updateForBadgeChange;	// IMP=0x001000000004ef27
- (id)_currentAppIdentifiersExcludingApps:(id)arg1;	// IMP=0x001000000004ed06
- (id)_currentAppIdentifiers;	// IMP=0x001000000004eca0
- (void)_updateForItemsChangeShouldNotify:(_Bool)arg1;	// IMP=0x001000000004ec65
- (void)_updateInstallProgressShouldNotify:(_Bool)arg1;	// IMP=0x001000000004e8d5
- (id)_validInstallableApps;	// IMP=0x001000000004e711
- (id)_validateDisplayName:(id)arg1;	// IMP=0x001000000004e66c
- (void)_updateIconAppIdentifiers;	// IMP=0x001000000004e620
- (void)installStateDidChange:(id)arg1;	// IMP=0x001000000004e609
- (void)itemsDidChange:(id)arg1;	// IMP=0x001000000004e53b
- (void)folderChangeNeedsSaving:(id)arg1;	// IMP=0x001000000004e529
- (void)_notifyIconImagesDidChange;	// IMP=0x001000000004e3c3
- (void)_notifyItemsDidChange;	// IMP=0x001000000004e25d
- (void)_notifyFolderChangeNeedsSaving;	// IMP=0x001000000004e0f7
- (void)enumerateRecursiveApplicationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004e010
- (void)copyItemOrderIdentifiersFromFolder:(id)arg1;	// IMP=0x001000000004dce9
- (void)removeApplicationsWithBundleIdentifiers:(id)arg1;	// IMP=0x001000000004da76
- (id)findAppWithApplicationIdentifier:(id)arg1;	// IMP=0x001000000004d7ff
- (_Bool)isInstallPaused;	// IMP=0x001000000004d7f7
- (_Bool)isValidDisplayName:(id)arg1;	// IMP=0x001000000004d7c4
@property(readonly, copy, nonatomic) NSString *moveActionDisplayName;
- (void)setDisplayName:(id)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x001000000004d598
- (id)displayName;	// IMP=0x001000000004d509
- (void)setIconAppIdentifiers:(id)arg1;	// IMP=0x001000000004d499
@property(readonly, copy, nonatomic) NSArray *allFolders;
- (id)allApplicationIdentifiers;	// IMP=0x001000000004d0a1
@property(readonly, copy, nonatomic) NSArray *allApplications;
- (void)setItems:(id)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x001000000004ce25
- (void)setItems:(id)arg1 thenSave:(_Bool)arg2;	// IMP=0x001000000004cdf0
- (_Bool)isEquivalentToFolder:(id)arg1;	// IMP=0x001000000004caaa
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004c8b7
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)_appIconNameDidChange:(id)arg1;	// IMP=0x001000000004c554
- (void)dealloc;	// IMP=0x001000000004c4df
- (id)init;	// IMP=0x001000000004c44e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

