//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIAction, UIButton;

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell
{
    UIButton *_cameraCaptureButton;	// 128 = 0x80
    _Bool _showsCameraCaptureButton;	// 136 = 0x88
    UIAction *_cameraCaptureTapAction;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000002019c9
@property(retain, nonatomic) UIAction *cameraCaptureTapAction; // @synthesize cameraCaptureTapAction=_cameraCaptureTapAction;
@property(nonatomic) _Bool showsCameraCaptureButton; // @synthesize showsCameraCaptureButton=_showsCameraCaptureButton;
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x0000000000201928
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000201847
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000002017f1
- (void)setPaymentSetupField:(id)arg1;	// IMP=0x00000000002017c2
- (id)init;	// IMP=0x0000000000201526

@end

