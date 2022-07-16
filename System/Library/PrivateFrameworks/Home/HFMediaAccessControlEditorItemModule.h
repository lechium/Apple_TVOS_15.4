//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeObserver-Protocol.h>

@class HFMediaAccessControlEditorItemProvider, HMHome, NSSet, NSString;

@interface HFMediaAccessControlEditorItemModule <HFHomeObserver>
{
    NSSet *_itemProviders;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    HFMediaAccessControlEditorItemProvider *_accessControlEditorItemProvider;	// 24 = 0x18
}

+ (id)_descriptionFooterTextForAccessControlDescriptor:(id)arg1 hasNonPeerToPeerMediaAccessories:(_Bool)arg2;	// IMP=0x000000000008fc9e
- (void).cxx_destruct;	// IMP=0x0000000000090237
@property(readonly, nonatomic) HFMediaAccessControlEditorItemProvider *accessControlEditorItemProvider; // @synthesize accessControlEditorItemProvider=_accessControlEditorItemProvider;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;	// IMP=0x00000000000900be
- (void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;	// IMP=0x0000000000090010
- (void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;	// IMP=0x000000000008ff62
- (_Bool)_hasNonPeerToPeerMediaAccessories;	// IMP=0x000000000008fc0a
- (id)updateAccessControlDescriptor:(id)arg1;	// IMP=0x000000000008f99f
- (_Bool)containsItem:(id)arg1;	// IMP=0x000000000008f887
- (id)buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x000000000008f2ee
- (id)itemProviders;	// IMP=0x000000000008f231
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;	// IMP=0x000000000008f143
- (id)initWithItemUpdater:(id)arg1;	// IMP=0x000000000008f08e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

