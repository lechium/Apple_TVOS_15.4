//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CCDEnrollmentRetrieveCloudConfigurationOperation
{
}

- (void)_setLockdownCloudConfigAvailableKeyIfNeededWithError:(id)arg1;	// IMP=0x004000000000bf2b
- (void)_setEnrolledDeviceRequirementsIfNeededForCloudConfigurationDictionary:(id)arg1;	// IMP=0x001000000000bd4a
- (_Bool)_convertCloudConfigDictionary:(id)arg1 toManagedConfiguration:(id *)arg2;	// IMP=0x001000000000bc94
- (id)responseWithResponseData:(id)arg1 contentType:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000000b721
- (id)errorForStatusCode:(long long)arg1 responseData:(id)arg2;	// IMP=0x001000000000b634

@end

