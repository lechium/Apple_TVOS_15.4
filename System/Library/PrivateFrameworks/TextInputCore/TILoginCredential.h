//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>

@class NSString;

@interface TILoginCredential : NSObject <NSCopying>
{
    NSString *_username;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
    NSString *_site;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a5c4
@property(readonly, nonatomic) NSString *site; // @synthesize site=_site;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (id)description;	// IMP=0x000000000000a496
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a1bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a11b
- (id)initWithUsername:(id)arg1 password:(id)arg2 site:(id)arg3;	// IMP=0x000000000000a064

@end

