//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>

@class NSString;

@interface HFAccessorySettingDoorbellChimeAdapter <HFAccessorySettingAdapterDisplayArbitrating>
{
}

- (_Bool)shouldShowSettingsEntity:(id)arg1;	// IMP=0x00000000000d61b1
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d60fc
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x00000000000d6000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

