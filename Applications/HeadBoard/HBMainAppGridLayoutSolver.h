//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBMainAppGridState, NSString;

@interface HBMainAppGridLayoutSolver : NSObject
{
    HBMainAppGridState *_currentState;	// 8 = 0x8
    struct CGRect _topShelfContentFrame;	// 16 = 0x10
    struct CGRect _dockBackgroundFrame;	// 48 = 0x30
    struct CGAffineTransform _dockTransform;	// 80 = 0x50
    struct CGAffineTransform _gridTransform;	// 128 = 0x80
}

+ (struct CGRect)_dockFrameWithBounds:(struct CGRect)arg1 focusState:(unsigned long long)arg2;	// IMP=0x0020000000092c6b
- (void).cxx_destruct;	// IMP=0x0020000000092ddc
@property(readonly, nonatomic) HBMainAppGridState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) struct CGAffineTransform gridTransform; // @synthesize gridTransform=_gridTransform;
@property(readonly, nonatomic) struct CGAffineTransform dockTransform; // @synthesize dockTransform=_dockTransform;
@property(readonly, nonatomic) struct CGRect dockBackgroundFrame; // @synthesize dockBackgroundFrame=_dockBackgroundFrame;
@property(readonly, nonatomic) struct CGRect topShelfContentFrame; // @synthesize topShelfContentFrame=_topShelfContentFrame;
- (unsigned long long)_updateWithChanges:(unsigned long long)arg1 nextState:(id)arg2;	// IMP=0x0010000000092848
- (unsigned long long)updateState:(CDUnknownBlockType)arg1;	// IMP=0x0010000000092780
@property(readonly, nonatomic) unsigned long long editingFocusState;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic, getter=isAppGridHidden) _Bool appGridHidden;
@property(readonly, nonatomic) unsigned long long focusState;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)init;	// IMP=0x00100000000926b1
- (id)initWithState:(id)arg1;	// IMP=0x00100000000925e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

