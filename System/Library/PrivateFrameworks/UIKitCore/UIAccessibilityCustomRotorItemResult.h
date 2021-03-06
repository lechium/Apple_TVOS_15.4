//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, UITextRange;
@protocol NSObject;

@interface UIAccessibilityCustomRotorItemResult : NSObject
{
    NSUUID *uuid;	// 8 = 0x8
    id <NSObject> _targetElement;	// 16 = 0x10
    UITextRange *_targetRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f737
@property(retain, nonatomic) UITextRange *targetRange; // @synthesize targetRange=_targetRange;
@property(nonatomic) __weak id <NSObject> targetElement; // @synthesize targetElement=_targetElement;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid;
- (id)initWithTargetElement:(id)arg1 targetRange:(id)arg2;	// IMP=0x000000000000f5f4

@end

