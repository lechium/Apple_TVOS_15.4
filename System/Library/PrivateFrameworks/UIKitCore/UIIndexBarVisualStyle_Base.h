//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIIndexBarVisualStyle-Protocol.h>

@class NSString, UIIndexBarView;

__attribute__((visibility("hidden")))
@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle>
{
    UIIndexBarView *_indexBarView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000fd20ed
@property(nonatomic) __weak UIIndexBarView *indexBarView; // @synthesize indexBarView=_indexBarView;
- (long long)_indexForEntryAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000fd1f2f
- (struct CGRect)_visibleBoundsForRect:(struct CGRect)arg1 stride:(double *)arg2;	// IMP=0x0000000000fd1f11
- (id)displayEntryFromEntry:(id)arg1;	// IMP=0x0000000000fd1ebb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000fd1eb5
@property(readonly, nonatomic) double minLineHeight;
@property(readonly, nonatomic) _Bool overlay;
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (id)initWithView:(id)arg1;	// IMP=0x0000000000fd1df2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool expanded;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
