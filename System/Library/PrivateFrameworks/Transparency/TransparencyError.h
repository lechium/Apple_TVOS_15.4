//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface TransparencyError : NSError
{
}

+ (id)errorWithError:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000000056d3a
+ (_Bool)hasUnknownSPKIHashError:(id *)arg1;	// IMP=0x0000000000056b84
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x0000000000056ac5
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 description:(id)arg4;	// IMP=0x0000000000056a0a
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 description:(id)arg5;	// IMP=0x0000000000056957
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 description:(id)arg5 arguments:(struct __va_list_tag [1])arg6;	// IMP=0x0000000000056793

@end

