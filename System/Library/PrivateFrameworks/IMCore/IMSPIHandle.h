//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMHandle, NSString;

@interface IMSPIHandle : NSObject
{
    NSString *_address;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    _Bool _isMe;	// 24 = 0x18
    IMHandle *_imHandle;	// 32 = 0x20
    _Bool _haveFetchedIMHandle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000139327
@property(readonly) _Bool isMe; // @synthesize isMe=_isMe;
@property(readonly) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly) NSString *address; // @synthesize address=_address;
- (unsigned long long)hash;	// IMP=0x000000000013927e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001391a4
@property(readonly) NSString *cnContactID;
@property(readonly) NSString *displayName;
- (id)handle;	// IMP=0x0000000000138fe2
@property(readonly) NSString *businessName;
@property(readonly) _Bool isBusiness;
- (id)description;	// IMP=0x0000000000138c58
- (id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(_Bool)arg3;	// IMP=0x0000000000138bb4

@end

