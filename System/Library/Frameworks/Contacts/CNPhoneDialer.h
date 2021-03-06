//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNPhoneDialer : NSObject
{
}

+ (id)messageWithAdditionalParameters:(id)arg1;	// IMP=0x000000000009a11a
+ (void)loadIdentityServices;	// IMP=0x000000000009a061
+ (_Bool)sendMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000099f08
+ (id)cancelMessageWithDialMessageID:(id)arg1;	// IMP=0x0000000000099e20
+ (_Bool)cancelDialMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000099d76
+ (id)dialMessageWithDataValue:(id)arg1 displayName:(id)arg2;	// IMP=0x0000000000099c3d
+ (id)sendDialMessage:(id)arg1 displayName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000099b6f
+ (id)sanitizePhoneNumber:(id)arg1;	// IMP=0x0000000000099b59
+ (id)URLWithPhoneNumber:(id)arg1;	// IMP=0x0000000000099ac5
+ (id)dialNumber:(id)arg1 displayName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000099a51

@end

