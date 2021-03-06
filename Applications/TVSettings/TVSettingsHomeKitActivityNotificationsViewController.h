//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsHomeKitCameraProfile;

@interface TVSettingsHomeKitActivityNotificationsViewController : TSKViewController
{
    TVSettingsHomeKitCameraProfile *_cameraProfile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000052150
@property(readonly, nonatomic) TVSettingsHomeKitCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (id)alertTitleForEventType:(unsigned long long)arg1;	// IMP=0x0010000000051f30
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000051e20
- (void)_toggledSignificantEventType:(id)arg1;	// IMP=0x0010000000051a30
- (void)_selectedItem:(id)arg1;	// IMP=0x0010000000051390
- (id)loadSettingGroups;	// IMP=0x00100000000504e0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000050430
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000050380
- (id)title;	// IMP=0x0010000000050300
- (id)initWithCameraProfile:(id)arg1;	// IMP=0x0010000000050240

@end

