//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIGeometryChangeObserver-Protocol.h>

@class NSString, UIInputViewSetPlacementOnScreen, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementFloating <_UIGeometryChangeObserver, NSSecureCoding>
{
    double _floatingWidth;	// 88 = 0x58
    UIView *_responderToFollow;	// 96 = 0x60
    struct CGRect _responderRect;	// 104 = 0x68
    struct CGSize _lastSize;	// 136 = 0x88
    UIInputViewSetPlacementOnScreen *_cachedSecondaryPlacement;	// 152 = 0x98
}

+ (id)infoWithPoint:(struct CGPoint)arg1 forOwner:(id)arg2;	// IMP=0x000000000092eee0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000092eca5
+ (struct CGRect)frameAtOffset:(struct CGPoint)arg1 keyboardSize:(struct CGSize)arg2 screenSize:(struct CGSize)arg3;	// IMP=0x000000000092eb85
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2 floatingWidth:(double)arg3;	// IMP=0x000000000092eb26
- (void).cxx_destruct;	// IMP=0x000000000092f3e0
@property(nonatomic) double floatingWidth; // @synthesize floatingWidth=_floatingWidth;
@property(nonatomic) UIResponder *responderToFollow; // @synthesize responderToFollow=_responderToFollow;
- (_Bool)isFloatingAssistantView;	// IMP=0x000000000092f392
- (_Bool)isFloating;	// IMP=0x000000000092f38a
- (struct CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1;	// IMP=0x000000000092f207
- (id)expiringPlacement;	// IMP=0x000000000092f1ae
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;	// IMP=0x000000000092f175
- (id)subPlacements;	// IMP=0x000000000092f0ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000092ee5e
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x000000000092edf4
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x000000000092ecad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000092ec26
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000092ebab
- (void)dealloc;	// IMP=0x000000000092ead1
- (id)applicatorInfoForOwner:(id)arg1;	// IMP=0x000000000092e331
- (id)currentResponderView;	// IMP=0x000000000092e329
- (void)setDelegate:(id)arg1;	// IMP=0x000000000092e28c
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x000000000092e27b
- (void)checkSizeForOwner:(id)arg1;	// IMP=0x000000000092dde7
- (void)_geometryChanged:(const CDStruct_ac6e8047 *)arg1 forAncestor:(id)arg2;	// IMP=0x000000000092dd59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
