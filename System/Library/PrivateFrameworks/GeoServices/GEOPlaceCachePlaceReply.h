//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCReply-Protocol.h>

@class NSArray, NSString;

@interface GEOPlaceCachePlaceReply <GEOXPCReply>
{
    NSArray *_identifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001032b25
@property(retain, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (_Bool)isValid;	// IMP=0x0000000001032af8
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000001032a14
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000010328a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

