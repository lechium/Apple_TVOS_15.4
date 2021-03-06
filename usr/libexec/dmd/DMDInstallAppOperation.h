//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMDAppMetadata;

@interface DMDInstallAppOperation
{
    DMDAppMetadata *_metadata;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x004000000004da4f
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004da1d
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004d8d3
- (void).cxx_destruct;	// IMP=0x002000000004e167
@property(retain, nonatomic) DMDAppMetadata *metadata; // @synthesize metadata=_metadata;
- (void)_resumeInstallationForRequest:(id)arg1;	// IMP=0x001000000004e047
- (void)_runWithRequest:(id)arg1;	// IMP=0x001000000004dddc
- (void)installAppForRequest:(id)arg1;	// IMP=0x001000000004dbea
- (void)runWithRequest:(id)arg1;	// IMP=0x001000000004da5c

@end

