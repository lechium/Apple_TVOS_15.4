//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCReply-Protocol.h>

@class GEOPDPlaceResponse, NSString, NSUUID;

@interface GEOPlaceReplyMessage <GEOXPCReply>
{
    NSUUID *_requestUUID;	// 32 = 0x20
    GEOPDPlaceResponse *_response;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000001031dbb
@property(retain, nonatomic) GEOPDPlaceResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSUUID *requestUUID; // @synthesize requestUUID=_requestUUID;
- (_Bool)isValid;	// IMP=0x0000000001031d05
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000001031be1
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000001031a96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

