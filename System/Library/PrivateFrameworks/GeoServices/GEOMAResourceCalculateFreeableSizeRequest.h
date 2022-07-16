//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOMAResourceCalculateFreeableSizeRequest <GEOXPCRequest>
{
    int _urgency;	// 8 = 0x8
}

+ (Class)replyClass;	// IMP=0x00000000010006fd
@property(nonatomic) int urgency; // @synthesize urgency=_urgency;
- (_Bool)expectsReply;	// IMP=0x000000000100083b
- (_Bool)isValid;	// IMP=0x0000000001000833
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x00000000010007be
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000001000730
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x000000000100070e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
