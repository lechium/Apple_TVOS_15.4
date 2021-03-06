//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebQuotaManager-Protocol.h>

@class WebSecurityOrigin;

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager>
{
    WebSecurityOrigin *_origin;	// 8 = 0x8
}

- (void)setQuota:(unsigned long long)arg1;	// IMP=0x00000000000ebc20
- (unsigned long long)quota;	// IMP=0x00000000000ebbe0
- (unsigned long long)usage;	// IMP=0x00000000000ebba0
- (id)origin;	// IMP=0x00000000000ebb90
- (id)initWithOrigin:(id)arg1;	// IMP=0x00000000000ebb40

@end

