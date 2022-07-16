//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementAssistantOnScreen <NSSecureCoding>
{
}

+ (id)infoWithPoint:(struct CGPoint)arg1 isCompact:(_Bool)arg2 frame:(struct CGRect)arg3 position:(unsigned long long)arg4;	// IMP=0x000000000092f3fb
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000092f3f3
- (struct UIEdgeInsets)inputAccessoryViewPadding;	// IMP=0x000000000092fa86
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;	// IMP=0x000000000092f8a3
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;	// IMP=0x000000000092f853
- (_Bool)accessoryViewWillAppear;	// IMP=0x000000000092f841
- (_Bool)inputViewWillAppear;	// IMP=0x000000000092f839
- (_Bool)showsEditItems;	// IMP=0x000000000092f824
- (_Bool)showsInputOrAssistantViews;	// IMP=0x000000000092f81c
- (_Bool)showsInputViews;	// IMP=0x000000000092f814
- (_Bool)isFloatingAssistantView;	// IMP=0x000000000092f7e2
- (double)verticalOffset;	// IMP=0x000000000092f7b7
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x000000000092f5e6
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x000000000092f587

@end
