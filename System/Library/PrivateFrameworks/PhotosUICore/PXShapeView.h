//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface PXShapeView : UIView
{
    UIBezierPath *_path;	// 8 = 0x8
    UIColor *_fillColor;	// 16 = 0x10
}

+ (Class)layerClass;	// IMP=0x00000000001a557e
- (void).cxx_destruct;	// IMP=0x00000000001a5780
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (id)shapeLayer;	// IMP=0x00000000001a558f

@end

