//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSUserActivityDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, NSUserActivity, PXSectionedSelectionManager, PXSelectionSnapshot;

@interface PXAssetSelectionUserActivityController : NSObject <PXChangeObserver, NSUserActivityDelegate>
{
    struct os_unfair_lock_s _snapshotLock;	// 8 = 0x8
    _Bool _active;	// 12 = 0xc
    _Bool _hasSelection;	// 13 = 0xd
    PXSelectionSnapshot *_selectionSnapshot;	// 16 = 0x10
    PXSectionedSelectionManager *_selectionManager;	// 24 = 0x18
    NSUserActivity *_currentUserActivity;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004609ef
@property(nonatomic) _Bool hasSelection; // @synthesize hasSelection=_hasSelection;
@property(retain, nonatomic) NSUserActivity *currentUserActivity; // @synthesize currentUserActivity=_currentUserActivity;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
- (void)userActivityWillSave:(id)arg1;	// IMP=0x000000000046058c
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000460488
- (void)_updateActivity;	// IMP=0x000000000046032f
@property(retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
- (void)dealloc;	// IMP=0x000000000046003c
- (id)init;	// IMP=0x000000000045ffc2
- (id)initWithSelectionManager:(id)arg1;	// IMP=0x000000000045ff53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

