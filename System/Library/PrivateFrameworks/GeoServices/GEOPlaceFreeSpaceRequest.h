//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOPlaceFreeSpaceRequest <GEOXPCRequest>
{
    unsigned long long _freeBytes;	// 8 = 0x8
}

+ (Class)replyClass;	// IMP=0x0000000001032d26
@property(nonatomic) unsigned long long freeBytes; // @synthesize freeBytes=_freeBytes;
- (_Bool)expectsReply;	// IMP=0x0000000001032e65
- (_Bool)isValid;	// IMP=0x0000000001032e5d
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000001032de8
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000001032d59
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x0000000001032d37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

