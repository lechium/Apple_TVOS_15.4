//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>

@class NSString;

@interface HFAccessorySettingMusicAdapter <HFAccessorySettingAdapterDisplayArbitrating>
{
}

+ (_Bool)areAllAccessoriesLoggedOut:(id)arg1;	// IMP=0x0000000000038e89
+ (_Bool)areAllAccessoriesLoggedIntoSameAccount:(id)arg1;	// IMP=0x0000000000038e81
- (_Bool)shouldShowSettingsEntity:(id)arg1;	// IMP=0x0000000000038f3d
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038dcc
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000038d17
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x0000000000038bfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

