//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/RPSignedInUserProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RPSignedInUserProvider : NSObject <RPSignedInUserProvider>
{
}

- (unsigned int)signedInUserID;	// IMP=0x00000000000580d9
- (_Bool)supportsMultipleUsers;	// IMP=0x00000000000580d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

