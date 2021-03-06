//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAudioAssetFetchResult-Protocol.h>

@class NSArray, NSString;
@protocol PXAudioAsset;

@interface _PXConcatenatingAudioAssetFetchResult : NSObject <PXAudioAssetFetchResult>
{
    NSArray *_fetchResults;	// 8 = 0x8
    long long *_startIndexes;	// 16 = 0x10
    long long _subFetchResultsCount;	// 24 = 0x18
    long long _count;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000006584ea
@property(readonly, nonatomic) long long count;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000658403
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000006582b1
@property(readonly, nonatomic) id <PXAudioAsset> lastObject;
@property(readonly, nonatomic) id <PXAudioAsset> firstObject;
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000065810e
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000006580fc
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000658092
@property(readonly, copy) NSString *description;
- (id)_subFetchResultForIndex:(long long)arg1 localIndex:(long long *)arg2;	// IMP=0x0000000000657f93
- (void)dealloc;	// IMP=0x0000000000657f59
- (id)initWithFetchResults:(id)arg1;	// IMP=0x0000000000657dfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

