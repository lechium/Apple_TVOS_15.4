//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MSProtocolUtilities : NSObject
{
}

+ (void)applyUserDefaultOverridesToResponse:(id)arg1;	// IMP=0x000000000009830c
+ (void)fetchMPSStateWithBaseAvailabilityURL:(id)arg1 personID:(id)arg2 originalLibrarySize:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000097c26
+ (id)_urlSession;	// IMP=0x0000000000097bf6
+ (id)appleIDSession;	// IMP=0x0000000000097bc6
+ (id)retryAfterDateBasedOnRetryAfterHeaderString:(id)arg1;	// IMP=0x0000000000097907
+ (id)deviceInfoDictForPersonID:(id)arg1;	// IMP=0x00000000000976ec
+ (id)Win32SHA1OfUDID:(id)arg1;	// IMP=0x00000000000975a2

@end

