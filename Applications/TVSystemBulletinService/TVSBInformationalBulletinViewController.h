//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVImageProxy;

@interface TVSBInformationalBulletinViewController
{
    TVImageProxy *_imageProxy;	// 8 = 0x8
}

+ (_Bool)_isVolumeBulletin:(id)arg1;	// IMP=0x004000000001e2e0
- (void).cxx_destruct;	// IMP=0x0020000000020660
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (id)_bulletinImageForItem:(id)arg1;	// IMP=0x001000000001f280
- (void)_configureVolumeBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x001000000001ee80
- (void)_configureBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x001000000001e4d0
- (id)_volumeBulletinView;	// IMP=0x001000000001e430
- (id)_informationalBulletinView;	// IMP=0x001000000001e390
- (void)didEndAnimatingOutBulletinView:(id)arg1;	// IMP=0x001000000001e260
- (void)updateBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x001000000001e190
- (id)bulletinViewForBulletin:(id)arg1;	// IMP=0x001000000001df00

@end
