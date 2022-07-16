//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSCopying-Protocol.h>

@class NSString;

@interface CNFoundationSocialProfile : NSObject <NSCopying>
{
    NSString *_urlString;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    NSString *_userIdentifier;	// 24 = 0x18
    NSString *_service;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
}

+ (id)emptySocialProfile;	// IMP=0x000000000001c1f9
- (void).cxx_destruct;	// IMP=0x000000000001c8c8
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *service; // @synthesize service=_service;
@property(readonly, copy) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(readonly, copy) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *urlString; // @synthesize urlString=_urlString;
- (unsigned long long)hash;	// IMP=0x000000000001c64e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c323
- (id)description;	// IMP=0x000000000001c263
- (_Bool)isEmpty;	// IMP=0x000000000001c235
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c1ee
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5;	// IMP=0x000000000001c0ac

@end

