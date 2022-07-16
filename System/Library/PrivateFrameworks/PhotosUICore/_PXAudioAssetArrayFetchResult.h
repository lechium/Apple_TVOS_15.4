//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAudioAssetFetchResult-Protocol.h>

@class NSArray, NSString;
@protocol PXAudioAsset;

@interface _PXAudioAssetArrayFetchResult : NSObject <PXAudioAssetFetchResult>
{
    NSArray *_assets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000657b06
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000657a51
@property(readonly, nonatomic) id <PXAudioAsset> lastObject;
@property(readonly, nonatomic) id <PXAudioAsset> firstObject;
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000657a0f
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000006579f9
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000006579e7
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006579d1
@property(readonly, nonatomic) long long count;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000657957
- (id)initWithArray:(id)arg1;	// IMP=0x00000000006578e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
