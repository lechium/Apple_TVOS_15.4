//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentItemCellBackgroundView : UIView
{
    double _scale;	// 8 = 0x8
    double _cornerRadius;	// 16 = 0x10
    long long _position;	// 24 = 0x18
    UIColor *_fillColor;	// 32 = 0x20
    UIColor *_strokeColor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002351bf
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000234a47
- (void)didMoveToWindow;	// IMP=0x000000000023496e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000234768

@end

