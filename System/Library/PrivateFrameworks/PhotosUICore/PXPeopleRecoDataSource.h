//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableIndexSet, NSString, PHFetchResult, PHPerson;
@protocol OS_dispatch_queue, PXPeopleRecoDataSourceDelegate;

@interface PXPeopleRecoDataSource : NSObject <PXPhotoLibraryUIChangeObserver>
{
    PHPerson *_person;	// 8 = 0x8
    id <PXPeopleRecoDataSourceDelegate> _dataSourceDelegate;	// 16 = 0x10
    PHFetchResult *_faces;	// 24 = 0x18
    PHFetchResult *_faceCrops;	// 32 = 0x20
    NSMutableIndexSet *_rejectedFaceIndexes;	// 40 = 0x28
    NSMutableIndexSet *_rejectedFaceCropIndexes;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_processingQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000897fa7
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, nonatomic) NSMutableIndexSet *rejectedFaceCropIndexes; // @synthesize rejectedFaceCropIndexes=_rejectedFaceCropIndexes;
@property(readonly, nonatomic) NSMutableIndexSet *rejectedFaceIndexes; // @synthesize rejectedFaceIndexes=_rejectedFaceIndexes;
@property(retain, nonatomic) PHFetchResult *faceCrops; // @synthesize faceCrops=_faceCrops;
@property(retain, nonatomic) PHFetchResult *faces; // @synthesize faces=_faces;
@property(readonly, nonatomic) __weak id <PXPeopleRecoDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
- (void)_clearIndexes;	// IMP=0x0000000000897e6c
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x0000000000897ad6
- (void)commitChanges;	// IMP=0x000000000089782b
- (_Bool)hasAnyRejectedItems;	// IMP=0x000000000089779d
- (_Bool)shouldAllowCommitting;	// IMP=0x00000000008976fb
- (_Bool)toggleRejectionForIndex:(unsigned long long)arg1;	// IMP=0x00000000008975be
- (_Bool)isIndexRejected:(unsigned long long)arg1;	// IMP=0x000000000089750f
- (void)requestImageForItemAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 displayScale:(double)arg3 imageBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000089728f
- (unsigned long long)numberOfItems;	// IMP=0x0000000000897202
- (void)_fetchEverythingForPerson:(id)arg1;	// IMP=0x000000000089708f
- (id)initWithPerson:(id)arg1 dataSourceDelegate:(id)arg2;	// IMP=0x0000000000896f75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

