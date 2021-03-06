//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PHAsset, PHPhotoLibrary;

@interface PHRelatedFetchOptions : NSObject
{
    _Bool _enableDiversity;	// 8 = 0x8
    _Bool _debugInfoEnabled;	// 9 = 0x9
    NSArray *_excludedAssetCollections;	// 16 = 0x10
    PHAsset *_referenceAsset;	// 24 = 0x18
    unsigned long long _fetchLimit;	// 32 = 0x20
    PHPhotoLibrary *_photoLibrary;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000134547
@property(nonatomic, getter=isDebugInfoEnabled) _Bool debugInfoEnabled; // @synthesize debugInfoEnabled=_debugInfoEnabled;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) _Bool enableDiversity; // @synthesize enableDiversity=_enableDiversity;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(retain, nonatomic) NSArray *excludedAssetCollections; // @synthesize excludedAssetCollections=_excludedAssetCollections;

@end

