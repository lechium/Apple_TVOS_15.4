//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSIndexSet, NSString, PXLayoutMetrics;

@interface PXLayoutGenerator : NSObject <NSCopying>
{
    PXLayoutMetrics *_metrics;	// 8 = 0x8
    unsigned long long _itemCount;	// 16 = 0x10
    unsigned long long _keyItemIndex;	// 24 = 0x18
    CDUnknownBlockType _itemLayoutInfoBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007c1e82
@property(copy, nonatomic) CDUnknownBlockType itemLayoutInfoBlock; // @synthesize itemLayoutInfoBlock=_itemLayoutInfoBlock;
@property(nonatomic) unsigned long long keyItemIndex; // @synthesize keyItemIndex=_keyItemIndex;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(copy, nonatomic) PXLayoutMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSString *diagnosticDescription;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;	// IMP=0x00000000007c1bc7
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;	// IMP=0x00000000007c1bb5
@property(readonly, nonatomic) NSIndexSet *geometryKinds;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGSize estimatedSize;
- (void)invalidate;	// IMP=0x00000000007c1a31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007c18c4
- (id)initWithMetrics:(id)arg1;	// IMP=0x00000000007c1843
- (id)init;	// IMP=0x00000000007c17c9
@property(readonly, nonatomic) struct _PXCornerSpriteIndexes cornerSpriteIndexes;

@end

