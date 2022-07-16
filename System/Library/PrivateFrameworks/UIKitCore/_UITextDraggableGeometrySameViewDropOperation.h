//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextDraggableGeometrySameViewDropOperation-Protocol.h>

@class NSArray, NSAttributedString, NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface _UITextDraggableGeometrySameViewDropOperation : NSObject <UITextDraggableGeometrySameViewDropOperation>
{
    NSArray *_sourceRanges;	// 8 = 0x8
    UITextRange *_targetRange;	// 16 = 0x10
    NSAttributedString *_text;	// 24 = 0x18
    unsigned long long _operation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000dd5da1
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(retain, nonatomic) UITextRange *targetRange; // @synthesize targetRange=_targetRange;
@property(retain, nonatomic) NSArray *sourceRanges; // @synthesize sourceRanges=_sourceRanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

