//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewSetPlacementDragToDismiss <NSSecureCoding>
{
    _Bool _dismissKeyboardOnly;	// 40 = 0x28
    double _offset;	// 48 = 0x30
}

+ (id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(_Bool)arg2;	// IMP=0x00000000009309f2
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009309ea
@property(nonatomic) _Bool dismissKeyboardOnly; // @synthesize dismissKeyboardOnly=_dismissKeyboardOnly;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000930dc3
- (_Bool)isInteractive;	// IMP=0x0000000000930dbb
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000930b52
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000930ad3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000930a54
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x00000000009309d9

@end

