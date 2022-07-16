//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MAMsuDownloadOptions
{
    _Bool _supervised;	// 8 = 0x8
    _Bool _allowSameVersion;	// 9 = 0x9
    _Bool _prerequisiteReleaseTypeIsOverridden;	// 10 = 0xa
    NSString *_requestedProductVersion;	// 16 = 0x10
    long long _delayPeriod;	// 24 = 0x18
    NSString *_prerequisiteBuildVersion;	// 32 = 0x20
    NSString *_prerequisiteProductVersion;	// 40 = 0x28
    NSString *_prerequisiteReleaseType;	// 48 = 0x30
    NSString *_downloadAuthorizationHeader;	// 56 = 0x38
    NSString *_liveAssetAudienceUUID;	// 64 = 0x40
    NSString *_purpose;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016db5
@property(retain, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(retain, nonatomic) NSString *liveAssetAudienceUUID; // @synthesize liveAssetAudienceUUID=_liveAssetAudienceUUID;
@property(retain, nonatomic) NSString *downloadAuthorizationHeader; // @synthesize downloadAuthorizationHeader=_downloadAuthorizationHeader;
@property(nonatomic) _Bool prerequisiteReleaseTypeIsOverridden; // @synthesize prerequisiteReleaseTypeIsOverridden=_prerequisiteReleaseTypeIsOverridden;
@property(retain, nonatomic) NSString *prerequisiteReleaseType; // @synthesize prerequisiteReleaseType=_prerequisiteReleaseType;
@property(retain, nonatomic) NSString *prerequisiteProductVersion; // @synthesize prerequisiteProductVersion=_prerequisiteProductVersion;
@property(retain, nonatomic) NSString *prerequisiteBuildVersion; // @synthesize prerequisiteBuildVersion=_prerequisiteBuildVersion;
@property(nonatomic) _Bool allowSameVersion; // @synthesize allowSameVersion=_allowSameVersion;
@property(nonatomic) _Bool supervised; // @synthesize supervised=_supervised;
@property(nonatomic) long long delayPeriod; // @synthesize delayPeriod=_delayPeriod;
@property(retain, nonatomic) NSString *requestedProductVersion; // @synthesize requestedProductVersion=_requestedProductVersion;
- (id)description;	// IMP=0x00000000000173be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017185
- (void)dealloc;	// IMP=0x00000000000170e7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016e69
- (id)init;	// IMP=0x0000000000016dbd

@end
