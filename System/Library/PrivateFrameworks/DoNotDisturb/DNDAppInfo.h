//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDApplicationIdentifier, NSString, NSURL;

@interface DNDAppInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    long long _source;	// 8 = 0x8
    DNDApplicationIdentifier *_applicationIdentifier;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSURL *_storeIconURL;	// 32 = 0x20
    NSURL *_cachedIconURL;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d376
- (void).cxx_destruct;	// IMP=0x000000000000d6f1
@property(readonly, copy, nonatomic) NSURL *cachedIconURL; // @synthesize cachedIconURL=_cachedIconURL;
@property(readonly, copy, nonatomic) NSURL *storeIconURL; // @synthesize storeIconURL=_storeIconURL;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) DNDApplicationIdentifier *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d539
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d37e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d33e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d333
- (id)description;	// IMP=0x000000000000d1bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000cdb0
- (unsigned long long)hash;	// IMP=0x000000000000cca7
- (id)_initWithAppInfo:(id)arg1;	// IMP=0x000000000000cba8
- (id)initWithSource:(long long)arg1 applicationIdentifier:(id)arg2 displayName:(id)arg3 storeIconURL:(id)arg4 cachedIconURL:(id)arg5;	// IMP=0x000000000000ca96

@end
