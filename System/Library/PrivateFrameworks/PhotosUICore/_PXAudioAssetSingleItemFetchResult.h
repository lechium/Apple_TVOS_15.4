//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAudioAssetFetchResult-Protocol.h>

@class NSString;
@protocol PXAudioAsset;

@interface _PXAudioAssetSingleItemFetchResult : NSObject <PXAudioAssetFetchResult>
{
    id <PXAudioAsset> _asset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000657ded
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000657dc4
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000657d9f
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000657c69
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000657c57
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000657bc1
@property(readonly, nonatomic) id <PXAudioAsset> lastObject;
@property(readonly, nonatomic) id <PXAudioAsset> firstObject;
@property(readonly, nonatomic) long long count;
- (id)init;	// IMP=0x0000000000657b81
- (id)initWithAsset:(id)arg1;	// IMP=0x0000000000657b16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

