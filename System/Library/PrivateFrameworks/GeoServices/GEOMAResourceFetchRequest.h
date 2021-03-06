//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSDictionary, NSString;

@interface GEOMAResourceFetchRequest <GEOXPCRequest>
{
    unsigned long long _type;	// 8 = 0x8
    NSDictionary *_extras;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
}

+ (Class)replyClass;	// IMP=0x0000000000fffe6f
- (void).cxx_destruct;	// IMP=0x0000000001000354
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)expectsReply;	// IMP=0x00000000010002e3
- (_Bool)isValid;	// IMP=0x00000000010002db
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000001000117
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000fffea2
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x0000000000fffe80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

