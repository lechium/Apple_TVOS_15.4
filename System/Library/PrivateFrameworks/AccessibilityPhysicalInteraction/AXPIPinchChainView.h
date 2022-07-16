//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol AXPIFingerAppearanceDelegate;

@interface AXPIPinchChainView : UIView
{
    _Bool _pressed;	// 8 = 0x8
    _Bool _selected;	// 9 = 0x9
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;	// 16 = 0x10
    struct CGPoint _startPoint;	// 24 = 0x18
    struct CGPoint _endPoint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000005d88
@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000005703
- (_Bool)isUserInteractionEnabled;	// IMP=0x00000000000056fb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000005593

@end

