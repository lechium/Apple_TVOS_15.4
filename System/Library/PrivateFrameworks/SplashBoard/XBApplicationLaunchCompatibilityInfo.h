//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSSecureCoding-Protocol.h>

@class NSArray, NSString, XBLaunchInterface;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSSecureCoding>
{
    XBLaunchInterface *_defaultInterface;	// 8 = 0x8
    _Bool _launchesOpaque;	// 16 = 0x10
    _Bool _hasKnownBadLaunchImage;	// 17 = 0x11
    NSArray *_launchInterfaces;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSString *_bundlePath;	// 40 = 0x28
    NSString *_sandboxPath;	// 48 = 0x30
    long long _badLaunchImageCandidateCount;	// 56 = 0x38
    NSString *_bundleContainerPath;	// 64 = 0x40
    NSString *_defaultGroupIdentifier;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004fae
+ (id)compatibilityInfoForAppInfo:(id)arg1;	// IMP=0x0000000000004afd
- (void).cxx_destruct;	// IMP=0x000000000000710e
@property(copy, nonatomic) NSString *defaultGroupIdentifier; // @synthesize defaultGroupIdentifier=_defaultGroupIdentifier;
@property(copy, nonatomic) NSString *bundleContainerPath; // @synthesize bundleContainerPath=_bundleContainerPath;
@property(nonatomic) long long badLaunchImageCandidateCount; // @synthesize badLaunchImageCandidateCount=_badLaunchImageCandidateCount;
@property(nonatomic) _Bool hasKnownBadLaunchImage; // @synthesize hasKnownBadLaunchImage=_hasKnownBadLaunchImage;
@property(nonatomic) _Bool launchesOpaque; // @synthesize launchesOpaque=_launchesOpaque;
@property(copy, nonatomic) NSString *sandboxPath; // @synthesize sandboxPath=_sandboxPath;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSArray *launchInterfaces; // @synthesize launchInterfaces=_launchInterfaces;
- (_Bool)launchInterfaceExistsForScheme:(id)arg1;	// IMP=0x0000000000006e9c
- (id)launchInterfaceIdentifierForRequest:(id)arg1;	// IMP=0x0000000000006c37
- (id)launchInterfaceWithIdentifier:(id)arg1;	// IMP=0x0000000000006b26
@property(readonly, copy, nonatomic) XBLaunchInterface *defaultLaunchInterface;
@property(readonly, nonatomic) _Bool allowsSavingLaunchImages;
@property(readonly, copy) NSString *description;
- (id)initWithBundle:(id)arg1;	// IMP=0x00000000000056a8
- (void)_setLaunchInterfaces:(id)arg1;	// IMP=0x0000000000005697
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005406
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004fb6
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000004ee5
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000004da3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

