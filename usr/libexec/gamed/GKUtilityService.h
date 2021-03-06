//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKUtilityService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000018ccfe
+ (Class)interfaceClass;	// IMP=0x001000000018cced
- (oneway void)openGameCenterSettings;	// IMP=0x002000000018e1a7
- (oneway void)deleteCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000018dd17
- (oneway void)loadCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000018d974
- (oneway void)cacheImageData:(id)arg1 inSubdirectory:(id)arg2 withFileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000018d64f
- (oneway void)requestImageDataForURL:(id)arg1 subdirectory:(id)arg2 fileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000018d55a
- (id)_bagValuesForKeys:(id)arg1;	// IMP=0x001000000018d2b3
- (oneway void)getStoreBagValuesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018cf7e
- (id)validateEnvironment;	// IMP=0x001000000018cd11
- (_Bool)requiresAuthentication;	// IMP=0x001000000018cd09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

