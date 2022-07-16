//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSMutableSet, NSURL;
@protocol AMSBagProtocol;

@interface AMSOpenURL : NSObject
{
    NSMutableSet *_attemptedTargets;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    AMSProcessInfo *_clientInfo;	// 24 = 0x18
    id <AMSBagProtocol> _bag;	// 32 = 0x20
}

+ (_Bool)_openURL:(id)arg1 inApp:(id)arg2;	// IMP=0x00000000001b9f44
+ (_Bool)_openURLWithLaunchServices:(id)arg1;	// IMP=0x00000000001b9c7a
+ (unsigned long long)_openModeForStandardURL:(id)arg1 inApp:(id)arg2 withLinks:(id)arg3;	// IMP=0x00000000001b9c64
+ (_Bool)_shouldOpenStandardURL:(id)arg1 inApp:(id)arg2 withLinks:(id)arg3;	// IMP=0x00000000001b9a14
+ (id)_modifiedURLFromURL:(id)arg1 bundleInfo:(id)arg2;	// IMP=0x00000000001b95e5
+ (id)openURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;	// IMP=0x00000000001b8e78
+ (void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3;	// IMP=0x00000000001b8dce
+ (_Bool)openStandardURL:(id)arg1;	// IMP=0x00000000001b89fc
- (void).cxx_destruct;	// IMP=0x00000000001ba0a0
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableSet *attemptedTargets; // @synthesize attemptedTargets=_attemptedTargets;
- (_Bool)_shouldOpenURL:(id)arg1;	// IMP=0x00000000001b994d
- (_Bool)_openURL:(id)arg1 bundleInfo:(id)arg2;	// IMP=0x00000000001b979c
- (id)_performOpen;	// IMP=0x00000000001b8f31
- (id)initWithURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;	// IMP=0x00000000001b890e

@end
