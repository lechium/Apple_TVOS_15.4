//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGPathSource-Protocol.h>
#import <PhotosUICore/PXGSolidColorSource-Protocol.h>

@class NSString, PXGPath, UIColor;

@interface PXGRoundedCornerMaskLayout <PXGPathSource, PXGSolidColorSource>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    struct _PXGSpriteIndexRange _sideMaskSpriteIndexRange;	// 32 = 0x20
    long long _mediaVersion;	// 40 = 0x28
    _Bool _continuousCorners;	// 48 = 0x30
    double _cornerRadius;	// 56 = 0x38
    UIColor *_maskColor;	// 64 = 0x40
    double _maskScale;	// 72 = 0x48
    double _leftMaskWidth;	// 80 = 0x50
    double _rightMaskWidth;	// 88 = 0x58
    PXGPath *_topLeftPath;	// 96 = 0x60
    struct UIEdgeInsets _insets;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000005c62d4
@property(copy, nonatomic) PXGPath *topLeftPath; // @synthesize topLeftPath=_topLeftPath;
@property(nonatomic) double rightMaskWidth; // @synthesize rightMaskWidth=_rightMaskWidth;
@property(nonatomic) double leftMaskWidth; // @synthesize leftMaskWidth=_leftMaskWidth;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double maskScale; // @synthesize maskScale=_maskScale;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(nonatomic) _Bool continuousCorners; // @synthesize continuousCorners=_continuousCorners;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000005c6228
- (id)pathForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000005c6216
- (void)_updateContent;	// IMP=0x00000000005c5fc8
- (void)_invalidateContent;	// IMP=0x00000000005c5ed4
- (void)_updatePath;	// IMP=0x00000000005c5dec
- (void)_invalidatePath;	// IMP=0x00000000005c5cf8
- (void)update;	// IMP=0x00000000005c5a77
- (void)contentSizeDidChange;	// IMP=0x00000000005c5a36
- (void)screenScaleDidChange;	// IMP=0x00000000005c59e0
- (void)referenceSizeDidChange;	// IMP=0x00000000005c598a
- (id)initWithCornerRadius:(double)arg1 continuousCorners:(_Bool)arg2 maskColor:(id)arg3;	// IMP=0x00000000005c5621

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

