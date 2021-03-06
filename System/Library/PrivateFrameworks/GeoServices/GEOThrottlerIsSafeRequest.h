//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeRequest <GEOXPCRequest>
{
    _Bool _nextSafeRequestTime;	// 8 = 0x8
    _Bool _availableRequestCount;	// 9 = 0x9
    _Bool _includeToken;	// 10 = 0xa
    int _requestKindType;	// 12 = 0xc
    int _requestKindSubtype;	// 16 = 0x10
    GEODataRequestThrottlerToken *_throttlerToken;	// 24 = 0x18
}

+ (Class)replyClass;	// IMP=0x0000000000406267
- (void).cxx_destruct;	// IMP=0x000000000040669a
@property(retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken; // @synthesize throttlerToken=_throttlerToken;
@property(nonatomic) _Bool includeToken; // @synthesize includeToken=_includeToken;
@property(nonatomic) _Bool availableRequestCount; // @synthesize availableRequestCount=_availableRequestCount;
@property(nonatomic) _Bool nextSafeRequestTime; // @synthesize nextSafeRequestTime=_nextSafeRequestTime;
@property(nonatomic) int requestKindSubtype; // @synthesize requestKindSubtype=_requestKindSubtype;
@property(nonatomic) int requestKindType; // @synthesize requestKindType=_requestKindType;
- (_Bool)expectsReply;	// IMP=0x00000000004065cd
- (_Bool)isValid;	// IMP=0x000000000040658c
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000000406437
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000040629a
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x0000000000406278

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

