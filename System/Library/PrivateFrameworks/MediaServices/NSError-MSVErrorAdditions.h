//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (MSVErrorAdditions)
+ (id)_msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 userInfo:(id)arg4 debugDescriptionFormat:(id)arg5 arguments:(struct __va_list_tag [1])arg6;	// IMP=0x0000000000018d91
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;	// IMP=0x0000000000018ce5
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;	// IMP=0x0000000000018c34
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;	// IMP=0x0000000000018b86
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;	// IMP=0x0000000000018ad1
+ (id)MSVErrorWithMissingDependencies:(id)arg1;	// IMP=0x0000000000018fc5
+ (id)MSVErrorWithMissingDependency:(id)arg1;	// IMP=0x0000000000018f05
- (id)msv_analyticSignature;	// IMP=0x0000000000018531
@property(readonly, nonatomic) NSError *msv_underlyingError;
- (id)msv_description;	// IMP=0x0000000000017f41
- (id)msv_codeDescription;	// IMP=0x0000000000017d9b
- (id)msv_errorByUnwrappingDomain:(id)arg1 code:(long long)arg2;	// IMP=0x0000000000017d3d
- (id)msv_errorByUnwrappingDomain:(id)arg1;	// IMP=0x0000000000017b49
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;	// IMP=0x0000000000017a22
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;	// IMP=0x0000000000017908
- (id)msv_errorByRemovingUnsafeUserInfo;	// IMP=0x000000000001769e
@end
