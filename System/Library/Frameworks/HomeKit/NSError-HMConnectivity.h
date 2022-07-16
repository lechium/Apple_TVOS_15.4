//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HMConnectivity)
+ (id)hm_errorWithNWError:(id)arg1;	// IMP=0x000000000000fc78
+ (id)hmPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x000000000004b63a
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x000000000004b61c
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x000000000004b5f6
+ (id)hmPrivateErrorWithCode:(long long)arg1;	// IMP=0x000000000004b5d0
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x000000000004b4f6
+ (id)hmInternalErrorWithCode:(long long)arg1;	// IMP=0x000000000004b4db
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x000000000004b4b5
+ (id)hmErrorWithCode:(long long)arg1;	// IMP=0x000000000004b49a
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;	// IMP=0x000000000004b477
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x000000000004b1e0
@property(readonly, copy, nonatomic) NSError *hmPublicError;
@property(readonly, nonatomic, getter=isHMError) _Bool hmError;
@end

