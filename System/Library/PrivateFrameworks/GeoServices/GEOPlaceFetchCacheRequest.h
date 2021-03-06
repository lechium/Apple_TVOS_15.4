//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOPlaceFetchCacheRequest <GEOXPCRequest>
{
}

+ (Class)replyClass;	// IMP=0x0000000001031ff5
- (_Bool)expectsReply;	// IMP=0x00000000010320ad
- (_Bool)isValid;	// IMP=0x00000000010320a5
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000001032076
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000001032028
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x0000000001032006

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

