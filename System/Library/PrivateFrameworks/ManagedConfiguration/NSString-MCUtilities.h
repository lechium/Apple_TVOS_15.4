//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (MCUtilities)
+ (id)MCMakeUUID;	// IMP=0x000000000001cd2d
- (unsigned int)MCHash;	// IMP=0x000000000001cbbf
- (id)MCAppendDeviceName;	// IMP=0x000000000001cb44
- (id)MCSHA256DigestWithSalt:(id)arg1;	// IMP=0x000000000001ca03
- (id)MCSHA256DigestWithPasscodeSalt;	// IMP=0x000000000001c97d
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;	// IMP=0x000000000001c82a
- (id)MCOldStyleSafeFilenameHash;	// IMP=0x000000000001c816
- (id)MCHashedIdentifier;	// IMP=0x000000000001c7c4
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;	// IMP=0x000000000001c6cf
- (id)MCHashedFilenameWithExtension:(id)arg1;	// IMP=0x000000000001c6b3
- (id)MCRemoveAppExternalVersionIDParameter;	// IMP=0x000000000009678a
- (id)MCAppendGreenteaSuffix;	// IMP=0x00000000000966f7
@end

