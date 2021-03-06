//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface DMFFetchDeclarationsRequest
{
    _Bool _includeInternalState;	// 8 = 0x8
    _Bool _includePayloadContents;	// 9 = 0x9
    NSString *_organizationIdentifier;	// 16 = 0x10
    NSArray *_payloadIdentifiers;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000020e31
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000020e29
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000020e21
+ (id)permittedPlatforms;	// IMP=0x0000000000020e14
+ (Class)whitelistedClassForResultObject;	// IMP=0x0000000000020e03
- (void).cxx_destruct;	// IMP=0x000000000002122f
@property(nonatomic) _Bool includePayloadContents; // @synthesize includePayloadContents=_includePayloadContents;
@property(nonatomic) _Bool includeInternalState; // @synthesize includeInternalState=_includeInternalState;
@property(copy, nonatomic) NSArray *payloadIdentifiers; // @synthesize payloadIdentifiers=_payloadIdentifiers;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002103f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020e39

@end

