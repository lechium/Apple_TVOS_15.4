//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCollectionFetchOperationDelegate-Protocol.h>
#import <PhotosUICore/PXDataSectionManagerEnabling-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSOperationQueue, NSString, PHCollection, PHFetchResult, PXDataSectionEnablementForwarder;
@protocol PXNavigationListItem;

@interface PXNavigationListItemDataSectionManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver, PXDataSectionManagerEnabling>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _hiddenWhenEmpty;	// 9 = 0x9
    PXDataSectionEnablementForwarder *_enablementForwarder;	// 16 = 0x10
    PHCollection *_collection;	// 24 = 0x18
    NSOperationQueue *_workQueue;	// 32 = 0x20
    id <PXNavigationListItem> _listItem;	// 40 = 0x28
    PHFetchResult *_fetchResult;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000083f375
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(nonatomic, getter=isHiddenWhenEmpty) _Bool hiddenWhenEmpty; // @synthesize hiddenWhenEmpty=_hiddenWhenEmpty;
@property(readonly, nonatomic) id <PXNavigationListItem> listItem; // @synthesize listItem=_listItem;
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) PHCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder; // @synthesize enablementForwarder=_enablementForwarder;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x000000000083f22b
- (void)collectionFetchOperationDidComplete:(id)arg1;	// IMP=0x000000000083f1dc
@property(readonly, copy) NSString *description;
- (id)createDataSection;	// IMP=0x000000000083f00d
- (void)updateDataSectionIfNecessary;	// IMP=0x000000000083ef28
@property(readonly, nonatomic, getter=isCollectionVisible) _Bool collectionVisible;
@property(readonly, nonatomic, getter=isCollectionEmpty) _Bool collectionEmpty;
- (_Bool)allowsEmptyDataSection;	// IMP=0x000000000083ebd6
- (id)initWithChildDataSectionManagers:(id)arg1;	// IMP=0x000000000083eb53
- (id)initWithItem:(id)arg1;	// IMP=0x000000000083ead3
- (id)initWithCollection:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000083ea1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

