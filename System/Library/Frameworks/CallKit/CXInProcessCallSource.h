//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSURL *_bundleURL;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    CXInProcessProvider *_provider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000041ab
@property(retain, nonatomic) CXInProcessProvider *provider; // @synthesize provider=_provider;
- (id)localizedName;	// IMP=0x0000000000004189
- (id)bundleURL;	// IMP=0x0000000000004178
- (id)bundleIdentifier;	// IMP=0x0000000000004167
- (_Bool)isPermittedToUsePrivateAPI;	// IMP=0x000000000000415f
- (_Bool)isPermittedToUsePublicAPI;	// IMP=0x0000000000004157
- (CDStruct_6ad76789)auditToken;	// IMP=0x0000000000004126
- (int)processIdentifier;	// IMP=0x000000000000411c
- (id)vendorProtocolDelegate;	// IMP=0x000000000000410a
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000000003e71

@end
