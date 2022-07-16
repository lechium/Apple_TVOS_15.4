//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFormPeripheral-Protocol.h>

@class DOMHTMLSelectElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral>
{
    DOMHTMLSelectElement *_selectionNode;	// 8 = 0x8
    id <UIWebFormControl> _selectControl;	// 16 = 0x10
}

+ (id)createPeripheralWithDOMHTMLSelectElement:(id)arg1;	// IMP=0x000000000063d17f
@property(retain, nonatomic) id <UIWebFormControl> _selectControl; // @synthesize _selectControl;
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // @synthesize _selectionNode;
- (void)endEditing;	// IMP=0x000000000063d238
- (void)beginEditing;	// IMP=0x000000000063d222
- (id)assistantView;	// IMP=0x000000000063d20c
- (void)dealloc;	// IMP=0x000000000063d1b5
- (id)initWithDOMHTMLSelectElement:(id)arg1;	// IMP=0x000000000063cf50

@end

