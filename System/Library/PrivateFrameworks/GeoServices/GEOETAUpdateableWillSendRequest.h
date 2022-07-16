//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOETAUpdateableWillSendRequest <GEOXPCRequest>
{
}

+ (Class)replyClass;	// IMP=0x000000000097931b
- (_Bool)expectsReply;	// IMP=0x00000000009793b1
- (_Bool)isValid;	// IMP=0x00000000009793a9
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x000000000097937a
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000097932c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
