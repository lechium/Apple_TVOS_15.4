//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface UsedApp : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSDate *_lastExtensionLaunched;	// 16 = 0x10
    NSDate *_lastLaunched;	// 24 = 0x18
    long long _usageWindowMatchType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002ce9a
@property(nonatomic) long long usageWindowMatchType; // @synthesize usageWindowMatchType=_usageWindowMatchType;
@property(copy, nonatomic) NSDate *lastLaunched; // @synthesize lastLaunched=_lastLaunched;
@property(copy, nonatomic) NSDate *lastExtensionLaunched; // @synthesize lastExtensionLaunched=_lastExtensionLaunched;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)isExtensionUsage;	// IMP=0x001000000002ce07
- (id)description;	// IMP=0x001000000002cd4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002ccb4
- (id)initWithBundleID:(id)arg1;	// IMP=0x001000000002cc5a

@end
