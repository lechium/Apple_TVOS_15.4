//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CloudServicesError : NSObject
{
}

+ (id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3;	// IMP=0x0040000000056a63
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;	// IMP=0x00100000000568e9
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;	// IMP=0x0010000000056729
+ (id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3;	// IMP=0x0010000000056594
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3;	// IMP=0x00100000000563ff
+ (id)errorWithCode:(long long)arg1 format:(id)arg2;	// IMP=0x0010000000056297
+ (id)sanitizedError:(id)arg1;	// IMP=0x00100000000561a1
+ (long long)codeForErrno:(long long)arg1;	// IMP=0x00100000000560ef
+ (long long)codeForNSError:(id)arg1;	// IMP=0x0010000000055eaf

@end

