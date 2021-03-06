//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNFoundationError : NSObject
{
}

+ (_Bool)ifResultIsNo:(_Bool)arg1 setOutputError:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064e0b
+ (_Bool)ifResultIsNo:(_Bool)arg1 setOutputError:(id *)arg2 toError:(id)arg3;	// IMP=0x0000000000064d5c
+ (id)ifResultIsNil:(id)arg1 setOutputError:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064cde
+ (id)ifResultIsNil:(id)arg1 setOutputError:(id *)arg2 toError:(id)arg3;	// IMP=0x0000000000064c23
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0000000000064b49
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000000064b23
+ (id)errorWithErrno:(int)arg1 userInfo:(id)arg2;	// IMP=0x0000000000064af7
+ (id)errorWithErrnoAndUserInfo:(id)arg1;	// IMP=0x0000000000064aa7
+ (id)errorWithErrno:(int)arg1;	// IMP=0x0000000000064a93
+ (id)errorWithErrno;	// IMP=0x0000000000064a6b
+ (_Bool)isError:(id)arg1 errorWithDomain:(id)arg2 code:(long long)arg3;	// IMP=0x00000000000649cf
+ (_Bool)isCertificateError:(id)arg1;	// IMP=0x0000000000064910
+ (_Bool)isFileAlreadyExistsError:(id)arg1;	// IMP=0x00000000000648ee
+ (_Bool)isFileNotFoundError:(id)arg1;	// IMP=0x0000000000064848
+ (_Bool)isNotImplementedError:(id)arg1;	// IMP=0x0000000000064829
+ (id)notImplementedError;	// IMP=0x0000000000064801
+ (_Bool)isCanceledError:(id)arg1;	// IMP=0x00000000000647df
+ (id)userCanceledError;	// IMP=0x00000000000647b4
+ (_Bool)isTimeoutError:(id)arg1;	// IMP=0x0000000000064795
+ (id)timeoutError;	// IMP=0x000000000006476d

@end

