//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface DMFOpenAppRequest
{
    _Bool _lockInApp;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSString *_activityType;	// 24 = 0x18
    NSData *_activityData;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002ccc7
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x000000000002ccbf
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x000000000002ccb7
+ (id)permittedPlatforms;	// IMP=0x000000000002ccaa
- (void).cxx_destruct;	// IMP=0x000000000002d0b6
@property(nonatomic) _Bool lockInApp; // @synthesize lockInApp=_lockInApp;
@property(copy, nonatomic) NSData *activityData; // @synthesize activityData=_activityData;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ced3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002cccf

@end
