//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKDSaveUserPrivacySettingsOperation
{
    long long _discoverable;	// 8 = 0x8
}

+ (long long)isPredominatelyDownload;	// IMP=0x00000000002d18b6
@property(nonatomic) long long discoverable; // @synthesize discoverable=_discoverable;
- (int)operationType;	// IMP=0x00000000002d1ad5
- (void)main;	// IMP=0x00000000002d18be
- (_Bool)shouldCheckAppVersion;	// IMP=0x00000000002d18ae
- (id)activityCreate;	// IMP=0x00000000002d1885
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002d1808

@end

