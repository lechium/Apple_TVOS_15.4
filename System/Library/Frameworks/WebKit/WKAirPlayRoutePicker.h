//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <WebKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKAirPlayRoutePicker : UIView <UIPopoverControllerDelegate>
{
    struct RetainPtr<MPAVRoutingController> _routingController;	// 8 = 0x8
    struct RetainPtr<MPAudioVideoRoutingPopoverController> _popoverController;	// 16 = 0x10
    struct RetainPtr<MPAVRoutingSheet> _actionSheet;	// 24 = 0x18
    WKContentView *_view;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000371d5e
- (void).cxx_destruct;	// IMP=0x0000000000371cf5
- (void)show:(_Bool)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x0000000000371c48
- (void)showAirPlayPickerIPhone:(long long)arg1;	// IMP=0x0000000000371b29
- (void)showAirPlayPickerIPad:(long long)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x0000000000371a3c
- (void)_dismissAirPlayRoutePickerIPad;	// IMP=0x0000000000371939
- (void)_windowDidRotate:(id)arg1;	// IMP=0x0000000000371927
- (void)_windowWillRotate:(id)arg1;	// IMP=0x0000000000371908
- (void)_presentAirPlayPopoverAnimated:(_Bool)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x00000000003718d5
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x00000000003718b4
- (void)dealloc;	// IMP=0x0000000000371856
- (id)initWithView:(id)arg1;	// IMP=0x0000000000371812

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
