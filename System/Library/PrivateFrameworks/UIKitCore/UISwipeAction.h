//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImage, UIVisualEffect;

@interface UISwipeAction
{
    _Bool _canBeTriggeredBySwipe;	// 8 = 0x8
    _Bool _resetsSwipedRow;	// 9 = 0x9
    UIVisualEffect *_backgroundEffect;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

+ (id)swipeActionWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000cd7e37
- (void).cxx_destruct;	// IMP=0x0000000000cd814a
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool resetsSwipedRow; // @synthesize resetsSwipedRow=_resetsSwipedRow;
@property(nonatomic) _Bool canBeTriggeredBySwipe; // @synthesize canBeTriggeredBySwipe=_canBeTriggeredBySwipe;
@property(copy, nonatomic) UIVisualEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
- (void)resetSwipedRow;	// IMP=0x0000000000cd8034
@property(copy, nonatomic) UIImage *icon;
@property(copy, nonatomic) UIColor *color;
- (id)init;	// IMP=0x0000000000cd7f81

@end

