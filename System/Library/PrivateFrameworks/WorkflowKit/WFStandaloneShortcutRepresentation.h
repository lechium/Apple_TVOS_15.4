//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFStandaloneShortcutRepresentation : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_associatedAppBundleIdentifier;	// 16 = 0x10
    NSString *_launchIdForCurrentPlatform;	// 24 = 0x18
    NSString *_activityBundleIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000e7fa
@property(readonly, copy, nonatomic) NSString *activityBundleIdentifier; // @synthesize activityBundleIdentifier=_activityBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *launchIdForCurrentPlatform; // @synthesize launchIdForCurrentPlatform=_launchIdForCurrentPlatform;
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 associatedAppBundleIdentifier:(id)arg2 launchIdForCurrentPlatform:(id)arg3 activityBundleIdentifier:(id)arg4;	// IMP=0x000000000000e6e0
- (id)initWithINShortcut:(id)arg1 title:(id)arg2;	// IMP=0x000000000000e5dc
- (id)initWithINShortcut:(id)arg1;	// IMP=0x000000000000e56b
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000000e54e

@end

