//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVSPreferences;

@interface TVSettingsMusicTopShelfFacade : NSObject
{
    TVSPreferences *_musicPreferences;	// 8 = 0x8
    id _preferencesToken;	// 16 = 0x10
    long long _topShelfStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ea3c0
@property(nonatomic) long long topShelfStyle; // @synthesize topShelfStyle=_topShelfStyle;
- (void)dealloc;	// IMP=0x00100000000ea2f0
- (id)init;	// IMP=0x00100000000ea1d0

@end

