//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSKeyboard-Protocol.h>
#import <ITMLKit/_IKJSKeyboardProxy-Protocol.h>

@class JSValue, NSString;
@protocol IKAppKeyboardBridge;

@interface IKJSKeyboard <IKJSKeyboard, _IKJSKeyboardProxy>
{
    id <IKAppKeyboardBridge> _appBridge;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000025258
@property(retain, nonatomic) id <IKAppKeyboardBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void)jsDidSelectHint:(id)arg1;	// IMP=0x0000000000025162
- (void)jsTextDidChange;	// IMP=0x0000000000024fdc
- (id)hints;	// IMP=0x0000000000024f8c
- (void)setHints:(id)arg1;	// IMP=0x0000000000024f1a
@property(copy, nonatomic) JSValue *suggestions;
@property(copy, nonatomic) NSString *text;
- (id)asPrivateIKJSKeyboard;	// IMP=0x0000000000024d63

@end
