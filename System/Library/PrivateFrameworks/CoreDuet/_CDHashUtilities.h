//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _CDHashUtilities : NSObject
{
}

+ (unsigned long long)FNV1aForString:(id)arg1;	// IMP=0x0000000000049f32
+ (unsigned long long)FNV1aForData:(id)arg1;	// IMP=0x0000000000049e8e
+ (id)sha256Hash:(id)arg1 withSalt:(id)arg2;	// IMP=0x0000000000049d34
+ (id)hexStringFromData:(id)arg1;	// IMP=0x0000000000049c51
+ (id)md5forDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049bdf
+ (id)md5ForObjectDescription:(id)arg1;	// IMP=0x0000000000049b7d
+ (id)md5ForString:(id)arg1;	// IMP=0x0000000000049b0a
+ (id)md5ForData:(id)arg1;	// IMP=0x0000000000049a0d
+ (id)sha1ForData:(id)arg1;	// IMP=0x00000000000498e0
+ (id)sha1ForString:(id)arg1;	// IMP=0x000000000004984f

@end

