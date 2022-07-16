//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementUndocked <NSSecureCoding>
{
    struct CGPoint _normalizedOffset;	// 40 = 0x28
    struct UIEdgeInsets _chromeBuffer;	// 56 = 0x38
}

+ (struct CGPoint)computeOffsetForOffset:(struct CGPoint)arg1 withSize:(struct CGSize)arg2 chromeBuffer:(struct UIEdgeInsets)arg3 onScreenSize:(struct CGSize)arg4;	// IMP=0x000000000092d8cd
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2;	// IMP=0x000000000092d5d1
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000092d5c9
+ (id)infoWithPoint:(struct CGPoint)arg1;	// IMP=0x000000000092d2b4
@property(nonatomic) struct CGPoint normalizedOffset; // @synthesize normalizedOffset=_normalizedOffset;
@property(nonatomic) struct UIEdgeInsets chromeBuffer; // @synthesize chromeBuffer=_chromeBuffer;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;	// IMP=0x000000000092dc89
- (_Bool)isUndocked;	// IMP=0x000000000092dc81
- (_Bool)inputViewWillAppear;	// IMP=0x000000000092dc79
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000092dbcc
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x000000000092da11
- (double)heightOfInputViews:(id)arg1;	// IMP=0x000000000092d932
- (void)setOffset:(struct CGPoint)arg1;	// IMP=0x000000000092d883
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000092d776
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000092d63a
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x000000000092d5b8
- (id)applicatorInfoForOwner:(id)arg1;	// IMP=0x000000000092d35c

@end
