//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXForYouBadgeManager;

@interface PXNavigationListActivityItemDataSectionManager <PXChangeObserver>
{
    PXForYouBadgeManager *_badgeManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004f6da1
@property(readonly, nonatomic) PXForYouBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
- (void)_updateSharedAlbumBadges;	// IMP=0x00000000004f6c24
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000004f6af4
- (id)initWithItem:(id)arg1;	// IMP=0x00000000004f69c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

