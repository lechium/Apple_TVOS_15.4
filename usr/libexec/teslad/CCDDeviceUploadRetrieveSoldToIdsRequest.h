//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DEPDeviceUploadOrganization;

@interface CCDDeviceUploadRetrieveSoldToIdsRequest
{
    DEPDeviceUploadOrganization *_organization;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000b4f4
@property(retain, nonatomic) DEPDeviceUploadOrganization *organization; // @synthesize organization=_organization;
- (id)requestBody;	// IMP=0x001000000000b405
- (id)endpointPath;	// IMP=0x001000000000b3f1
- (id)httpMethod;	// IMP=0x001000000000b3e4
- (long long)requestType;	// IMP=0x001000000000b3d9

@end

