//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEOAbstractRequestResponseTicket
{
    GEOPDPlaceRequest *_request;	// 48 = 0x30
    id _requestToken;	// 56 = 0x38
    GEOPDPlaceResponse *_response;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000006fbda9
- (CDStruct_d1a7ebee)dataRequestKind;	// IMP=0x00000000006fbd4c
- (void)cancel;	// IMP=0x00000000006fbccf
- (void)performSubmitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x00000000006fba7a
- (void)performSubmitWithHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x00000000006fba63
- (id)initWithRequest:(id)arg1 traits:(id)arg2;	// IMP=0x00000000006fb9eb
- (id)initWithTraits:(id)arg1;	// IMP=0x00000000006fb9bc

@end
