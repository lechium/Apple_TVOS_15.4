//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CloudServicesError : NSObject
{
}

+ (id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3;	// IMP=0x000000000001ae5e
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;	// IMP=0x000000000001ace4
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;	// IMP=0x000000000001ab24
+ (id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3;	// IMP=0x000000000001a98f
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3;	// IMP=0x000000000001a7fa
+ (id)errorWithCode:(long long)arg1 format:(id)arg2;	// IMP=0x000000000001a692
+ (id)sanitizedError:(id)arg1;	// IMP=0x000000000001a59c
+ (long long)codeForErrno:(long long)arg1;	// IMP=0x000000000001a4ea
+ (long long)codeForNSError:(id)arg1;	// IMP=0x000000000001a2aa

@end

