//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CPLAdditions)
- (id)cplSafeErrorForXPC;	// IMP=0x00000000000a65ae
- (id)_cplSafeUserInfoForXPCDidChange:(_Bool *)arg1;	// IMP=0x00000000000a62a3
- (id)cplShortDomainDescription;	// IMP=0x00000000000a61ee
- (id)cplUnderlyingPOSIXError;	// IMP=0x00000000000a60f7
- (_Bool)isCPLOperationDeferredError;	// IMP=0x00000000000a60e0
- (_Bool)isCPLOperationCancelledError;	// IMP=0x00000000000a6073
- (_Bool)isCPLError;	// IMP=0x00000000000a6028
- (_Bool)isCPLErrorWithCode:(long long)arg1;	// IMP=0x00000000000a5fbe
@end

