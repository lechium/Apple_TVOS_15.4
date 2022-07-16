//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFEchoRequest
{
    NSString *_echo;	// 8 = 0x8
    NSString *_resultStatus;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000019281
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000019279
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000019271
+ (id)permittedPlatforms;	// IMP=0x0000000000019264
+ (Class)whitelistedClassForResultObject;	// IMP=0x0000000000019253
- (void).cxx_destruct;	// IMP=0x00000000000194ec
@property(copy, nonatomic) NSString *resultStatus; // @synthesize resultStatus=_resultStatus;
@property(copy, nonatomic) NSString *echo; // @synthesize echo=_echo;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000193d4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019289

@end
