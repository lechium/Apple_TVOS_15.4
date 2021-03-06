//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSHashTable, NSIndexPath, NSString;
@protocol OS_dispatch_queue;

@interface PXPeopleSectionedDataSource : NSObject <PXPhotoLibraryUIChangeObserver>
{
    NSString *_localizedTitle;	// 8 = 0x8
    NSArray *_dataSources;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_reloadQueue;	// 24 = 0x18
    id _pauseToken;	// 32 = 0x20
    NSHashTable *_changeObservers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000008fdeed
@property(retain, nonatomic) NSHashTable *changeObservers; // @synthesize changeObservers=_changeObservers;
@property(retain, nonatomic) id pauseToken; // @synthesize pauseToken=_pauseToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // @synthesize reloadQueue=_reloadQueue;
@property(readonly, copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (unsigned long long)_fetchTypeForPersonType:(long long)arg1;	// IMP=0x00000000008fde6d
- (long long)_sectionForFetchType:(unsigned long long)arg1;	// IMP=0x00000000008fdd9d
- (id)_dataSourceForIndexPath:(id)arg1;	// IMP=0x00000000008fdd69
- (id)_dataSourceForSection:(long long)arg1;	// IMP=0x00000000008fdc90
- (id)_dataSourceForFetchType:(unsigned long long)arg1;	// IMP=0x00000000008fdb31
- (void)removeVisiblePerson:(id)arg1;	// IMP=0x00000000008fda62
- (void)addVisiblePerson:(id)arg1;	// IMP=0x00000000008fd993
- (void)cancelImageLoadingForItem:(id)arg1;	// IMP=0x00000000008fd89b
- (void)imageAtIndexPath:(id)arg1 targetSize:(struct CGSize)arg2 displayScale:(double)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000008fd7d9
- (void)imageAtIndexPath:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000008fd70a
- (id)_generateChangeDetailsForChangeInstance:(id)arg1;	// IMP=0x00000000008fd63a
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;	// IMP=0x00000000008fd3f1
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x00000000008fd0aa
- (void)resumeListeningForChanges;	// IMP=0x00000000008fd023
- (void)pauseListeningForChangesWithTimeout:(double)arg1 identifier:(id)arg2;	// IMP=0x00000000008fcf6c
- (void)stopListeningToLibraryNotifications;	// IMP=0x00000000008fcf19
- (void)startListeningToLibraryNotifications;	// IMP=0x00000000008fcec6
- (void)loadAndStartListeningToLibraryNotifications;	// IMP=0x00000000008fce1e
- (void)removeChangeObserver:(id)arg1;	// IMP=0x00000000008fcdac
- (void)addChangeObserver:(id)arg1;	// IMP=0x00000000008fcd3a
- (void)reloadFromDatabase;	// IMP=0x00000000008fcb75
- (void)changePersonsAtIndexPaths:(id)arg1 toPersonType:(long long)arg2;	// IMP=0x00000000008fc7b8
- (void)movePersonAtIndexPath:(id)arg1 toIndexPath:(id)arg2 shouldUpdateImmediately:(_Bool)arg3;	// IMP=0x00000000008fc44e
- (id)indexPathOfPerson:(id)arg1;	// IMP=0x00000000008fc29b
@property(readonly, nonatomic) NSIndexPath *trailingFavoritePersonIndexPath;
@property(readonly, nonatomic) NSIndexPath *leadingFavoritePersonIndexPath;
@property(readonly, copy, nonatomic) NSArray *allPersons;
- (unsigned long long)numberOfPersonsWithStringName;	// IMP=0x00000000008fbda1
- (unsigned long long)numberOfPersonsWithContactName;	// IMP=0x00000000008fbb8c
@property(readonly, nonatomic) unsigned long long totalPersonCount;
- (unsigned long long)photoQuantityAtIndexPath:(id)arg1;	// IMP=0x00000000008fb971
- (id)titleAtIndexPath:(id)arg1;	// IMP=0x00000000008fb8db
- (id)personsForType:(long long)arg1;	// IMP=0x00000000008fb7a4
- (id)personsAtIndexPaths:(id)arg1;	// IMP=0x00000000008fb743
- (id)faceTileAtIndexPath:(id)arg1;	// IMP=0x00000000008fb6ad
- (id)personAtIndexPath:(id)arg1;	// IMP=0x00000000008fb65d
- (id)memberAtIndexPath:(id)arg1;	// IMP=0x00000000008fb5c7
- (unsigned long long)fetchTypeForSection:(long long)arg1;	// IMP=0x00000000008fb583
- (_Bool)canReorderMembersInSection:(long long)arg1;	// IMP=0x00000000008fb57b
- (id)localizedDisclosedTitleForSection:(long long)arg1;	// IMP=0x00000000008fb52b
- (id)localizedTitleForSection:(long long)arg1;	// IMP=0x00000000008fb4db
- (unsigned long long)numberOfPersonsInSection:(long long)arg1;	// IMP=0x00000000008fb497
@property(readonly, nonatomic) unsigned long long numberOfDisclosedSections;
@property(readonly, nonatomic) unsigned long long numberOfSections;
- (void)dealloc;	// IMP=0x00000000008fb2bd
- (id)initWithSections:(id)arg1;	// IMP=0x00000000008fb1ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

