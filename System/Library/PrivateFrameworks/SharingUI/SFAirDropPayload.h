//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, UIImage;

@interface SFAirDropPayload : NSObject
{
    _Bool _wasString;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    UIImage *_previewImage;	// 40 = 0x28
    NSString *_payloadDescription;	// 48 = 0x30
    long long _identifer;	// 56 = 0x38
}

+ (id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(long long)arg4;	// IMP=0x0000000000005606
+ (id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(long long)arg5;	// IMP=0x000000000000551f
- (void).cxx_destruct;	// IMP=0x0000000000005728
@property(nonatomic) long long identifer; // @synthesize identifer=_identifer;
@property(copy, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool wasString; // @synthesize wasString=_wasString;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000537a
- (unsigned long long)hash;	// IMP=0x00000000000052f9
- (id)description;	// IMP=0x000000000000528e

@end

