//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementCompactAssistantOnScreen
{
    struct CGPoint _offset;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000092faaa
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (double)verticalOffset;	// IMP=0x000000000092fc74
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x000000000092fbbf
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x000000000092fb5c
- (id)applicatorInfoForOwner:(id)arg1;	// IMP=0x000000000092fac4
- (_Bool)isCompactAssistantView;	// IMP=0x000000000092fab2

@end
