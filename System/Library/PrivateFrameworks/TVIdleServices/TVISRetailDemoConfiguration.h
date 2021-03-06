//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TVISRetailDemoConfiguration : NSObject
{
    NSURL *_remoteManifestURL;	// 8 = 0x8
    NSURL *_localManifestURL;	// 16 = 0x10
    NSURL *_cacheURL;	// 24 = 0x18
}

+ (id)defaultConfiguration;	// IMP=0x00000000000237b0
- (void).cxx_destruct;	// IMP=0x0000000000023a70
@property(readonly, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(readonly, nonatomic) NSURL *localManifestURL; // @synthesize localManifestURL=_localManifestURL;
@property(readonly, nonatomic) NSURL *remoteManifestURL; // @synthesize remoteManifestURL=_remoteManifestURL;
- (id)initWithRemoteManifestURL:(id)arg1 cacheURL:(id)arg2 localManifestURL:(id)arg3;	// IMP=0x00000000000238e0

@end

