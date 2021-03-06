//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PHFetchResult, PHPerson, PXPhotosDataSource;
@protocol PXDisplayAsset;

@interface PXActivitySharingContext : NSObject
{
    _Bool _wantsActionSheet;	// 8 = 0x8
    _Bool _excludeShareActivity;	// 9 = 0x9
    PHFetchResult *_assetCollectionsFetchResult;	// 16 = 0x10
    PXPhotosDataSource *_photosDataSource;	// 24 = 0x18
    NSArray *_activities;	// 32 = 0x20
    NSArray *_excludedActivityTypes;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    id <PXDisplayAsset> _keyAsset;	// 64 = 0x40
    PHPerson *_person;	// 72 = 0x48
    long long _sourceOrigin;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000814778
@property(nonatomic) long long sourceOrigin; // @synthesize sourceOrigin=_sourceOrigin;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool excludeShareActivity; // @synthesize excludeShareActivity=_excludeShareActivity;
@property(nonatomic) _Bool wantsActionSheet; // @synthesize wantsActionSheet=_wantsActionSheet;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(readonly, copy, nonatomic) PHFetchResult *assetCollectionsFetchResult; // @synthesize assetCollectionsFetchResult=_assetCollectionsFetchResult;
- (id)init;	// IMP=0x0000000000814618
- (id)initWithAssetCollection:(id)arg1 assetsDataSource:(id)arg2;	// IMP=0x00000000008143fd
- (id)initWithAssetCollection:(id)arg1 photosDataSource:(id)arg2;	// IMP=0x0000000000813dca

@end

