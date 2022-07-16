//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCReply-Protocol.h>

@class NSString;

@interface GEOPlaceCalculateFreeableSpaceReply <GEOXPCReply>
{
    unsigned long long _freeableBytes;	// 32 = 0x20
}

@property(nonatomic) unsigned long long freeableBytes; // @synthesize freeableBytes=_freeableBytes;
- (_Bool)isValid;	// IMP=0x0000000001032cfc
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000001032c87
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000001032bf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
