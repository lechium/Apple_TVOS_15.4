//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCReply-Protocol.h>

@class GEOImageServiceResponse, NSString;

@interface GEOImageServiceReplySimple <GEOXPCReply>
{
    GEOImageServiceResponse *_response;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000011409f8
@property(retain, nonatomic) GEOImageServiceResponse *response; // @synthesize response=_response;
- (_Bool)isValid;	// IMP=0x0000000001140967
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x00000000011408a3
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000011407a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
