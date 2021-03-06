//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (EKAdditions)
+ (_Bool)_cal_serializedEntryForKey:(id)arg1 value:(id)arg2 outKey:(id *)arg3 outValue:(id *)arg4;	// IMP=0x000000000003d9eb
+ (id)errorWithDomain:(id)arg1 code:(unsigned long long)arg2 description:(id)arg3 underlyingError:(id)arg4 reason:(id)arg5;	// IMP=0x000000000006507d
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;	// IMP=0x000000000006504b
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;	// IMP=0x0000000000065033
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;	// IMP=0x000000000006501b
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0000000000064f89
+ (id)errorWithEKErrorCode:(long long)arg1;	// IMP=0x0000000000064f25
+ (id)errorWithCADErrorCode:(int)arg1 description:(id)arg2;	// IMP=0x0000000000064ef3
+ (id)errorWithCADErrorCode:(int)arg1;	// IMP=0x0000000000064e8f
+ (id)errorWithCADResult:(int)arg1;	// IMP=0x0000000000064e38
+ (id)_defaultDescriptionForEKErrorCode:(long long)arg1;	// IMP=0x0000000000064964
+ (id)_defaultDescriptionForCADErrorCode:(int)arg1;	// IMP=0x00000000000647d4
- (id)cal_serializableError;	// IMP=0x000000000003e096
- (id)cal_serializableUserInfo;	// IMP=0x000000000003dc73
- (struct __SecTrust *)cal_trustInfoCopy;	// IMP=0x000000000003d933
- (_Bool)cal_isCertificateError;	// IMP=0x000000000003d805
@end

