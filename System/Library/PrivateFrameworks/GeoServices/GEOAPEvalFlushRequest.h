//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOAPEvalFlushRequest <GEOXPCRequest>
{
}

+ (Class)replyClass;	// IMP=0x0000000000c0939d
- (_Bool)expectsReply;	// IMP=0x0000000000c09455
- (_Bool)isValid;	// IMP=0x0000000000c0944d
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000000c0941e
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000c093d0
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x0000000000c093ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
