//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextRange;

@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject
{
    UITextRange *_resultRange;	// 8 = 0x8
    CDUnknownBlockType _targetedPreviewProvider;	// 16 = 0x10
}

+ (id)resultWithRange:(id)arg1 targetedPreviewProvider:(CDUnknownBlockType)arg2;	// IMP=0x0000000000dd282b
- (void).cxx_destruct;	// IMP=0x0000000000dd28ab
@property(readonly, nonatomic) CDUnknownBlockType targetedPreviewProvider; // @synthesize targetedPreviewProvider=_targetedPreviewProvider;
@property(readonly, nonatomic) UITextRange *resultRange; // @synthesize resultRange=_resultRange;
- (id)initWithRange:(id)arg1 targetedPreviewProvider:(CDUnknownBlockType)arg2;	// IMP=0x0000000000dd2788

@end
