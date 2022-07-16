//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CCDError : NSObject
{
}

+ (id)_cloudConfigErrorResponses;	// IMP=0x00400000000049c6
+ (id)cloudConfigErrorInResponse:(id)arg1;	// IMP=0x0010000000004946
+ (id)_errorStringForResponse:(id)arg1;	// IMP=0x0010000000004814
+ (id)nonceExpiredError;	// IMP=0x0010000000004757
+ (id)deviceNotEnrolledError;	// IMP=0x001000000000469a
+ (id)deviceAlreadyEnrolledError;	// IMP=0x00100000000045dd
+ (id)deviceNotFoundError;	// IMP=0x0010000000004520
+ (id)profileNotFoundError;	// IMP=0x0010000000004463
+ (id)profileNotActiveError;	// IMP=0x00100000000043a6
+ (id)invalidProfileError;	// IMP=0x00100000000042e9
+ (id)invalidSignatureError;	// IMP=0x001000000000422c
+ (id)serverTrustError;	// IMP=0x001000000000416f
+ (MISSING_TYPE *)serviceBusyError;	// IMP=0x00100000000040b2
+ (id)teslaServiceDownError;	// IMP=0x0010000000003ff5
+ (id)invalidDeviceError;	// IMP=0x0010000000003f38
+ (id)maxRetriesExceededError;	// IMP=0x0010000000003e7b
+ (id)badFormatError;	// IMP=0x0010000000003dbe
+ (id)internalErrorWithCode:(long long)arg1;	// IMP=0x0010000000003cf7
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 errorType:(id)arg4;	// IMP=0x0010000000003b63

@end
