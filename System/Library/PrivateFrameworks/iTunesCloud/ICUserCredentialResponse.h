//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICUserIdentityProperties;

@interface ICUserCredentialResponse : NSObject
{
    ICUserIdentityProperties *_identityProperties;	// 8 = 0x8
    ICUserIdentityProperties *_iCloudIdentityProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069dc7
@property(copy, nonatomic) ICUserIdentityProperties *iCloudIdentityProperties; // @synthesize iCloudIdentityProperties=_iCloudIdentityProperties;
@property(copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;

@end
