//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextInteractionAssistantGestureState : NSObject
{
    _Bool _hasExternalInteractions;	// 8 = 0x8
    _Bool _viewIsEditable;	// 9 = 0x9
    _Bool _viewCanBecomeEditable;	// 10 = 0xa
    _Bool _isFirstResponder;	// 11 = 0xb
    long long _mode;	// 16 = 0x10
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool isFirstResponder; // @synthesize isFirstResponder=_isFirstResponder;
@property(nonatomic) _Bool viewCanBecomeEditable; // @synthesize viewCanBecomeEditable=_viewCanBecomeEditable;
@property(nonatomic) _Bool viewIsEditable; // @synthesize viewIsEditable=_viewIsEditable;
@property(nonatomic) _Bool hasExternalInteractions; // @synthesize hasExternalInteractions=_hasExternalInteractions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e20dac

@end
