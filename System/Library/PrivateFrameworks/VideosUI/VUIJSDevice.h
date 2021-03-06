//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIJSDevice-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIJSDevice <VUIJSDevice>
{
    id _networkPropertiesChangedToken;	// 8 = 0x8
}

+ (id)getMobileGestaltString:(struct __CFString *)arg1;	// IMP=0x000000000019bb45
- (void).cxx_destruct;	// IMP=0x000000000019bbc1
@property(readonly, nonatomic) _Bool supportsSharedWatchPostPlayBinge;
@property(readonly, nonatomic) _Bool isAlternateLayoutEnabled;
@property(readonly, nonatomic) NSString *osBuildNumber;
@property(readonly, nonatomic) _Bool isSeedBuild;
@property(readonly, nonatomic) _Bool isInRetailDemoMode;
@property(readonly, nonatomic) NSString *networkType;
@property(readonly, nonatomic) _Bool runningAnInternalBuild;
@property(readonly, nonatomic) _Bool isInAirplaneMode;
@property(readonly, nonatomic) _Bool isNetworkReachable;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) NSString *appVersion;
- (void)dealloc;	// IMP=0x000000000019b862
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000000019b4fd

@end

