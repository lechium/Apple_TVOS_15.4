//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFSetDeviceNameRequest
{
    NSString *_name;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039911
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000039909
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000039901
+ (id)permittedPlatforms;	// IMP=0x00000000000398f4
- (void).cxx_destruct;	// IMP=0x0000000000039aad
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000399f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000039919

@end
