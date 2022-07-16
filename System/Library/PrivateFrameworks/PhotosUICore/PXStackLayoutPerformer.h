//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableLayoutPerformer-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXStackLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *children;	// 8 = 0x8
    long long _layoutAxis;	// 16 = 0x10
    struct CGSize _interItemSpacing;	// 24 = 0x18
    struct CGSize _itemSize;	// 40 = 0x28
}

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000005a2bd6
- (void).cxx_destruct;	// IMP=0x00000000005a3364
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(retain, nonatomic) NSArray *children; // @synthesize children;
- (void)_performLayoutPass;	// IMP=0x00000000005a2ec9
- (struct CGSize)_calculateSizeForLayout;	// IMP=0x00000000005a2d02
- (void)prepareForReuse;	// IMP=0x00000000005a2c99
- (struct CGSize)performLayout;	// IMP=0x00000000005a2c31

// Remaining properties
@property(nonatomic) CDStruct_392cfed4 layoutInput;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;

@end

