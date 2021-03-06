//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMFFetchProfilesRequest
{
    unsigned long long _filterFlags;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000023e65
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000023e5d
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000023e55
+ (id)permittedPlatforms;	// IMP=0x0000000000023e48
+ (Class)whitelistedClassForResultObject;	// IMP=0x0000000000023e37
@property(nonatomic) unsigned long long filterFlags; // @synthesize filterFlags=_filterFlags;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023f23
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023e6d
- (id)init;	// IMP=0x0000000000023df4

@end

