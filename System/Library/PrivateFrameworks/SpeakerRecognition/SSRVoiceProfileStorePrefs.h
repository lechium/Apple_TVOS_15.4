//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSRVoiceProfileStorePrefs : NSObject
{
}

+ (id)sharedStorePrefs;	// IMP=0x000000000004c083
- (long long)getVoiceProfileStoreVersion;	// IMP=0x000000000004c1ee
- (id)loadKnownUserVoiceProfiles;	// IMP=0x000000000004c1a3
- (void)setVoiceProfileStoreVersion:(unsigned long long)arg1;	// IMP=0x000000000004c149
- (void)saveKnownUserVoiceProfiles:(id)arg1;	// IMP=0x000000000004c0dd

@end

