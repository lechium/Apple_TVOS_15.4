//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface SiriPunchoutRequest : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    long long _punchoutStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000526d
@property(nonatomic) long long punchoutStyle; // @synthesize punchoutStyle=_punchoutStyle;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000516e
- (id)init;	// IMP=0x0000000000005132

@end

