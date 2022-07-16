//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <ReplayKit/RPVideoOverlayButton-Protocol.h>

@interface RPFlatVideoOverlayButton : UIButton <RPVideoOverlayButton>
{
    long long _style;	// 8 = 0x8
    id _target;	// 16 = 0x10
    SEL _action;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f3c9
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3;	// IMP=0x000000000000f1d1
- (id)_highlightedButtonImage;	// IMP=0x000000000000f131
- (id)_normalButtonImage;	// IMP=0x000000000000f091
- (void)_handleTap:(id)arg1;	// IMP=0x000000000000effe
- (void)setTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000000efcf
- (long long)style;	// IMP=0x000000000000efbe
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000000eea0

@end

