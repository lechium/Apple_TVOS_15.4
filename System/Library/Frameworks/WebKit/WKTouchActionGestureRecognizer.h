//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol WKTouchActionGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface WKTouchActionGestureRecognizer : UIGestureRecognizer
{
    struct HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction>>, WTF::HashTableTraits> _touchActionsByTouchIdentifier;	// 8 = 0x8
    id <WKTouchActionGestureRecognizerDelegate> _touchActionDelegate;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000369ce9
- (void).cxx_destruct;	// IMP=0x0000000000369cc9
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x00000000003699e0
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000003699d8
- (void)_updateState;	// IMP=0x00000000003699c1
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003699af
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000036999d
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000036998b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000369979
- (void)clearTouchActionsForTouchIdentifier:(unsigned int)arg1;	// IMP=0x000000000036991a
- (void)setTouchActions:(OptionSet_6c8dcb60)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x00000000003698ea
- (id)initWithTouchActionDelegate:(id)arg1;	// IMP=0x00000000003698a6

@end

