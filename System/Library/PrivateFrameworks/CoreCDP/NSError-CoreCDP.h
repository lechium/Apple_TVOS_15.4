//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CoreCDP)
+ (id)cdp_errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x000000000000f745
+ (id)cdp_errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x000000000000f71f
+ (id)cdp_errorWithCode:(long long)arg1;	// IMP=0x000000000000f70b
- (_Bool)cdp_isLoginSoftLimit;	// IMP=0x000000000000f8a2
- (_Bool)cdp_isLoginHardLimit;	// IMP=0x000000000000f889
- (_Bool)cdp_isCDPErrorWithCode:(long long)arg1;	// IMP=0x000000000000f818
- (_Bool)shouldDisplayToUser;	// IMP=0x0000000000019edb
@end

