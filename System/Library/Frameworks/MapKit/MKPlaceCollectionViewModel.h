//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPlaceCollection, NSAttributedString, UIColor, UIFont, UIImage;
@protocol MKCuratedCollectionsSyncCoordinator, OS_dispatch_queue;

@interface MKPlaceCollectionViewModel : NSObject
{
    long long _context;	// 8 = 0x8
    UIFont *_titleFont;	// 16 = 0x10
    double _screenScale;	// 24 = 0x18
    UIImage *_collectionImage;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;	// 48 = 0x30
    _Bool _isSaved;	// 56 = 0x38
    UIColor *_backgroundColor;	// 64 = 0x40
    NSAttributedString *_collectionTitle;	// 72 = 0x48
    NSAttributedString *_collectionLongTitle;	// 80 = 0x50
    NSAttributedString *_secondaryCollectionTitle;	// 88 = 0x58
    GEOPlaceCollection *_placeCollection;	// 96 = 0x60
    id <MKCuratedCollectionsSyncCoordinator> _syncCoordinator;	// 104 = 0x68
    UIImage *_publisherLogoImage;	// 112 = 0x70
    struct CGSize _photoSize;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000001a88f6
@property(retain) UIImage *publisherLogoImage; // @synthesize publisherLogoImage=_publisherLogoImage;
@property(nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
@property(retain, nonatomic) id <MKCuratedCollectionsSyncCoordinator> syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(readonly, nonatomic) GEOPlaceCollection *placeCollection; // @synthesize placeCollection=_placeCollection;
@property(nonatomic) _Bool isSaved; // @synthesize isSaved=_isSaved;
@property(retain, nonatomic) NSAttributedString *secondaryCollectionTitle; // @synthesize secondaryCollectionTitle=_secondaryCollectionTitle;
@property(retain, nonatomic) NSAttributedString *collectionLongTitle; // @synthesize collectionLongTitle=_collectionLongTitle;
@property(retain, nonatomic) NSAttributedString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)description;	// IMP=0x00000000001a8759
- (void)publisherLogoImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a85dd
- (void)publisherIconImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a8457
- (void)_publisherImageWithIdentifier:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a7fa2
- (_Bool)shouldDisplayMetadata;	// IMP=0x00000000001a7f42
- (id)initWithGEOPlaceCollection:(id)arg1 usingSyncCoordinator:(id)arg2 inContext:(long long)arg3 usingTitleFont:(id)arg4;	// IMP=0x00000000001a77e6
- (void)collectionImageForSize:(struct CGSize)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a8981

@end

