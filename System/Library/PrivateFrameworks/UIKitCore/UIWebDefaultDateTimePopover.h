//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIWebFormControl-Protocol.h>

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover <UIWebFormControl>
{
    UIWebDateTimePopoverViewController *_webDateTimeViewController;	// 8 = 0x8
}

@property(retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController; // @synthesize _webDateTimeViewController;
- (void)controlEndEditing;	// IMP=0x0000000000639e1b
- (void)controlBeginEditing;	// IMP=0x0000000000639dd6
- (id)controlView;	// IMP=0x0000000000639dce
- (void)dealloc;	// IMP=0x0000000000639d8e
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;	// IMP=0x0000000000639b64
- (void)clear:(id)arg1;	// IMP=0x0000000000639b2e

@end

