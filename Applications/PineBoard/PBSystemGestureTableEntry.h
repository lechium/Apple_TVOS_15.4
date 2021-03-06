//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSMutableSet, UIGestureRecognizer;

@interface PBSystemGestureTableEntry : NSObject
{
    UIGestureRecognizer *_gestureRecognizer;	// 8 = 0x8
    NSMutableSet *_descriptors;	// 16 = 0x10
    NSMutableOrderedSet *_activeDescriptorStack;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000128860
@property(readonly, nonatomic) NSMutableOrderedSet *activeDescriptorStack; // @synthesize activeDescriptorStack=_activeDescriptorStack;
@property(readonly, nonatomic) NSMutableSet *descriptors; // @synthesize descriptors=_descriptors;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)_resultWithMutationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001286d0
- (id)stateDump;	// IMP=0x0010000000128450
- (id)activeSystemGestureDescriptorWithSelectionPolicy:(id)arg1;	// IMP=0x0010000000128370
- (id)deactivateSystemGestureDescriptor:(id)arg1;	// IMP=0x0010000000128230
- (id)activateSystemGestureDescriptor:(id)arg1;	// IMP=0x00100000001280d0
- (id)removeSystemGestureDescriptor:(id)arg1;	// IMP=0x0010000000127f80
- (void)addSystemGestureDescriptor:(id)arg1;	// IMP=0x0010000000127f20
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)init;	// IMP=0x0010000000127df0

@end

