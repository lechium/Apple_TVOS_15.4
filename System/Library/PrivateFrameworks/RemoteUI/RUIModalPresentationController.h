//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIFormSheetPresentationController.h>

@interface RUIModalPresentationController : _UIFormSheetPresentationController
{
    unsigned long long _ruiModalPresentationStyle;	// 8 = 0x8
}

@property(nonatomic, setter=setRUIModalPresentationStyle:) unsigned long long ruiModalPresentationStyle; // @synthesize ruiModalPresentationStyle=_ruiModalPresentationStyle;
- (unsigned long long)modalPresentationStyle;	// IMP=0x00000000000366cf
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 modalPresentationStyle:(unsigned long long)arg3;	// IMP=0x0000000000036488

@end

