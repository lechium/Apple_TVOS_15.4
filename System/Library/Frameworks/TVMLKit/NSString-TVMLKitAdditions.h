//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TVMLKitAdditions)
+ (id)tvs_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(_Bool)arg3;	// IMP=0x000000000014c182
+ (id)tv_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000014c16a
- (id)tv_SHA256String;	// IMP=0x000000000014c0aa
- (id)tv_MD5String;	// IMP=0x000000000014bfea
- (id)tv_filenameSafeString;	// IMP=0x000000000014bf10
@end

