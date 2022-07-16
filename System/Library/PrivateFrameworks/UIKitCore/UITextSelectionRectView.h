//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, UIColor;

__attribute__((visibility("hidden")))
@interface UITextSelectionRectView
{
    UIColor *_selectionColor;	// 112 = 0x70
    UIColor *_selectionBorderColor;	// 120 = 0x78
    double _selectionBorderWidth;	// 128 = 0x80
    double _selectionCornerRadius;	// 136 = 0x88
}

+ (Class)layerClass;	// IMP=0x0000000000e2a25b
- (void).cxx_destruct;	// IMP=0x0000000000e2a6c0
@property(nonatomic) double selectionCornerRadius; // @synthesize selectionCornerRadius=_selectionCornerRadius;
@property(nonatomic) double selectionBorderWidth; // @synthesize selectionBorderWidth=_selectionBorderWidth;
@property(retain, nonatomic) UIColor *selectionBorderColor; // @synthesize selectionBorderColor=_selectionBorderColor;
@property(retain, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000e2a54b
@property(readonly, nonatomic) CAShapeLayer *pathLayer;
- (id)path;	// IMP=0x0000000000e2a1eb
- (void)setPath:(id)arg1;	// IMP=0x0000000000e2a0e1
@property(readonly, nonatomic) _Bool hasPath;

@end
