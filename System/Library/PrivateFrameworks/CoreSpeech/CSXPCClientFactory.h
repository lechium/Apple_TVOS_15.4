//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSXPCClientFactory : NSObject
{
}

+ (id)defaultFactory;	// IMP=0x0000000000050fd0
- (id)clientForFallbackAudioSessionReleaseProviding;	// IMP=0x00000000000510dd
- (id)clientForMacOSDuckAudioDevice;	// IMP=0x00000000000510af
- (id)clientForSmartSiriVolumeProviding;	// IMP=0x0000000000051081
- (id)clientForAudioSessionInfoProviding;	// IMP=0x0000000000051053
- (id)clientForAudioProviding;	// IMP=0x0000000000051025

@end
