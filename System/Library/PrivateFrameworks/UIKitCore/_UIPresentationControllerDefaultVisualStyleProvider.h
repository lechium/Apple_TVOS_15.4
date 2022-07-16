//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPresentationControllerVisualStyleProviding-Protocol.h>

@class NSMutableDictionary, NSString, _UIPresentationControllerNullVisualStyleProvider;

@interface _UIPresentationControllerDefaultVisualStyleProvider : NSObject <_UIPresentationControllerVisualStyleProviding>
{
    NSMutableDictionary *_providerByIdiom;	// 8 = 0x8
    _UIPresentationControllerNullVisualStyleProvider *_fallbackProvider;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000a150d8
- (void).cxx_destruct;	// IMP=0x0000000000a155aa
@property(retain, nonatomic) _UIPresentationControllerNullVisualStyleProvider *fallbackProvider; // @synthesize fallbackProvider=_fallbackProvider;
@property(retain, nonatomic) NSMutableDictionary *providerByIdiom; // @synthesize providerByIdiom=_providerByIdiom;
- (id)styleForPopoverPresentationController:(id)arg1;	// IMP=0x0000000000a154eb
- (id)styleForSheetPresentationController:(id)arg1;	// IMP=0x0000000000a15462
- (id)styleForAlertPresentationController:(id)arg1;	// IMP=0x0000000000a153e5
- (id)styleForRootPresentationController:(id)arg1;	// IMP=0x0000000000a15368
- (id)defaultStyleForPresentationController:(id)arg1;	// IMP=0x0000000000a152eb
- (id)_providerForPresentationController:(id)arg1;	// IMP=0x0000000000a15234
- (void)registerVisualStyleProvider:(id)arg1 forIdiom:(long long)arg2;	// IMP=0x0000000000a151b2
- (id)_init;	// IMP=0x0000000000a1513d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

