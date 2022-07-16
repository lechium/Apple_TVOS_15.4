//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGItemsGeometry-Protocol.h>
#import <PhotosUICore/PXGViewSource-Protocol.h>

@class NSCalendar, NSDateFormatter, NSIndexSet, NSString, PXZoomableInlineHeadersDataSource, PXZoomableInlineHeadersLayoutSpec;
@protocol PXZoomableInlineHeadersLayoutGeometrySource;

@interface PXInlineHeadersSpriteLayout <PXGItemsGeometry, PXGViewSource>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    NSDateFormatter *_yearFormatter;	// 32 = 0x20
    NSDateFormatter *_monthFormatter;	// 40 = 0x28
    NSCalendar *_calendar;	// 48 = 0x30
    unsigned short _mediaVersion;	// 56 = 0x38
    _Bool _didHideSprites;	// 58 = 0x3a
    NSIndexSet *_axSpriteIndexes;	// 64 = 0x40
    unsigned long long _level;	// 72 = 0x48
    unsigned long long _style;	// 80 = 0x50
    PXZoomableInlineHeadersLayoutSpec *_spec;	// 88 = 0x58
    PXZoomableInlineHeadersDataSource *_dataSource;	// 96 = 0x60
    id <PXZoomableInlineHeadersLayoutGeometrySource> _geometrySource;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000a108d
@property(nonatomic) __weak id <PXZoomableInlineHeadersLayoutGeometrySource> geometrySource; // @synthesize geometrySource=_geometrySource;
@property(retain, nonatomic) PXZoomableInlineHeadersDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) PXZoomableInlineHeadersLayoutSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;	// IMP=0x00000000000a100a
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00000000000a0fbe
- (id)axSpriteIndexes;	// IMP=0x00000000000a0f2b
- (id)itemsInRect:(struct CGRect)arg1 inLayout:(id)arg2;	// IMP=0x00000000000a0eb8
- (id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;	// IMP=0x00000000000a0ea8
- (long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00000000000a0e77
- (id)itemsGeometry;	// IMP=0x00000000000a0e6e
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000a0ba2
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000a0b91
- (void)_updateSprites;	// IMP=0x00000000000a0a69
- (void)update;	// IMP=0x00000000000a08ad
- (void)_bumpMediaVersion;	// IMP=0x00000000000a07ae
- (void)invalidateAnchorItemFrames;	// IMP=0x00000000000a06ba
- (void)_currentLocaleChanged:(id)arg1;	// IMP=0x00000000000a068c
- (void)_setupDateFormatters;	// IMP=0x00000000000a0534
- (void)alphaDidChange;	// IMP=0x00000000000a0134
- (void)screenScaleDidChange;	// IMP=0x00000000000a0021
- (void)visibleRectDidChange;	// IMP=0x000000000009ff0e
- (id)initWithLevel:(unsigned long long)arg1;	// IMP=0x000000000009fd4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

