//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <PhotoLibrary/PLVideoOverlayButton-Protocol.h>

@interface PLFlatVideoOverlayButton : UIButton <PLVideoOverlayButton>
{
    long long _style;	// 8 = 0x8
    id _target;	// 16 = 0x10
    SEL _action;	// 24 = 0x18
}

- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3;	// IMP=0x000000000002f96d
- (id)_highlightedButtonImage;	// IMP=0x000000000002f91b
- (id)_normalButtonImage;	// IMP=0x000000000002f8c9
- (void)_handleTap:(id)arg1;	// IMP=0x000000000002f870
- (void)setTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000002f854
- (long long)style;	// IMP=0x000000000002f843
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000002f756

@end

