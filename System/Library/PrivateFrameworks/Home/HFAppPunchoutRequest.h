//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface HFAppPunchoutRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSURL *_payloadURL;	// 24 = 0x18
    NSURL *_storeURL;	// 32 = 0x20
}

+ (id)_openApplicationService;	// IMP=0x0000000000003134
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002d7c
+ (id)handleRequest:(id)arg1;	// IMP=0x00000000000022c2
+ (_Bool)canHandleBundleID:(id)arg1;	// IMP=0x0000000000002236
- (void).cxx_destruct;	// IMP=0x00000000000031f7
@property(readonly, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(readonly, nonatomic) NSURL *payloadURL; // @synthesize payloadURL=_payloadURL;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000002fde
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002ec6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002d84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002c33
- (id)initWithName:(id)arg1 bundleID:(id)arg2 payloadURL:(id)arg3 storeURL:(id)arg4;	// IMP=0x0000000000002154

@end

